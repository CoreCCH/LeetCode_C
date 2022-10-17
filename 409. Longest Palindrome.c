int longestPalindrome(char * s){
    char *arr = calloc(128, sizeof(char));
    int output = 0;
    while(*s){
        int s_ascii = *s;
        if(arr[s_ascii] == 1){ 
            output = output + 2;
            arr[s_ascii] = 0;
        }
        else{
            arr[s_ascii] = 1;
        }
        s=s+1;
    }
    for(int i = 0; i< 128;i++){
        if(arr[i] == 1){
            output = output + 1;
            break;
        }
    }
    free(arr);
    return output;
}