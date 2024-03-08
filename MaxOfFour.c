#include <stdio.h>
int max_of_four(int,int,int,int);
int max_of_four(int a,int b,int c,int d)
{
    if(a>b && a>c && a>d)
    return a;
    else if(b>a && b>c && b>a)
    return b;
    else if(c>a && c>b && c>d)
    return c;
    else {
    return d;
    }
    
}

int main() {
    int a, b, c, d;
    printf("Enter 4 numbers a,b,c,d=\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("Max=%d", ans);
    
    return 0;
}