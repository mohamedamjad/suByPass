#include <sys/ioctl.h>
#include <string.h>
#include <stdio.h>
        
main(int argc, char *argv[]){
        
           char c[30];
           int i;
        
           sprintf(c, "%s\n",argv[1]);
           for(i=0;i<strlen(c);i++) ioctl(0,TIOCSTI,c+i);
}
