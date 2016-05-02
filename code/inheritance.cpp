/*
#include "MyProject.h"
#include <iostream>
#include <string>
using namespace std;

void test(int i, int m, int j);
void test(int i, int m = 5, int j = 17) {}
//inheritance
class A {
	int i;
public:
	A(int m) :i(m) { cout << "base constructor" << endl; }
	void print() { cout << "base print" << endl; }
	void print(int i) { cout << "base print(int i)" << endl; } //overloading
	double print(int i, int m) {}//overloading 只和参数有关
};

class B :public A {
public:
	B(int m) :A(m) { cout << "child constructor" << endl; }
	void print() { cout << "child print" << endl; }//base 的print函数被隐藏了
};
void main()
{
	B b(12);
	b.print();
	//b.print(12);
	test(3);
	int i;
	cin >> i;
}
*/