#include<stdio.h> 
int main(void)
{
	printf("Hello, world!\n");
	int strs[2];
	strs[0] = 12;
	strs[1] = 23;
	strs[3] = 1;
//	scanf("%s",strs);
	printf("strs:%d\n", sizeof(strs[0]));
	printf("%d\n",strs);
	printf("%d\n",strs[0]);
	printf("%d\n",*strs + 1);
	printf("%d\n",*(strs + 2));
	printf("%d\n",&strs[0]);
	return 0;
}
