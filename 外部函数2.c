#include <stdio.h>
#include <stdlib.h>
void DrinkMilk();
int main()
{	char cPoke[]="";
	printf("Mother wanna give the baby:\n");
    scanf("%s",&cPoke);
    DrinkMilk(cPoke);
	
	system("pause");
	return 0;
}
void DrinkMilk(char*cBottle)
{
printf("The baby drink the%s\n",cBottle);
}
