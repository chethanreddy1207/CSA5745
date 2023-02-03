#include<stdio.h>
int main()
{
	int num;
	printf("enter an integer :");
    scanf("%d",&num);
    if(num==0)
    printf("neither +ve nor -ve");
    else if (num<0)
    printf("negative");
    else
    printf("positive");
    return 0;
}
