#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void SwitchShow(char c);
int main()
{
	char cCharPut;
    char cCharTemp;
    char *k[3]={"First","Second","Third"};
    int i;
	
    for(i=0;i<3;i++)
    {
    printf("%s enter.\n",k[i]);
    scanf("%c",&cCharPut);
    SwitchShow(cCharPut);
    cCharTemp=getchar();
    }
    
    
    
	system("pause");
	return 0;
}
void SwitchShow(char cChar)
{
	if(isalpha(cChar))
    {
		printf("You entered a letter of the alphabet %c\n",cChar);
    }
    if(isdigit(cChar))
    {
		printf("You entered the digit %c\n",cChar);
    }
    
    if(isalnum(cChar))
    {
		printf("You entered the alphanumeric charater %c\n",cChar);
    }
    else
    {
		printf("You entered the charater is not alphabet or digit\n");
    }
}
