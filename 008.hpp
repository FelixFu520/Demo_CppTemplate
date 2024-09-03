#include<iostream>
using namespace  std;


////////////////1.普通类继承模板类///////////////////////

//类模板
template <typename T>
class A0
{
private:
	T  a;
public:
	A0(T  _a) :a(_a) {}
	void  printA() 
	{
		cout <<"A0 "<< a << endl;
	} 
};

//普通类继承模板类A<int>
class B0 : public   A0<int>
{
private:
	float   b;
public:
	B0(  int _a,  float _b) :A0<int>(_a), b(_b) {}//构造初始化列表
	void  printB()
	{
		cout << "B0 " << b << endl;
	}

};




////////////////2.类模板继承普通类///////////////////////

class A2
{
private:
	int  a;
public:
	A2(int _a) :a(_a) {}
	void  printA()
	{
		cout << "A2 " << a << endl;
	}
};


//2.类模板继承普通类
template <typename T>
class B2: public A2
{
private:
	T  b;
public:
	B2(int _a ,T _b) :A2(_a), b(_b) {}
	void  printB()
	{
		cout << "B2 " << b << endl;
	}
};

////////////////3.类模板继承类模板///////////////////////
template <typename T>
class A3
{
private:
	T  a;
public:
	A3(T  _a) :a(_a) {}
	void  printA()
	{
		cout << "A3 " << a << endl;
	}
};


template <typename T1, typename T2 >
class B3 : public  A3<T1>
{
private:
	T2  b;
public:
	B3(T1  _a, T2  _b) : A3<T1>(_a),  b(_b) {}
	void  printB()
	{
		cout << "B3 " << b << endl;
	}
};


////////////////4.类模板继承模板类///////////////////////
template <typename T>
class A4
{
private:
	T  a;
public:
	A4(T  _a) :a(_a) {}
	void  printA()
	{
		cout << "A4 " << a << endl;
	}
};

template <typename T>
class B4 : public A4<int>
{
private:
	T  b;
public:
	B4(int _a, T _b) :A4<int>(_a), b(_b) {}
	void  printB()
	{
		cout << "B4 " << b << endl;
	}
};



////////////////5.类模板继承类型参数////////////////
template <typename T>
class A5
{
private:
	T  a;
public:
	A5(T  _a) :a(_a) {}
	void  printA()
	{
		cout << "A5 " << a << endl;
	}
};

template <typename T1 , typename T2>
class B5 : public   T2
{
private:
	T1  b;
public:
	B5(int _a, T1 _b) :T2(_a), b(_b) {}
	void  printB()
	{
		cout << "B5 " << b << endl;
	}
};
  

