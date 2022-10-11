void moveZeroes(int* nums, int numsSize){
    int p1 = 0; //pointer left
    int p2 = numsSize-1; //pointer right
    int *Arr;
    Arr = malloc( numsSize * sizeof(int) );
    for(int i = 0; i < numsSize; i++){
        if(*(nums+i)==0){
            *(Arr+p2) = 0;
            p2--;
        }
        else{
            *(Arr+p1) = *(nums+i);
            p1++;
        }
    }
    for(int i = 0; i< numsSize;i++){
        *(nums+i) = *(Arr+i);
    }
    free(Arr);
}