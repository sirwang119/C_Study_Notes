#include <stdio.h>
#include <stdlib.h>
void order(int*p,int n)
{
	int i,t,j;
    for(i=0;i<n-1;i++)
		for(j=0;j<n-1;j++)
			if(*(p+j)>*(p+j+1))
            {
				t=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=t;
            }
            printf("���������飺\n");
            for(i=0;i<n;i++)
            {
				if(i%5==0)
                printf("\n");
                printf("%5d\t",*(p+i));
            }
            printf("\n");
}
int main()
{
	int a[20],i,n;
    printf("������Ԫ���������\n");
    scanf("%d",&n);
    printf("���������Ԫ�أ�\n");
    for(i=0;i<n;i++)
		scanf("%d",a+i);
    order(a,n);
	system("pause");
	return 0;
}
