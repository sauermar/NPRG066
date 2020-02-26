#include <stdio.h>

int
main(){
int c;
int n0,n1,n2,n3,n4,n5,n6,n7,n8,n9;

n0 = n1 = n2 = n3 = n4 = n5 = n6 = n7 = n8 = n9 = 0;

while((c = getchar()) != -1) {
		if(c == '0') {++n0;}	
		if(c == '1') {++n1;}	
		if(c == '2') {++n2;}	
		if(c == '3') {++n3;}	
		if(c == '4') {++n4;}	
		if(c == '5') {++n5;}	
		if(c == '6') {++n6;}	
		if(c == '7') {++n7;}	
		if(c == '8') {++n8;}	
		if(c == '9') {++n9;}	
}

printf("0: %d\n", n0);
printf("1: %d\n", n1);
printf("2: %d\n", n2);
printf("3: %d\n", n3);
printf("4: %d\n", n4);
printf("5: %d\n", n5);
printf("6: %d\n", n6);
printf("7: %d\n", n7);
printf("8: %d\n", n8);
printf("9: %d\n", n9);

return 0;
}
