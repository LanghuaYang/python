#include <iostream>
using namespace std;
class C {
	int a;
public:
	C() { cout << "C  constructor"; }
};
class A {
public:
	class B {
		int a;
	public:
		B() { cout << "B  constructor"; }
	};
	A(C cc): r(cc){ cout << "A  constructor"; }
	C c;
	C &r;
	C *p;
};
int main()
{
	C cc;
	A a(cc);
	a.p = &cc;
	A::B b;
	cout << sizeof(A) << " "<< sizeof(A::B) << endl;//输出结果为1 4
	int i;
	cin >> i;
	return 0;
}