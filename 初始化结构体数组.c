#include <stdio.h>
#include <stdlib.h>
struct Student
{
	char cName[20];
    int iNumber;
    char cSex;
    int iGrade;
}student[5]={{"wangjiasheng",12062212,'m',3},
			{"yulongjiao",12062213,'w',3},
            {"jiangxuehuan",12062214,'w',3},
            {"zhangmeng",12062215,'w',3},
            {"hanliang",12062216,'w',3},	
    
    
    
    };
int main()
{
	int i;
    for(i=0;i<5;i++)
    {
		printf("NO.%d student:\n",i+1);
        printf("Name:%s\nNumber:%d\nSex:%c\nGrade:%d\n",student[i].cName,student[i].iNumber,student[i].cSex,student[i].iGrade);
        printf("\n\n\n");
    }
	system("pause");
	return 0;
}
