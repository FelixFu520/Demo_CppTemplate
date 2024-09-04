#include<iostream>
using namespace  std;

 //T1,T2,T3都是类型参数,大多数情况都是传的类型参数
template <typename T1, typename T2, typename T3>
T3   sum9(T1  a, T2  b)
{
	T3 tmp = a + b;
	return tmp;
}
