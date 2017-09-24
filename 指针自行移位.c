#include <stdio.h>
#include <stdlib.h>
int main()
{	int *p,*q,a[5],b[5],i;
	p=&a[0];
    q=b;
    printf("please input array a:\n");
    for(i=0;i<5;i++)
		scanf("%d",p++);
	printf("please input array b:\n");
    for(i=0;i<5;i++) 
		scanf("%d",q++);
    printf("array a is:\n");
    p=a;
    q=b;
    for(i=0;i<5;i++)
		printf("%d\t",*p++);
    printf("array b is:\n");
	for(i=0;i<5;i++)
		printf("%d\t",*q++);
		
     
	
	system("pause");
	return 0;
}
