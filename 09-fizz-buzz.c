#include <stdio.h>

int main(void)
{
    int i;

    for (i = 1; i <= 100; i++) {
        if(i % 3 == 0 && i % 5 == 0){
            printf("%3d: FizzBuzz\n", i);
        }else if(i % 3 == 0){
            printf("%3d: Fizz\n", i);
        }else if(i % 5 == 0){
            printf("%3d: Buzz\n", i);
        }else{
            printf("%3d: %d\n", i, i);
        }
    }
    return 0;
}