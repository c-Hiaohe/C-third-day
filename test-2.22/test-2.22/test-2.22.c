#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int c = 0;
	int b = 1;
	int i = 0;
	for (i = 1; i <=3; i++)
	{
		b = b * i;
		c = c+ b;
	}
	
	printf("�׳˵���%d",c);
	return 0;
}

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
//	printf("����������:>");
//	scanf("%s",passwrd);
//	printf("��ȷ�����루Y\N��:>");
//	ret = getchar();
//	if (ret == 'Y')
//		printf("ȷ�ϳɹ�");
//	else
//	{
//		printf("����ȷ��");
//	}
	
	//int ch = 0;
	//while (ch = getchar() != EOF)//EOF-�ļ������ı�־��
	//{
	//	putchar(ch);

	//}
//
//	return 0;
//}