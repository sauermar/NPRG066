#include <stdio.h>

int
main(void)
{
int hex = 0;
int line = 0;

while(hex < 128){
        while(line < 8){
                if(isprint(hex)){
                        printf("%x %c",hex, hex);
                }
                if(!isprint(hex)){
                        printf("%x NP",hex);
                }
                printf("   ");
                line++;
      hex++;
        }
        printf("\n");
        line = 0;
}
        return (0);
}
