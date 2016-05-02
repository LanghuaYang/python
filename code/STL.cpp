//#include <iostream>
//#include <string>
////顺序容器
//#include <vector>
//#include <list>
//#include <deque>
//#include <stack>
//#include <queue> //priority_queue
////关联容器
//#include <set>//multiset
//#include <map>//mulmap
//using namespace std;
//
////1,vector实质是动态数组，允许随机访问(下标访问).只能从尾部push/pop元素
////2.list实质是双向链表，不允许随机访问，插入删除效率高. 可以从头尾两端push/pop元素
////3,deque是vector与list的结合，支持随机访问和快速插入删除。可以从头尾两端push/pop元素
////4,map是key/value成对的，根据key升序排列。迭代器的first是key，second是value。
//void main()
//{
//	/*************************************Vector***************************************/
//	//1.定义和初始化
//	vector<int> vec1;    //默认初始化，vec1为空
//	vector<int> vec2(vec1);  //使用vec1初始化vec2
//	vector<int> vec3(vec1.begin(), vec1.end());//使用vec1初始化vec2
//	vector<int> vec4(10);    //10个值为的元素
//	vector<int> vec5(10, 4);  //10个值为的元素
//
//							  //2.常用操作方法
//	vec1.push_back(100);            //添加元素
//	int size = vec1.size();         //元素个数
//	bool isEmpty = vec1.empty();    //判断是否为空
//	cout << vec1[0] << endl;        //取得第一个元素
//	vec1.insert(vec1.end(), 5, 3);    //从vec1.back位置插入个值为的元素
//	vec1.pop_back();              //删除末尾元素
//	vec1.erase(vec1.begin(), vec1.end());//删除之间的元素，其他元素前移
//	cout << (vec1 == vec2) ? true : false;  //判断是否相等==、！=、>=、<=...
//	vector<int>::iterator iter = vec1.begin();    //获取迭代器首地址
//												  //vec1.clear();                 //清空元素
//												  //vec1.reserve(vec1.size());    //反转
//
//												  //3.遍历
//												  //下标法
//	int length = vec1.size();
//	for (int i = 0; i<length; i++)
//	{
//		cout << vec1[i];
//	}
//	cout << endl << endl;
//
//	//迭代器法
//	vector<int>::iterator iterator;
//	for (iterator = vec1.begin(); iterator != vec1.end(); iterator++)
//	{
//		cout << *iterator;
//	}
//
//	/*************************************List***************************************/
//	//1.定义和初始化
//	list<int> lst1;          //创建空list
//	list<int> lst2(3);       //创建含有三个元素的list
//	list<int> lst3(3, 2); //创建含有三个元素的list
//	list<int> lst4(lst2);    //使用lst2初始化lst4
//	list<int> lst5(lst2.begin(), lst2.end());  //同lst4
//
//											   //2.常用操作方法
//	lst1.assign(lst2.begin(), lst2.end());  //分配值
//	lst1.push_back(10);                    //添加值
//	lst1.push_front(11);
//	lst1.pop_back();                   //删除末尾值
//	lst1.pop_front();
//	lst1.begin();                      //返回首值的迭代器
//	lst1.end();                            //返回尾值的迭代器
//	lst1.clear();                      //清空值
//	bool isEmpty1 = lst1.empty();          //判断为空
//	lst1.erase(lst1.begin(), lst1.end());                        //删除元素
//	lst1.front();                      //返回第一个元素的引用
//	lst1.back();                       //返回最后一个元素的引用
//	lst1.insert(lst1.begin(), 3, 2);         //从指定位置插入个
//	lst1.rbegin();                         //返回第一个元素的前向指针
//	lst1.remove(2);                        //相同的元素全部删除
//	lst1.reverse();                        //反转
//	lst1.size();                       //含有元素个数
//	lst1.sort();                       //排序
//	lst1.unique();                         //删除相邻重复元素
//
//										   //3.遍历
//										   //迭代器法
//	for (list<int>::const_iterator iter = lst1.begin(); iter != lst1.end(); iter++)
//	{
//		cout << *iter;
//	}
//
//	/*************************************deque***************************************/
//	//1.定义和初始化
//	deque<int> deq1;
//	deque<int> deq2(10);
//	deque<int> deq3(10, 4);
//	deque<int> deq4(deq2);    //使用deq2初始化deq4
//	deque<int> deq5(deq2.begin(), deq2.end());  //同deq4
//
//												//2.常用操作方法
//	deq1.push_back(10);
//	deq1.push_front(10);
//	deq1.insert(deq1.begin(), 10, 2);
//	deq1.pop_back();
//	deq1.pop_front();
//
//	//3，遍历
//	//下标法
//	for (int i = 0; i < deq1.size(); i++)
//	{
//		cout << deq1[i];
//	}
//	cout << endl << endl;
//
//	//迭代器法
//	deque<int>::iterator listiter = deq1.begin();
//	for (; listiter != deq1.end(); listiter++)
//	{
//		cout << *listiter;
//	}
//
//	/************************************* Map ***************************************/
//	//1.定义和初始化
//	map<int, string> map1;                  //空map
//
//											//2.常用操作方法
//	map1[3] = "Saniya";                    //添加元素
//	map1.insert(map<int, string>::value_type(2, "Diyabi"));//插入元素
//	map1.insert(pair<int, string>(1, "Siqinsini"));
//	map1.insert(make_pair<int, string>(4, "V5"));
//	string str = map1[3];                  //根据key取得value，key不能修改
//	map<int, string>::iterator iter_map = map1.begin();//取得迭代器首地址
//	int key = iter_map->first;             //取得eky
//	string value = iter_map->second;       //取得value
//	map1.erase(iter_map);                  //删除迭代器数据
//	map1.erase(3);                         //根据key删除value
//	map1.size();                       //元素个数
//	map1.empty();                       //判断空
//	map1.clear();                      //清空所有元素
//
//									   //3.遍历
//	for (map<int, string>::iterator mapiter = map1.begin(); mapiter != map1.end(); mapiter++)
//	{
//		cout << mapiter->first << " " << mapiter->second;
//	}
//	cout << endl;
//	int i;
//	cin >> i;
//}
