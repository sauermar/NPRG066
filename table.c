#include <stdio.h>

int
main(void)
{
int ell = 1;
int ten = 0;

printf("Ell\tInches\tCentimeters\n");
while(ell < 31){
	if(ell % 10 == 1){
		while(ten < 25) {
		printf("-");
		ten++;	
	}
	ten = 0;
	printf("\n");
}
printf("%d\t%d\t%6.2f\n",ell,ell*45,ell*1.143*100);
ell++;
}

	return (0);
}
