#include <stdio.h>
int addNumbers(int n);
void main()
{
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    printf("Sum = %d",addNumbers(number));
    getch();
}

int addNumbers(int n)
{
    if(n != 0)
        return n + addNumbers(n-1);
    else
        return n;
}
