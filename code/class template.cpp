//#include <iostream>
//using namespace std;
//
////类模板名加上<typename> 才形成了类名
////类模板不是类
////通用的类模板
//template<typename T>
//class Test {
//public:
//	T m_x;
//	T m_y;
//	Test(T x, T y) :m_x(x), m_y(y) {}
//	Test(Test<T> const & that) :m_x(that.m_x), m_y(that.m_y) {}
//	Test<T>& operator =(Test<T> *that)
//	{
//		if (this != that)
//		{
//			this->m_x = that->m_x;
//			this->m_y = that->m_y;
//		}
//		return *this;
//	}
//	T max(void)
//	{
//		return m_x > m_y ? m_y : m_x;
//	}
//};
////仅特化成员函数
//template<>
//char const * Test<char const *>::max(void) {
//	return strcmp(m_x, m_y) < 0 ? m_y : m_x;
//}
////类模板的特化 全类特化
////template<>
////class Test<char const*> {
////public:
////	char const* m_x;
////	char const* m_y;
////	Test(char const*x, char const *y) :m_x(x), m_y(y) {}
////	char const* max(void) const {
////		return strcmp(m_x, m_y) < 0 ? m_y : m_x;
////	}
////};
//
//void main()
//{
//	Test<int> c1(123, 456);
//	Test<int> c2(c1);
//	cout << c2.m_x << c2.m_y << endl;
//	Test<int> c3(789, 12);
//	c2 = c3;
//	cout << c2.m_x << c2.m_y << endl;
//	int i;
//	cin >> i;
//}