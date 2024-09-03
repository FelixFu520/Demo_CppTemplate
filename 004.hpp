#include<iostream>
using namespace std;

//1.定义模板类型参数T，也可以用class T定义
template<typename T>
class AA
{
public:
	//2.指定iterator是一种类型
	typename  T::iterator *  iter;  //必须有typename ，不然歧义 

};

class BB
{
public:
	typedef   int     iterator;//内嵌类型
};
