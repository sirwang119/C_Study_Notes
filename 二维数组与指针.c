#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[3][5],i,j,*k;
    printf("please input:\n");
    for(i=0;i<3;i++)
    {
		for(j=0;j<5;j++)
        scanf("%d",a[i]+j);
    }
    printf("the array is:\n");
    for(i=0;i<3;i++)
    {
		for(j=0;j<5;j++)
        printf("%d\t",*(a[i]+j));
        printf("\n");
    }
    k=&a;
    for(i=0;i<3;i++)
    {
		for(j=0;j<5;j++)
        printf("%d\t",k++);
        printf("\n");
    }
	system("pause");
	return 0;
}
