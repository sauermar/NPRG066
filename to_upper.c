#include <stdio.h>

int
main(){
int c;

while((c = getchar()) != -1) {
	#define BOUNDRY1 96
 	#define BOUNDRY2 123 	
	if(c > BOUNDRY1 && c < BOUNDRY2){
		#define UPPER c - 32
		printf("%c", UPPER);
	}else{
		printf("%c",c);	
	}
}
return 0;
}
