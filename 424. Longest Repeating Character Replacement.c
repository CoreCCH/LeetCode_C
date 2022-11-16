int characterReplacement(char * s, int k){
    int rst= 0;
    int pt= 0;  
    while(true){
        if(*(s+pt)!='\0'){
            int pt2 = 0;
            int count = 1;
            int ctimes= k;
            char now = *(s+pt);
            while(true){
                if(*(s+pt+pt2+1)=='\0'){
                    break;
                }
                else if(now!=*(s+pt+pt2+1)){
                    if(ctimes ==0){
                        break;
                    }
                    else{
                        pt2++;
                        count++;
                        ctimes--;
                    }
                }
                else{
                    pt2++;
                    count++;
                }
            }
            pt2 = 0;
            while(true){
                if(pt<=pt2){
                    break;
                }
                else if(now!=*(s+pt-pt2-1)){
                    if(ctimes ==0){
                        break;
                    }
                    else{
                        pt2++;
                        count++;
                        ctimes--;
                    }
                }
                else{
                    pt2++;
                    count++;
                }
            }
            if(count > rst){
                rst = count;
            }
            pt++;
        }
        else{
            break;
        }
    }
    return rst;
}