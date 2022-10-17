int maxProfit(int* prices, int pricesSize){
    int lowestPice = *prices;
    int profit = 0;
    for(int i = 1; i<pricesSize; i++){
        if(lowestPice>*(prices+i)){
            lowestPice = *(prices+i);
        }
        if(*(prices+i)-lowestPice>profit){
            profit = *(prices+i)-lowestPice;
        }
    }
    return profit;
}