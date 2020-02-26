#include <stdio.h>
#include <poll.h>

int main()
{
    char space = ' ';
    signed char i = 0;
    signed char n = 0;
    signed char bool = 0;

    while (1) {
        n = 0;
        printf("|");
        while(n < i){
            printf("%c", space);
            n++;
        }
        printf("*");
        n = 0;
        while(n < 49-i){
            printf("%c", space);
            n++;
        }
        printf("|\r");

        i++;
        if( i == 50) {
            bool = 1;
        }
        if(bool != 0){
            i = i - 2;
        }
        if(i == 0){
            bool = 0;
        }
        fflush(stdout);
        poll(NULL, 0, 250);
    }
    return 0;
}
