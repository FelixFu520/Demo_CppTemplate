#include<iostream>
#include <type_traits>

#include "002.hpp"
#include "003.hpp"
#include "004.hpp"
#include "005.hpp"
#include "006.hpp"
#include "007.hpp"
#include "008.hpp"
#include "009.hpp"
#include "010.hpp"
#include "011.hpp"
#include "012.hpp"
#include "013.hpp"
#include "015.hpp"

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

void  test08()
{

	//1.普通类继承模板类
	B0  b(111, 1.234);
	b.printA();
	b.printB();

	//2.类模板继承普通类
	B2<float>  b2(111, 1.234);
	b2.printA();
	b2.printB();


	//3.类模板继承类模板
	B3<int , float>  b3( 123 ,1.234f);
	b3.printA();
	b3.printB();

	//4.类模板继承模板类
	B4<float>  b4(123, 1.234f);
	b4.printA();
	b4.printB();


	//5.类模板继承类型参数
	B5<float , A5<int> >  b5(123, 1.234f);
	b5.printA();
	b5.printB();

}

void  test09()
{
	//  类型参数 传入的都是类型，比如int, float ,double
	auto r = sum9<int, float, double>(111,1.234f);
	cout << r << endl;

}

void  test10()
{
	//实现了动态数组，由用户指定长度
	test<10>();
	test<20>();


	//不能引用非外部实体
	//test2<"hello world!">();

	//char  str[] = "hello world!";
	//test2< str>();//非静态存储的变量

	test2<str2>();
 
	test3<i3>();

	test4<&i3>(); 

	test5<fun5>();
}

void  test11()
{
	B11 b;
	b.print();

	//需要T是一个模板，用模板实例化
	B111<A111>  b1;
	b1.print();

}

void  test12()
{
	int ****p = 0;
	f1(p); //被推导为 int***
	//f1<int ***>(p); 由于自动推导， <int ***>可以被省略

	int  b[42] = { 1,2,3,4,5 };
	char c[10] = "hello!";
	f2(b); // E被推导为  int， N被推导为 42
	f2(c); // E被推导为  char， N被推导为 10



	f3( &S::f);//通过传入的参数，自动推导出来，很智能


     // f4的参数是个X<N> 的成员函数、该函数的回返类型为 void，接受一个 X<N>::I参数
	f4( &X<10>::f);


	//函数指针f6
	void(*f6)(char) = f5;//推导成功，并将 T替换为 char,以保持赋值的合法性
	f6('A');

	N<long> n1;
	M<float> m1;
	f7(n1);// 推导成功： T被替换为 long
	f7(m1);// 推导成功： T被替换为 long


	char *p8 = "abc";
	f8(p8);// 推导成功： T被替换为 char* 
	f9(p8);// 推导成功： T被替换为 char* 
	double  pp[20];
	f8(pp);// 推导成功： T被替换为 double* 
	f9(pp);// 推导成功： T被替换为 double [20]


	int   aa = 99;//即是左值，也是右值
	f10(aa); //正确
	f10(100); //正确，可以传入右值
	f10(0.003); //正确，可以传入右值
	f10("sdfsf"); //正确，可以传入右值

	f11<Y>();
}

void  test13()
{
	// A13<int>  a;//模板类


	//利用编译期递归实现求和函数
   cout<<	Sum<100>::value<<endl;


   //利用编译期递归实现二进制转十进制
   cout << BinToDec<10000>::val << endl;
   cout << BinToDec<10001>::val << endl;
}

void  test15()
{
	//编译期的if结构
	If<true>::fun();
	If<false>::fun();


	//编译期的swicth结构
	Switch<1>::f();
	Switch<2>::f();
	Switch<666>::f();


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

	std::cout << "**********008!\n";
	test08();

	std::cout << "**********009!\n";
	test09();

	std::cout << "**********010!\n";
	test10();

	std::cout << "**********011!\n";
	test11();

	std::cout << "**********012!\n";
	test12();

	std::cout << "**********013!\n";
	test13();

	std::cout << "**********015!\n";
	test15();
}