//关系操作符
//>
//>=
//<
//<=
//!= - 用于测试“不相等”
//== - 用于测试“相等”

//逻辑操作符
//&& - 逻辑与
//|| - 逻辑或

#include <stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//int c = a && b;
//	int c = a || b;
//
//	printf("%d\n", c);//1
//
//	/*if (a && b)
//	{
//
//	}*/
//
//	return 0;
//}

//条件操作符（三目操作符）
//exp1 ? exp2 : exp3
//exp1如果成立，exp2计算，整个表达式的结构是：exp2的结果
//exp1如果不成立，exp3计算，整个表达式的结构是：exp3的结果

//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;
//
//	/*if (a > b)
//		max = a;
//	else
//		max = b;*/
//	max = a > b ? a : b;
//	printf("%d\n", max);
//	return 0;
//}

//逗号表达式:逗号隔开的一串表达式
//exp1, exp2, exp3
//int main()
//{
//	(2, 4 + 5, 6);
//	int a = 0;
//	int b = 3;
//	int c = 5;
//	int d = (a = b + 2, c = a - 4, b = c + 2);
//	//逗号表达式，是从左向右依次计算的
//	//整个表达式的结果是最后一个表达式的结果
//	printf("%d\n", d); // 3
//	return 0;
//}

//下标引用、函数调用和结构成员
//[] () . ->
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n", arr[5]);//[] - 此处即下标引用操作符
//
//	return 0;
//}

//函数调用操作符
int main()
{
	//调用函数的时候，函数名后面的（）就是函数调用操作符
	printf("ABCD\n");
	printf("%d", 100);//可以传多个函数

	return 0;
}
