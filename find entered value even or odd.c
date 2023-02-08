//Find entered value is even or odd
#include<stdio.h>
int main()
{
    int num;
    printf("Enter num=");
    scanf("%d",&num);
    (num%2==0)?printf("Its even"):printf("odd");
    return 0;
}
