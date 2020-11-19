/* processing works in chain */
char *packets[] = {"emoclew", "otomom", "okok", "maet ruo", 0}

typedef int (*filter)(char **pkt); // -1 exit, 0 ok, 1 drop 


int readpkt(char **pkt){
    static int i=0;
    *pkt = packets[i++];
    if ((*pkt) == 0) return -1;
    return 0;
}

int skipodd(char **pkt) { 

}

int reverse(char **pkt) { 

}

int base64encode(char **pkt) { 

}

filter chain[] = {readpkt, reverse, print, base64encode, skipodd, print };

void run(){
    while(1){
        char* pkt;
        int ret =0;
        for(int i=0; ret == 0 && i< sizeof(chain)/sizeof(chain[0]; ++i){
            int ret = (chain[i])(&pkt);
        }
        if(ret ==-1)break;
    }
}

int main(){
    
    run();
}
