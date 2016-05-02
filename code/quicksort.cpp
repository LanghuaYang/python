/*
#include <iostream> 
#include <vector>
//#include <hashmap>
using namespace std;

//quick sort
对挖坑填数进行总结
1．i =L; j = R; 将基准数挖出形成第一个坑a[i]。
2．j--由后向前找比它小的数，找到后挖出此数填前一个坑a[i]中。
3．i++由前向后找比它大的数，找到后也挖出此数填到前一个坑a[j]中。
4．再重复执行2，3二步，直到i==j，将基准数填入a[i]中。

int partition(int a[], int low, int high)
{
	int i = low, j = high, x = a[low];//首先将基准树挖出，行成一个坑
	while (i < j)
	{
		while (i < j && a[j] >= x) // 从右向左找第一个小于x的数  
			j--;
		if (i < j)
			a[i] = a[j];//将这个小于x的数填入前一个坑中
		while (i < j && a[i]< x) // 从左向右找第一个大于等于x的数  
			i++;
		if (i < j)
			a[j] = a[i];//将这个大于等于x的数填入前一个坑里
	}
	a[i] = x; //当i==j时，将基准数填入a[i]中
	return i;
}

void quick_sort1(int a[], int low, int high)
{
	if (low < high)
	{
		int k = partition(a, low, high);
		quick_sort1(a, low, k - 1);
		quick_sort1(a, k + 1, high);
	}
}
int main()
{
	int a[] = { 67,23,89,35,28,90,10 };
	vector<int> v;
	//hashmap<int> h;
	v.push_back(1);
	quick_sort1(a, 0, 6);
	for (int i = 0; i < 7; i++)
		cout << a[i] << " " << endl;
	int i;
	cin >> i;
}*/