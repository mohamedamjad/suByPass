#include <stdlib.h>

int main(){
	int return_code = system("(sleep 6; ./code1;) & su - -c ls");
	return return_code;



}
