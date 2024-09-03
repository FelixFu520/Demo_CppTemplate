#include<iostream>
using namespace std;


//类模板
template <typename T1, typename  T2>
class A
{
private:
	T1  a1;
	T2   a2;
public:
	void print()
	{
		cout << "A <T1,T2>: print!" << endl;
	}
};

//类的全特化,结构与主模板无需一致， 这就叫私人定制
template <>
class A<int ,float>
{

public:
	void print()
	{
		cout << "A <int,float>: print!" << endl;
	}

	void show()
	{
		cout << "A <int,float>: show!" << endl;
	}
};


//类的全特化,结构与主模板无需一致， 这就叫私人定制
template <>
class A<float, float>
{

public:  
	void show()
	{
		cout << "A <int,float>: show!" << endl;
	}
};


//类的偏特化
template <typename  T1>
class A<T1, float>
{
public:
	void show()
	{
		cout << "A <T1,float>: show!" << endl;
	}
};


//函数主模板
template <typename T1, typename T2>
void  test(T1  a, T2  b)
{
	cout << "test<T1,T2>！" << endl;
}

//函数的全特化
template <>
void  test(int  a,  int  b)
{
	cout << "test<int,int>！" << endl;
}


//函数没有偏特化，因为有了函数重载
template <typename T1>
void  test(T1  a, double  b)
{
	cout << "test<T1,char>！" << endl;
}