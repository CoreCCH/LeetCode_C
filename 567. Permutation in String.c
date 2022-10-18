bool checkInclusion(char * s1, char * s2){
    int s1len = 0;
    int s2len = 0;
    int *arr1 = calloc(128, sizeof(int));
    int *arr2 = calloc(128, sizeof(int));
    int flag = 0;
    while(*s1){
        arr1[(int)*s1] += 1;
        s1len ++;
        s1++;
    }
    char *ss2 = s2;
    while(*ss2){
        s2len ++;
        ss2++;
    }
    if(s1len > s2len){
        return false;
    }
    while(*(s2+s1len-1)){
        free(arr2);
        int *arr2 = calloc(128, sizeof(int));
        flag = 1;
        for(int i = 0; i < s1len; i++){
            arr2[(int)*(s2+i)] += 1;
        }

        for(int i = 0; i< 128;i++){
            if(*(arr1+i)!=*(arr2+i)){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            break;
        }
        s2++;
    }
    
    if(flag == 1){
        return true;}
    else {
        return false;}
}