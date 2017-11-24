#include <stdio.h>

int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int calc(int (*p)(int,int),int,int);

int add(int a,int b)
{
	return a+b;
}

int sub(int a,int b)
{
	return a-b;
}

int mul(int a,int b)
{
	return a*b;
}

int div(int a,int b)
{
	if(b == 0)
	{
		printf("除数不能为零！");
		return 1;
	}
	else
		return a/b;
}

int calc(int (*p)(int,int),int a,int b)
{
	return (*p)(a,b);
}
int main()
{
	int x,y;
	int (*p)(int,int);
	char m;
	printf("请输入两个整数：");
	scanf("%d %d",&x,&y);
	getchar();
	printf("请问你是要计算哪种算式：(a)：%d + %d =\n(b):%d - %d =\n(c):%d * %d =\n(d):%d / %d =\n请输入相应字符：",x,y,x,y,x,y,x,y);
	scanf("%c",&m);
	switch(m)
	{
		 case 'a' : return printf("%d + %d = %d\n",x,y,calc(add,x,y));
		 case 'b' : return printf("%d + %d = %d\n",x,y,calc(sub,x,y));
		 case 'c' : return printf("%d + %d = %d\n",x,y,calc(mul,x,y));
		 case 'd' : return printf("%d + %d = %d\n",x,y,calc(div,x,y));
defalut:return 0;
	}
}
