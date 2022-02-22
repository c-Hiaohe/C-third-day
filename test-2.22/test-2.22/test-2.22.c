#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] =  "wellcomg to CHINA!!!" ;
	char arr2[] =  "###################";
	int left = 0;
	int right = strlen(arr1) - 2;///sizeof(arr1) / sizeof(arr1[0])-2;
	while (left<=right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		left++;
		right--;
		Sleep(1000);

	}
	return 0;
}



//int main()
//{
//	int c = 0;
//	int b = 1;
//	int i = 0;
//	for (i = 1; i <=3; i++)
//	{
//		b = b * i;
//		c = c+ b;
//	}
//	
//	printf("阶乘等于%d",c);
//	return 0;
//}

//int main() 
//{
//	int i = 0;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//		i++;
//	} 
//	while (i < 10);
//	
//	return 0;
//}

//int main()
//{
//	int i ;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//		
//			continue;
//			printf("%d", i);
//		
//	}
//	
//	return 0;
//}

/*int main()
{
	int ch = 0;
	while ((ch =getchar()) !=EOF)
	{
		if (ch < '0' || ch> '9')
			continue;
		putchar(ch);
	}
	return 0;
}*/



//int main()
//{
//	int ret = 0;
//	char passwrd[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s",passwrd);
//	printf("请确认密码（Y\N）:>");
//	ret = getchar();
//	if (ret == 'Y')
//		printf("确认成功");
//	else
//	{
//		printf("放弃确认");
//	}
	
	//int ch = 0;
	//while (ch = getchar() != EOF)//EOF-文件结束的标志，
	//{
	//	putchar(ch);

	//}
//
//	return 0;
//}