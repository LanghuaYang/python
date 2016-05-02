//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
////以下五种迭代器从上至下存在继承关系，即可以将下面一个当成上面的用
////·        Input iterators 提供对数据的只读访问。只读，支持++、==、！=
////
////·        Output iterators 提供对数据的只写访问 只写，支持++；
////
////·        Forward iterators 提供读写操作，并能向前推进迭代器。 读写，支持++、==、！=；
////
////·        Bidirectional iterators提供读写操作，并能向前和向后操作。读写，支持++、--，；
////
////·        Random access iterators提供读写操作，并能在数据中随机移动。读写，支持++、--、[n]、-n、<、<=、>、>=
//
//#define SIZE 100
//int iarray[SIZE];
//
//
//vector<int> intVector(100);
//
//void main()
//{
//	//指针迭代器
//	iarray[20] = 50;
//	int* ip = find(iarray, iarray + SIZE, 50);
//	if (ip == iarray + SIZE)
//		cout << "50 not found in array" << endl;
//	else
//		cout << *ip << " found in array" << endl;
//
//	//容器自己输出的迭代器
//	intVector[20] = 50;
//	vector<int>::iterator intIter =
//		find(intVector.begin(), intVector.end(), 50);
//	if (intIter != intVector.end())
//		cout << "Vector contains value " << *intIter << endl;
//	else
//		cout << "Vector does not contain 50" << endl;
//
//	//常量迭代器
//	vector<int>::iterator first;
//	first = intVector.begin();
//	*first = 123;
//
//
//	//	输入迭代器是最普通的类型。
//	//	输入迭代器至少能够使用 == 和 != 测试是否相等；使用*来访问数据；使用++操作来递推迭代器到下一个元素或到达past - the - end 值。
//	//	为了理解迭代器和STL函数是如何使用它们的，现在来看一下find()模板函数的定义：
//
//	//	template <class InputIterator, class T>
//	//	InputIterator find(InputIterator first, InputIterator last, const T& value) 
//	//	{
//	//		while (first != last && *first != value) ++first;
//	//		return first;
//	//	}
//	vector<int>::iterator result;
//	int value = 50;
//	result = find(intVector.begin(), intVector.end(), value);
//	cout << typeid (result).name() << endl;
//
//
//	//	输出迭代器
//	//	输出迭代器缺省只写，通常用于将数据从一个位置拷贝到另一个位置。
//	//	由于输出迭代器无法读取对象，因此你不会在任何搜索和其他算法中使用它
//
//	double darray[10] =
//	{ 1.0, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9 };
//	vector<double> vdouble(10);
//
//	vector<double>::iterator outputIterator = vdouble.begin();
//	copy(darray, darray + 10, outputIterator);
//	while (outputIterator != vdouble.end()) {
//		cout << *outputIterator << " ";
//		outputIterator++;
//	}
//	cout << endl;
//
//	//  前推迭代器
//	//	前推迭代器能够读写数据值，并能够向前推进到下一个值。但是没法递减。replace()算法显示了前推迭代器的使用方法。
//
//	//	template <class ForwardIterator, class T>
//	//	void replace(ForwardIterator first,
//	//	ForwardIterator last,
//	//	const T& old_value,
//	//	const T& new_value);
//	replace(vdouble.begin(), vdouble.end(), 1.5, 3.14159);
//	outputIterator = vdouble.begin();
//	while (outputIterator != vdouble.end()) {
//		cout << *outputIterator << " ";
//		outputIterator++;
//	}
//	cout << endl;
//
//	//	双向迭代器
//	//	双向迭代器要求能够增减。如reverse()算法要求两个双向迭代器作为参数:
//
//	//	template <class BidirectionalIterator>
//	//	void reverse(BidirectionalIterator first,
//	//	BidirectionalIterator last);
//	reverse(vdouble.begin(), vdouble.end());
//	outputIterator = vdouble.begin();
//	while (outputIterator != vdouble.end()) {
//		cout << *outputIterator << " ";
//		outputIterator++;
//	}
//	cout << endl;
//
//	//	随机访问迭代器
//	//	随机访问迭代器能够以任意顺序访问数据，并能用于读写数据（不是const的C++指针也是随机访问迭代器）。
//	//	STL的排序和搜索函数使用随机访问迭代器。随机访问迭代器可以使用关系操作符作比较。
//	//	template <class RandomAccessIterator>
//	//	void random_shuffle(RandomAccessIterator first,
//	//	RandomAccessIterator last);
//	random_shuffle(vdouble.begin(), vdouble.end());
//	outputIterator = vdouble.begin();
//	while (outputIterator != vdouble.end()) {
//		cout << *outputIterator << " ";
//		outputIterator++;
//	}
//	cout << endl;
//
//	//	插入迭代器
//	//	插入迭代器用于将值插入到容器中。它们也叫做适配器。
//	//	因为它们将容器适配或转化为一个迭代器，并用于copy()这样的算法中。例如，一个程序定义了一个链表和一个矢量容器:
//
//	int i;
//	cin >> i;
//}