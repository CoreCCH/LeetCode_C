// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    long int left = 0;
    long int right = n;
    
    while(right >=  left)
    {
        long int bad = (left+right)/2;
        if(isBadVersion(bad) == false){
            left = bad+1;
        }
        else if(isBadVersion(bad) == true){
            if(isBadVersion(bad-1) == false)
            {
                return bad;
            }
            else{
                right = bad-1;
            }
        }
    }
    return -1;
}