#include<stdio.h>
int main()
{
    int x,y;
    double result;
    printf("Enter X value is: ");
    scanf("%d",&x);
    printf("Enter Y value is: ");
    scanf("%d",&y);
    result = pow(x,y);
    printf("The result is : %.2lf\n",result);
    getch();
}
