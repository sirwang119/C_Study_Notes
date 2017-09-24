#include <stdio.h>
#include <stdlib.h>
main(int argc,char*argv[])
{
	printf("the list of parameter:\n");
    printf("命令名\n");
		printf("%s\n",*argv);
    printf("参数个数：\n");
    printf("%d\n",argc);
	system("pause");
	return 0;
}
