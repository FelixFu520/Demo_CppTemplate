#include<iostream>
using namespace std;

template<typename  T>
class AAA
{
public:
	static  int   s;//不依赖模版类型T的静态成员
	static   T    s2; //依赖模版类型T的静态成员  

};
 
//1.模板类的静态成员变量初始化,  对任意类型T的都有一份通用的值
template<typename T>
int  AAA<T>::s = 111;  

//2.特化的方式，只有该类型可以获取此值
template <>
int  AAA<int>::s = 222;//也可以特化，给出T类型, 只对T是int生效

//s2只能特化
template <>
float  AAA<float>::s2 = 333.33f;

template <>
char  AAA<char>::s2 = 'A';

template <>
int  AAA<int>::s2 = 666;