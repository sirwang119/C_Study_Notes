struct Student
{
	char cName[20];
    char cSex;
    int iGrade;
    
    
}stude={"hanxue",'w',3};

int main()
{
	struct Student stude1={"wang jia sheng",'m',3};
	printf("the stude's infomation:\n");
    printf("Name:%s\n",stude.cName);
    printf("Sex:%c\n",stude.cSex);
    printf("Grade:%d\n",stude.iGrade);
    
    printf("the second student's infomation:\n");
    printf("Name:\n",stude1.cName);
    printf("Sex:%c\n",stude1.cSex);
    printf("Grade:%d\n",stude1.iGrade);
    system("pause");
	return 0;
}
