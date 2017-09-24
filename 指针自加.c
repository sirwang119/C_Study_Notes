#include <stdio.h>
#include <stdlib.h>
int main()
{
	short i=10;
    short *p=&i;
    printf("%d\n",*p);
    printf("%d\n",p);
    p++;
    printf("%d\n",p);
	system("pause");
	return 0;
}
