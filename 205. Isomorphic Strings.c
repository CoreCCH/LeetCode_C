bool isIsomorphic(char * s, char * t){
    int str1[128] = {0};
    int str2[128] = {0};
    
    while(*s){
        if(str1[(int)(*s)] == 0){
            str1[(int)(*s)] = (int)(*t);
        }
        else{
            if(str1[(int)(*s)]!=(int)(*t)){
                return false;
            }
        }
        if(str2[(int)(*t)] == 0){
            str2[(int)(*t)] = (int)(*s);
        }
        else{
            if(str2[(int)(*t)]!=(int)(*s)){
                return false;
            }
        }
        
        s++;
        t++;
    }
    return true;
}