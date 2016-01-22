#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int n;
scanf("%d",&n);
int buf[20];
for(int i=0;i<n;i++)
{
	int count[10] = {0};
	char becheck[128] = {'\0'};
	char nbuf[64] = { '\0' };
	char ns[64] = { '\n' };
	char ans[64] = { '\0' };
	if (scanf("%d", &buf[i]) == 0)
		printf("scanf error\n");
	for(int j=1;j<=buf[i];j++)
	{
		sprintf(nbuf,"%d",j);
		//printf("%s\n", nbuf);
	    strcat(becheck,nbuf);
	}
	printf("%s\n", becheck);
	for(int j=0;j<strlen(becheck);j++)
	{
		printf("%c\n", becheck[j]);
		switch(becheck[j])
		{
			case '0':
				count[0]++;
			case '1':
				count[1]++;
			case '2':
				count[2]++;
			case '3':
				count[3]++;
			case '4':
				count[4]++;
			case '5':
				count[5]++;
			case '6':
				count[6]++;
			case '7':
				count[7]++;
			case '8':
				count[8]++;
			case '9':
				count[9]++;	
		}
		sprintf(ans, "%d %d %d %d %d %d %d %d %d %d\n", count[0], count[1], count[2], count[3], count[4], count[5], count[6], count[7], count[8], count[9]);
		printf("%s\n", ans);
	}

	sprintf(ans,"%d %d %d %d %d %d %d %d %d %d\n",count[0],count[1],count[2],count[3],count[4],count[5],count[6],count[7],count[8],count[9]);
	printf("%s\n",ans);
}

system("PAUSE");

return 0;
}