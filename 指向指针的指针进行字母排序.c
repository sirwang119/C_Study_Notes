#include <stdio.h>
#include <stdlib.h>
sort(char *strings[],int n)
{
	char *temp;
    int i,j;
    for(i=0;i<n;i++)
    {	
        for(j=i+1;j<n;j++)
      {      
		if(strcmp(strings[i],strings[j])>0)
        {
			temp=strings[i];
            strings[i]=strings[j];
            strings[j]=temp;
        }
      }  
    }
}
int main()
{
	int n=12;
    int i;
    char **p;
    char *month[]=
    {
		"january",
        "february",
        "march",
        "april",
        "may",
        "june",
        "july",
        "august",
        "september",
        "october",
        "november",
        "december",
    };
    p=month;
    sort(p,n);
    printf("排序后的12月份如下：\n");
		for(i=0;i<n;i++)
			printf("%s\n",month[i]);
	system("pause");
	return 0;
}
