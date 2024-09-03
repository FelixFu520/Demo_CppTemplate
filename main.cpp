#include<iostream>

#include "002.hpp"

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

int  main()
{
	test02();

}