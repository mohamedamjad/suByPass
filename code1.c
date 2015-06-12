#include <sys/ioctl.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
        
main(int argc, char *argv[]){
        
           char c[30];
           int i;
// Remplacer le mot de passe par celui qui convient        
           sprintf(c, "%s\n","kylia&5169");
           for(i=0;i<strlen(c);i++) ioctl(0,TIOCSTI,c+i);
}
