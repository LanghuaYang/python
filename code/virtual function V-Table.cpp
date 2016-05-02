//#include <iostream>
//using namespace std;
//
//class base1
//{
//public:
//	virtual void f()
//	{
//		cout << "This is base1's f()" << endl;
//	}
//	virtual void g()
//	{
//		cout << "This is base1's g()" << endl;
//	}
//};
//
//class base2
//{
//public:
//	virtual void j()
//	{
//		cout << "This is base2's j()" << endl;
//	}
//	virtual void k()
//	{
//		cout << "This is base2's k()" << endl;
//	}
//};
//
//class dev_class : public base1, public base2
//{
//public:
//	virtual void f()
//	{
//		cout << "This is derive's f()" << endl;
//	}
//	virtual void j()
//	{
//		cout << "This is derive's j()" << endl;
//	}
//	virtual void q()
//	{
//		cout << "This is derive's q()" << endl;
//	}
//};
//
//int main()
//{
//	dev_class d;
//	typedef void(*Fun_Ptr)(); //定义Fun_Ptr类型
//
//
//							  //V-Table 1
//	Fun_Ptr *fp = NULL; //Fun_Ptr类型的指针，指向函数
//	fp = &d.f; //函数指针的赋值
//	cout << &d << endl;//取d的地址
//	cout << (int *)&d << endl;//将地址强制转换为int *类型
//	cout << *(int *)&d << endl;//取地址中的内容，即V-Table
//	cout << (int*)*(int*)&d + 0 << endl;//将V-Table中的第一个函数指针，强制转换为int *类型
//	fp = (Fun_Ptr *)(int*)*(int*)&d + 0;//将这个函数地址强制类型转换后，赋值给fp
//	(*fp)();
//
//	//V-Table 2
//	Fun_Ptr *fp2 = NULL;
//	cout << &d << endl;//取d的地址
//	cout << ((int *)&d) + 1 << endl;//将地址强制转换为int *类型,再加1，即指向vtable2的指针
//	cout << *(((int *)&d) + 1) << endl;//取地址中的内容，即V-Table2
//	cout << (int*)*(((int *)&d) + 1) + 0 << endl;//将V-Table2中的第一个函数指针，强制转换为int *类型
//	fp2 = (Fun_Ptr *)(int*)*(((int *)&d) + 1) + 0;//将这个函数地址强制类型转换后，赋值给fp
//	(*fp2)();
//	fp2 = (Fun_Ptr *)(int*)*(((int *)&d) + 1) + 1;//将这个函数地址强制类型转换后，赋值给fp
//	(*fp2)();
//	cout << *((int*)*(((int *)&d) + 1) + 2) << endl;//打印结束标志“0”
//
//	int i;
//	cin >> i;
//	return 0;
//}