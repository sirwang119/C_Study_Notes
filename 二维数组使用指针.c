#include <stdio.h>
#include <stdlib.h>
#define N 4
void max(int (*a)[N],int m)
{
	int value,i,j,sum=0;
    for(i=0;i<m;i++)
    {
		value=*(*(a+i));
        for(j=0;j<N;j++)
			if(*(*(a+i)+j)>value)
				value=*(*(a+i)+j);
            printf("��%d�е��������ǣ� %d\n",i+1,value);
            sum=sum+value;
    }
    printf("\n");
    printf("ÿ���е���������֮���ǣ�%d\n",sum);
    
}
int main()
{
	int a[3][N],i,j;
    int (*p)[N];
    p=&a[0];
    printf("please input :\n");
    for(i=0;i<3;i++)
		for(j=0;j<N;j++)
			scanf("%d",&a[i][j]);
	max(p,3);
	system("pause");
	return 0;
}
