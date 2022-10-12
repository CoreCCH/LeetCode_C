void reverseString(char* s, int sSize){
    char buff;
    for(int i =0; i<sSize/2;i++){
        buff = *(s+sSize-1-i);
        *(s+sSize-1-i) = *(s+i);
        *(s+i) = buff;
    }
}