#include<iostream>
#include <type_traits>

#include "002.hpp"
#include "003.hpp"
#include "004.hpp"
#include "005.hpp"
#include "006.hpp"
#include "007.hpp"

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
	AA<BB>  a;

	cout <<  typeid(a.iter).name()<< endl;

}

void test05()
{
	//普通的
	A<int, int> a;
	a.print();
	//a.show();//没有这个成员函数，这就是与特化的区别

	//被全特化的
	A<int, float> a2;
	a2.print();
	a2.show();

	A<float, float> a3;
	//a3.print();//没有这个成员函数，这就是与特化的区别
	a3.show();


	//偏特化
	A< char, float> a4;
	a4.show();


	//普通的函数模板
	test<int, float>(1,2.0f);

	//全特化的模板
	test<int, int>(1, 2);

	//函数偏特化
	test<int, double>(1,1.234);
}

void test06()
{
	//对任意类型T的s都有一份通用的值111
	cout << AAA<float>::s << endl;
	cout << AAA<int>::s << endl;
	cout << AAA<char>::s << endl;
	cout << AAA<double>::s << endl;


	//特定类型，s2特定值
	cout << AAA<float>::s2 << endl;
    cout << AAA<int>::s2 << endl;
    cout << AAA<char>::s2 << endl;
	//cout << A<double>::s2 << endl;//必须特化，不然找不到s2
}

void test07()
{
	//外部类
	Outer<int>  o;
	o.print();

	//内部类 
	Outer<int>::Inner<float> i;//同样加上::作用域限定符
	i.print();

}
int  main()
{
	std::cout << "**********002!\n";
	test02();

	std::cout << "**********003!\n";
	test03();

	std::cout << "**********004!\n";
	test04();

	std::cout << "**********005!\n";
	test05();

	std::cout << "**********006!\n";
	test06();

	std::cout << "**********007!\n";
	test07();
}