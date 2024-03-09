/*For each integer  in the interval  [a,b](given as input) :
If 1<=n<=9 then print the English representation of it in lowercase.
Else if n>9  and it is an even number, then print "even".
Else if n>9 and it is an odd number, then print "odd".*/
#include <stdio.h>
void printWord(int);
void printWord(int a)
 { 
    switch(a)
    {
        case 1:printf("one");
        break;
        case 2:printf("two");
        break;
        case 3:printf("three");
        break;
        case 4:printf("four");
        break;
        case 5:printf("five");
        break;
        case 6:printf("six");
        break;
        case 7:printf("seven");
        break;
        case 8:printf("eight");
        break;
        case 9:printf("nine");
        break;
        default:if(a%2==0)
                {
                    printf("even");
                }
                else {
                printf("odd");
                }
        break;
    
    }
}
int main()
{
    int num1,num2;
    int i;
    printf("Enter 2 numbers=\n");
    scanf("%d%d",&num1,&num2);
    for(i=num1;i<=num2;i++)
    {
        printWord(i);
        printf("\n");
    }
}