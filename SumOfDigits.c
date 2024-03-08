#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,i;
    int sum=0;
    printf("Enter a number:\n");
    scanf("%d", &n);
    for(i=n;i!=0;i=i/10)
    {
        sum=sum+(i%10);
    }
    printf("Sum of digits=%d",sum);
    return 0;
}