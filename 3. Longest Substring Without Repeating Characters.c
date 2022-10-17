int lengthOfLongestSubstring(char * s){
    int *p = calloc(128, sizeof(int));
    int maxlen = 0;
    while(*s){
        char *c = s;
        int currlen = 0;
        while(*c){
            if(p[(int)*c]==0){
                currlen++;
                p[(int)*c] = 1;
            }
            else{
                for(int i = 0; i < 128; i++){
                    p[i] = 0;
                }
                if(currlen>maxlen){
                    maxlen = currlen;
                }
                break;
            }
            c =c +1;
        }
        if(currlen>maxlen){
            maxlen = currlen;
        }
        s=s+1;
    }
    return maxlen;
}