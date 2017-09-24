#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,*p,*q,a[5],b[5];
    p=&a[0];
    q=b;
    printf("please input array a:\n");
    for(i=0;i<5;i++)
		scanf("%d",&a[i]);
    printf("plese input array b:\n");
    for(i=0;i<5;i++)
		scanf("%d",&b[i]);
    printf("array a is:\n");
	for(i=0;i<5;i++)
		printf("%5d\n",*(p+i));
    printf("array b is:\n");
    for(i=0;i<5;i++)
			printf("%5d\n",*(q+i));
	system("pause");
	return 0;
}
