//
//#include <iostream>
//#include <vector>
//using namespace std;
////bubble sort 算法复杂度为O(n^2)
////将最小的数放在a[0]位置，再将剩余最小的放在a[1]位置 相邻位置交换
//void bubblesort(int a[], int N)
//{
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = N - 1; j > i; j--)
//		{
//			if (a[j] < a[j - 1])
//			{
//				swap(a[j], a[j - 1]);
//			}
//		}
//	}
//}
////select sort 算法复杂度为O(n^2)
////将最小的数放在a[0]位置，再将剩余最小的放在a[1]位置 
////每轮都将a[i]预设为最小的，再在数组中将其他项与a[i]进行对比，交换
//void selectsort(int a[], int N)
//{
//	for (int i = 0; i < N; i++)
//	{
//		int & min = a[i];
//		for (int j = N - 1; j > i; j--)
//		{
//			if (a[j] < min)
//			{
//				swap(a[j], min);
//			}
//		}
//	}
//}
////insert sort 算法复杂度O(n^2)
////从a[1]开始，将它与之前的a[0]比较并插入到合适的位置
////之后的a[2]在0-1数组中寻找合适的位置插入
////保证a[n]之前的a[0]-a[n-1]是有序的，这样只需要将a[n]插入到下表最小的一个比它大的项前面。
//void insertsort(int a[], int N)
//{
//	int j = 0;
//	for (int i = 1; i < N; i++)
//	{
//		int  current = a[i];
//		j = i;
//		while (j > 0 && a[j - 1] > current)//只有条件满足才会进loop，否则由于a[0]-a[j-1]是有序的，那证明current的位置正确
//		{
//			a[j] = a[j - 1];//每次交换current(current就是此时的a[j])与循环的a[j-1]的位置
//			a[j - 1] = current;
//			j--;
//		}
//	}
//}
////mergesort 归并排序 算法复杂度O(nlogn)
////将数组递归的折半分组 最终分为最小的组
////最小的组中以中心mid为界，左右两边的数是有序的
////将这两个有序的数组merge到temp数组中，再输出回原数组a中
//void mergearray(int a[], int low, int mid, int high, int temp[])
//{
//	int i = low, j = mid + 1;
//	int m = mid, n = high;
//	int k = 0;
//
//	while (i <= m && j <= n)
//	{
//		if (a[i] <= a[j])
//			temp[k++] = a[i++];
//		else
//			temp[k++] = a[j++];
//	}
//
//	while (i <= m)
//		temp[k++] = a[i++];
//
//	while (j <= n)
//		temp[k++] = a[j++];
//
//	for (i = 0; i < k; i++)
//		a[low + i] = temp[i];
//}
//void Partition(int a[], int low, int high, int temp[])
//{
//	if (low < high)
//	{
//		int mid = (low + high) / 2;
//		Partition(a, low, mid, temp);
//		Partition(a, mid + 1, high, temp);
//		mergearray(a, low, mid, high, temp);
//	}
//}
//void mergesort(int a[], int N)
//{
//	int *temp = new int[N];
//	int low = 0, high = N - 1;
//	Partition(a, low, high, temp);
//	delete[]temp;
//}
////quick sort 算法复杂度为O(nlogn)
////对挖坑填数进行总结
////1．i =L; j = R; 将基准数挖出形成第一个坑a[i]。
////2．j--由后向前找比它小的数，找到后挖出此数填前一个坑a[i]中。
////3．i++由前向后找比它大的数，找到后也挖出此数填到前一个坑a[j]中。
////4．再重复执行2，3二步，直到i==j，将基准数填入a[i]中。
//
//int partition(int a[], int low, int high)
//{
//	int i = low, j = high, x = a[low];//首先将基准树挖出，行成一个坑
//	while (i < j)
//	{
//		while (i < j && a[j] >= x) j--;	// 从右向左找第一个小于x的数
//		if (i < j) a[i] = a[j];			//将这个小于x的数填入前一个坑中
//		while (i < j && a[i]< x) i++;	// 从左向右找第一个大于等于x的数
//		if (i < j) a[j] = a[i];			//将这个大于等于x的数填入前一个坑里
//	}
//	a[i] = x;						//当i==j时，将基准数填入a[i]中
//	return i;
//}
//
//void quick_sort(int a[], int low, int high)
//{
//	if (low < high)
//	{
//		int k = partition(a, low, high);
//		quick_sort(a, low, k - 1);
//		quick_sort(a, k + 1, high);
//	}
//}
////Radix排序，又称为桶排序
////从低位到高位，将每一个数放进0-9的桶里
////将桶里的数，倒回数组中
////直到只有0号桶里有数字， 倒回
////void Radixsort(int a[], int N)
////{
////	int d = 0;//最高位数
////	for (int b = 0; b < d; b++) //位数
////	{
////		for (int i = 0; i < 10; i++)//桶子数
////		{
////			vector<int> bucket;//创建桶
////			for (int j = 0; j < N; j++)//遍历数组
////			{
////				if ((a[j] / 10^b) % 10 == i) //判断a[j]属于哪个桶子
////				{
////					bucket.push_back = a[j]; //将a[j]放进桶里
////				}
////			}
////		}
////		for (int i = 0; i < 10; i++)//将桶里的内容倒回数组
////		{
////			a[i] = bucket;//将十个桶里的数倒回数组a中
////		}
////	}
////}
//void foo(char a[], int N)
//{
//	static int count = 0;
//	for (int i = 0; i < N; i++)
//	{
//		char &current = a[i];
//		for (int j = 0; j < N; j++)
//		{
//			if (i != j)
//			{
//				swap(current, a[j]);
//				count++;
//				cout << count << ":" << endl;
//				for (int k = 0; k < N; k++)
//				{
//					cout << a[k] << " ";
//				}
//				swap(current, a[j]);
//			}
//		}
//	}
//}
//int main()
//{
//	int a[] = { 67,23,89,35,2,9,78,98,28,90,10 };
//	//bubble(a, 11);
//	//selectsort(a, 11);
//	//insertsort(a, 11);
//	//quick_sort(a, 0, 11);
//	//mergesort(a, 11);
//	//for (int i = 0; i < 11; i++)
//	//cout << a[i] << " ";
//	char s[] = { 'a','b','c' };
//	foo(s, 3);
//	int i;
//	cin >> i;
//}