void rotate(int* nums, int numsSize, int k){
    if(k>=numsSize){
        k = k % numsSize;
    }
    int *Arr;
    Arr = malloc( numsSize * sizeof(int) );
    for(int i = 0; i < k; i++){
        *(Arr+i) = *(nums+numsSize-k+i); 
    }
    for(int i = k; i < numsSize; i++){
        *(Arr+i) = *(nums+i-k); 
       
    }
    for(int i = 0; i< numsSize;i++){
        *(nums+i) = *(Arr+i);
    }
    free(Arr);
}