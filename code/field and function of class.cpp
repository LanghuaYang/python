/*
#include "MyProject.h"
#include <iostream>
using namespace std;



field 指成员变量
1) private访问限制是针对不同的类，对同一类来说，不同的instance之间可以互相访问private的成员变量
2)auto default constructor是编译器给的，default constructor指的是自己写的不带参数的构造函数
3）所有的成员函数都有一个hidden parameter就是this
4）field属于类的instance， 成员函数则属于类本身。



1)new-delete mech table是一个用来管理heap内存分配释放的表，存贮了new出来的内存的首地址和长度
2）当要delete时找不到对应的首地址，就会出错
3）delete类类型的内存时，先调用destructor



1)friend could be a class/struct, a member function or a global function
2) decaleration of a function : void fun(parameter 1, .. , parameter n);
3)friend could access the private field of a class

class B {
public:
	void fun();
};
class A {
	int i;
public:
	int s;
	A() { i = 0; cout << "default constructor" << endl; }//default constructor
	A(int a) :i(a) { cout << "initializer list constructor" << endl; }//constructor
	~A() { cout << "destructor s=" << endl; }//destructor
	void f(A *b);
	friend B;//class as a friend
	friend void B::fun(); //member function as a friend
	friend int testfriendglobal(A *a);//global function as a friend
};


int testfriendglobal(A *a);

int testfriendglobal(A *a)
{
	cout << "test global" << a->i << endl;
	return 0;
}
void B::fun()
{
	A a;
	cout << a.i << endl; //必须声明classB为A的friend，否则不能访问A的private field
}
void A::f(A *b)
{
	i = 10; //i means this->i
	cout << "i = " << i << endl;
	this->i = 20; // all functions of a class has a hidden parameter "this" this means &a, the pointer of the instance
	cout << "i = " << i << endl;
	b->i = 16; //由于b和a都是class A类型的， 所以a可以访问b的private成员变量
	cout << b->i << endl; // 可以通过member function来访问同一类的另一个instance的private field i
}

int main()
{
	A.f();// using f() you should has a instance of class A because the &a is a hidden parameter
	{
		A a(2);
		A b;
		a.i; //can not access i because i is a private field of class A
		a.f(&b);
		testfriendglobal(&a);
	}

	{
	A c;
	c.f(&b);
	}

	 c.f(&a);//error {}is a scope 限制了c的生存周期只在{}内部
	int * arr = new int[10];
	arr++;
	delete[]arr;//no error in compile, but can not find the arr in the new-delete mech table, so will have run-time error

	A * classarr = new A[10];
	for (int i = 0; i < 10; i++)
	{
	classarr[i].s = i;//set s
	}
	delete classarr; //仅调用了classarr[0]的析构函数
	delete[] classarr;
	int hold;
	cin >> hold;
}
*/
