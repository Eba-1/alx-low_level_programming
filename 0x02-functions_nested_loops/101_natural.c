#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: sum of natural numbers divisible by 3 or 5
 */
int main(void)
{
    int i, sum = 0;
    
    for(i = 0; i < 1024; i++) {
        if(i%3==0 || i % 5 == 0){
            sum += i;
        }
    }
    printf("%d ", sum);
    return 0;
}
