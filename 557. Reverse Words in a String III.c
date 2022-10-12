char * reverseWords(char * s){
    int l = 0;
    int r = 0;
    char buff;
    while(*(s+l)){
        if(isspace(*(s+l))){
            int pt = 1;
            for(int i = r; i < (l+r)/2; i++){
                buff = *(s+i);
                *(s+i) = *(s+l-pt);
                *(s+l-pt) = buff;
                pt++;
            }
            r = l+1;
        }
        else if(*(s+l+1)==NULL){
            int pt = 0;
            for(int i = r; i < (l+r)/2+1; i++){
                buff = *(s+i);
                *(s+i) = *(s+l-pt);
                *(s+l-pt) = buff;
                pt++;
            }
            r = l+1;
        }
        l++;
    }
    return s;
}