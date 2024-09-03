#include<iostream>
#include <type_traits>

#include "002.hpp"
#include "003.hpp"
#include "004.hpp"

using namespace std;

void test02(){
	//模板函数

	//整型求和函数
    int  a= 	sum<int>(111, 999);
	cout << a << endl;
	 
	//单精度求和函数
	float  b = sum<float>(1.234f,  2.345f);
	cout << b << endl;

	//双精度求和函数
	double  c= sum<double>(1.234f, 2.345f);
	cout << c << endl;


	//第二种函数模板
	double  d = sum<int ,float,double>(100, 2.345f);
	cout << d << endl;
 
}

void test03()
{
   //模板类， 实例化类模板

	//整型Math类
	Math<int>  math;
	cout<< math.sum(111,999)<<endl;
	cout << math.max(111, 999) << endl;

	//float  Math类
	Math<float>  math2;
	cout << math2.sum(1.234f, 4.567f) << endl;
	cout << math2.max(1.234f, 4.567f) << endl;


	//double  Math类
	Math<double>  math3;
	cout << math3.sum(1.234, 4.567) << endl;
	cout << math3.max(1.234, 4.567) << endl;

}

void test04()
{
	//模板类
	A<B>  a;

	cout <<  typeid(a.iter).name()<< endl;

}
int  main()
{
	std::cout << "**********002!\n";
	test02();

	std::cout << "**********003!\n";
	test03();

	std::cout << "**********004!\n";
	test04();
}