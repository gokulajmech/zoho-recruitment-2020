#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,mid,v=0;
	char *str=(char*)malloc(sizeof(char));
	while((str[n]=getchar())!='\n')
	{
		n++;
		str=(char*)realloc(str,n+1);
	}
	str[n]='\0';
	mid=n/2;
	for(int i=0;i<n;i++)
	{
		int k=n-i-1;
		int s=mid+i;
		for(int j=0;j<n;j++)
		{
			if(j>=k)
			{
				if(s<n-1)
				{
					for(int p=mid;p<=s;p++)
					{
						printf("%c",str[p]);
						j++;
					}
				
				}
				else if(v<mid)
				{
					for(int p=mid;p<n;p++)
					{
						printf("%c",str[p]);
						j++;
					}v++;
					for(int l=0;l<v;l++)
					{
						printf("%c",str[l]);
						j++;
					}
				}
			}
			else
			printf(" ");
		}
		printf("\n");
	}
}
