//Using pointers to find sum and difference and update sum in a and difference in b
#include <stdio.h>
void update(int *, int*);
void update(int *a, int*b)
{
    int sum=*a+*b;
    int diff=*a-*b;
    *a=sum;
    *b=diff;
}

int main()
{
    int a,b;
    int *pa=&a;
    int *pb=&b;
    printf("Enter 2 numbers a,b=\n");
    scanf("%d%d",&a,&b);
    update(pa,pb);
    printf("a=%d\nb=%d",a,b);

}
