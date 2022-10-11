/*Runtime: 0 ms, faster than 100.00% of C online submissions for Is Subsequence.*/
bool isSubsequence(char * s, char * t){
    while(*t){
        if(*s == *t){
            s++;
        }
        t++;
    }
    if(*(s++)){
        return false;
    }
    else{
        return true;
    }
}