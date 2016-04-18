//#include <iostream>
//using namespace std;
//#define MAX(T) \
//T max_##T (T x, T y) { \
//return x < y?y:x;\
//}
//MAX(int)
//MAX(double)
//MAX(string)
//
////template<class T> //老式写法，但是向上兼容，因此依然可以用 但是容易产生误解
//template<typename T>
//T max(T x, T y)
//{
//	return x < y ? y : x;
//}
//
//template<typename T>
//void foo(T const &x)
//{
//	cout << typeid (x).name() << endl;
//}
//template<typename T>
//void fun(T x)
//{
//	cout << typeid (x).name() << endl;
//}
//template<typename R, typename T>
//R bar(T x, T y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int i;
//	cout << typeid (i).name() << endl;
//	char e[256];
//	foo(e);//T const &x  e代表整体数组
//	fun(e);//T x         e代表数组第一个元素的地址
//	i = bar<int, int>(i, i);
//	i = bar<int>(i, i);//半隐半现
//	cin >> i;
//	return 0;
//}