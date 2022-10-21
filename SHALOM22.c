#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
	printf("enter a number A\n");
    scanf("%d",&a);
	printf("enter a number B\n");
    scanf("%d",&b);
    printf("enter a number C\n");
	scanf("%d",&c);
	printf("enter a number D\n");
	scanf("%d",&d);
	printf("enter a number E\n");
	scanf("%d",&e);
	f=(a+b+c+d+e)/5;
	printf("The average of the entered number is:%d",f);
	return 0;
}
