#include<stdio.h>
int main()
{
int x,y,z,k;

printf("Enter the value of x");
scanf("%d",&x);
printf("Enter the value of y");
scanf("%d",&y);
printf("Enter the value of z");
scanf("%d",&z);
k=(x+y*z/4%2-1);
printf("%d",k);
return 0;
}

