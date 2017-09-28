#include<stdio.h>
int main()
{
	int n,k,flag=0;
	scanf("%d %d",&n,&k);
	int a[n];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=1;i<(1<<n);i++)
	{
		int sum=0,temp=i;
		for(int j=0;j<n;j++,temp>>1)
		{
			if(temp & 1 == 1)
			{
				sum+=a[j];
			}
		}
		if(sum==k)
		{
			printf("Yes");
			flag=1;
			temp=i;
			for(int j=0;j<n;j++,temp>>1)
			{
				if(temp &1 == 1)
					printf("%d ",a[j]);
			}
			break;
		}
	}
	if(flag==0)
		printf("No");
	return 0;
}
