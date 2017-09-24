#include <stdio.h>
#include <stdlib.h>
struct Student
{
	char cName[20];
    int iNumber;
    struct Student* pNext;
    
};

int iCount;

struct Student* Creat()
    {
		struct Student* pHead=NULL;
        struct Student* pEnd,*pNew;
        iCount=0;
        pEnd=pNew=(struct Student*)malloc(sizeof(struct Student));
        printf("plese enter first name,then number;\n");
        scanf("%s",&pNew->cName);
        scanf("%d",&pNew->iNumber);
        while(pNew->iNumber!=0)
			{
				iCount++;
                if(iCount==1)
					{
						pNew->pNext=pHead;
                        pEnd=pNew;
                        pHead=pNew;
                    }
                else
					{
						pNew->pNext=NULL;
                        pEnd->pNext=pNew;
                        pEnd=pNew;
                    }
                pNew=(struct Student*)malloc(sizeof(struct Student));
                scanf("%s",&pNew->cName);
                scanf("%d",&pNew->iNumber);
            }
            free(pNew);
            return pHead;
    }
void Print(struct Student* pHead)
	{
		struct Student *pTemp;
        int ilndex=1;
        printf("----------------------the List has %d members-----------------------\n",iCount);
        pTemp=pHead;
        
        while(pTemp!=NULL)
			{
				printf("the No.%d member is;\n",ilndex);
                printf("the name is:%s\n",pTemp->cName);
                printf("the number is:%d\n",pTemp->iNumber);
                pTemp=pTemp->pNext;
                ilndex++;
            }
    }
int main()
{
	struct Student* pHead;
    pHead=Creat();
    Print(pHead);
	system("pause");
	return 0;
}
