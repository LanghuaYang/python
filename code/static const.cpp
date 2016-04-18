

/*
#include "MyProject.h"
#include <iostream>
#include <string>
using namespace std;


//inheritance
class A {

public:
	static int s;
	int x;
	int i;
	int j = 12;
	A(int m) :i(m) { cout << "A base constructor" << endl; }
	void f()const { } //means this is a const
};
class B {

public:
	//static int s;
	int x;
	int i;
	int j = 12;
	B(int m) :i(m) { cout << "B base constructor" << endl; }

};

void test(int k, int j) {}

void main()
{
	A a = 12; //
	const A a = 12;
	A *r = &a;
	A & b = *r; //OK  b means *(q) 
	r++;
	cout << sizeof(b) << endl;
	A const *pc = &a; //*p = b error p++ OK 	A & b = *p; //error
	A * const qc = &a; //q++ error *q = b OK 
	A & b = *qc; //OK  b means *(q) 
	cout << sizeof(A) << " " << sizeof(B) << endl;
	int x = 12;
	int *p = &x; //指针类型要用指针来初始化
				 //int *q = & p; //为了防止指针无限递归， 不能用指针的指针来初始化指针了
				 //p 的类型为int *， 则&p的类型为int**， 不能用int**类型来初始化int*类型 也就是说最多可以访问到int**了
	const int i = 10;
	cout << &p << p << *p << &x << x << endl;
	cout << &(A::f) << endl;//输出为1 
	cout << &test << endl;
	int j;
	cin >> j;
}
*/