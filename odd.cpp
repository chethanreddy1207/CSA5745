#include<stdio.h>
int main()
{
	int n,i;
	printf("print all odd numbers till :");
	scanf("%d",&n);
	printf("Odd numbers from 1 to %d are: \n",n);
	for(i=1;i<=n;i+=2)
	{
			printf("%d\n",i);
	}
	return 0;
}
