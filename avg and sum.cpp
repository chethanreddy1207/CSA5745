#include<stdio.h>
int main()
{
	int n,i,sum=0,numbers;
	float average;
	printf("\n please enter how many numbers u want?\n");
	scanf("%d",&n);
	printf("\n please enter the elements one by one\n");
	for(i=0;i<n;++i)
	{
		scanf("%d",&numbers);
	    sum=sum+numbers;
    }
    average=sum/n;
   	printf("\nsum of the %d numbers =%d",n,sum);
   	printf("\n average of the %d numbers = %.2f",n,average);
return 0;
}
    

