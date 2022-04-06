#include <stdio.h>

int main() { 
        int limit;
        printf("How many numbers do you want to see in your Fibonacci series? :\n");
        scanf("%d",&limit);
        if ( limit > 0 ) {

                int counter = 1;

                unsigned long long x = 1;
                unsigned long long y = 1;
                while ( counter <= limit ) {
                        printf("%llu %llu ",x,y);
                        x = x+y;
                        y = x+y;
                
                        counter++;
                }
                return(0);
        } else { printf("Range must be above 0") ; return(1); }
}
