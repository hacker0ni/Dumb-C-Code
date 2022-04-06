#include <stdio.h>

int main() { 
        int limit;
        printf("How many numbers do you want to see in your Fibonacci series? :\n");
        scanf("%d",&limit);
        if ( limit > 0 ) {

                int counter = 1;

                unsigned long long x = 1;
                unsigned long long y = 1;
                unsigned long long z = 0;
                while ( counter <= limit ) {
                        printf("%llu ", x);
                        x = y + z;
                        z = y;
                        y = x;
                        counter++;
                }
                return(0);
        } else { printf("Range must be above 0") ; return(1); }
}
