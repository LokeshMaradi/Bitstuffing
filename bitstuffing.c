#include<stdio.h>
int main()
{
	int n,o[100],s[100],i,count=0,j=0;
	printf("Enter the amount of data:");
	scanf("%d",&n);
	printf("Enter the data:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&o[i]);
	}
	for(i=0;i<n;i++)
	{
		s[j]=o[i];
		j++;
		if(o[i]==1 && o[i-1]==0)
		{
			count=0;
		}
		if(o[i]==1)
		{
			count++;
	    }
		if(count==5)
		{
			s[j]=0;
			j++;
			count=0;
		}
	}
	printf("Orginal data:");
	for(i=0;i<n;i++)
	{
		printf("%d",o[i]);
	}
	printf("\nStuffed data:");
	for(i=0;i<=j-1;i++)
	{
		printf("%d",s[i]);
	}
	return 0;
}
