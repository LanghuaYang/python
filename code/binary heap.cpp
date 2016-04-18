//#include <iostream>
//using namespace std;
//
//int leftchild(int index)
//{
//	return index * 2 + 1;
//}
//void AdjustDown(int A[], int i, int len)
//{
//	int temp = A[i]; // 暂存A[i] 
//
//	for (int largest = leftchild(i); largest<len; largest = leftchild(largest))
//	{
//		if (largest != len - 1 && A[largest + 1]>A[largest])
//			++largest;     // 如果右子结点大 
//		if (temp < A[largest])
//		{
//			A[i] = A[largest];
//			i = largest;     //记录交换后的位置 
//		}
//		else
//			break;
//	}
//	A[i] = temp;  // 被筛选结点的值放入最终位置 
//}
//
//void BuildMaxHeap(int A[], int len)
//{
//	for (int i = len / 2 - 1; i >= 0; --i) // 最后一个非叶子节点 
//		AdjustDown(A, i, len);
//}
//void HeapSort(int A[], int n)
//{
//	BuildMaxHeap(A, n);    // 初始建堆 
//	for (int i = n - 1; i>0; --i) // n-1趟的交换和建堆过程  
//	{
//		// 输出最大的堆顶元素（和堆底元素交换） 
//		A[0] = A[0] ^ A[i];
//		A[i] = A[0] ^ A[i];
//		A[0] = A[0] ^ A[i];
//		// 调整，把剩余的n-1个元素整理成堆 
//		AdjustDown(A, 0, i);
//	}
//}
//void fun()
//{
//	cout << "test function pointer" << endl;
//}
//int main()
//{
//	int a[10] = { 4,1,3,2,16,9,10,14,8,7 };
//	BuildMaxHeap(a, 10);
//	HeapSort(a, 10);
//	for (int i = 0; i < 10; i++)
//	{
//		cout << a[i] << " ";
//	}
//	//void(*f)(void);
//	//f = &fun;
//	//f();
//	//cout << sizeof("abcdef") << endl;
//	//cout << sizeof(char *) << endl;
//	int i;
//	cin >> i;
//	return 0;
//}