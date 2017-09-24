#include <stdio.h>
#include <stdlib.h>
	int Minus(int iNumber1,int iNumber2)
    {
    int iResult;
    iResult=iNumber1-iNumber2;
    return iResult; 
		
    }
int main()
{
	int i;
    i=Minus(9,4);
    printf("%d\n",i);
	system("pause");
	return 0;
}
