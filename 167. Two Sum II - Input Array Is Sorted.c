/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    int l = 0;
    int r = numbersSize-1;
    int *Arr;
    Arr = calloc(2, sizeof(int));
    *returnSize = 2;
    
    while(l<r){
        if (*(numbers+l)+*(numbers+r)>target){
            r--;
        }
        else if (*(numbers+l)+*(numbers+r)<target){
            l++;
        }
        else if (*(numbers+l)+*(numbers+r) == target){
            *Arr = l+1;
            *(Arr+1) = r+1;
            return Arr;
        }
    }
    return Arr;
}