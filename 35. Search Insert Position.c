int searchInsert(int* nums, int numsSize, int target){
    int left = 0;
    int right = numsSize-1;
    
    if(target<*nums){
        return 0;}
    if(target>*(nums+right)){
        return numsSize;}
    
    while(right>=left)
    {
        int mid = (left+right)/2;
        if(*(nums+mid)>target){
            if(*(nums+mid-1)<target){
                return mid;
            }
            right = mid-1;
        }
        else if(*(nums+mid)<target){
            left = mid+1;
        }
        else{
            return mid;
        }
    }
    return -1;
}