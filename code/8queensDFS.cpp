//#include <iostream>
//using namespace std;
////八皇后问题 DFS
////int a[n];
////初始化数组a[]等操作
////...
////void dfs(int cur)
////{
////	int i;
////	if (cur>n)
////		//统计、输出结果等;  
////	else
////	{
////		for (i = 下界; i <= 上界; ++i)  // 枚举i所有可能的路径  
////		{
////			if (fun(cur, i))                 // 满足限界函数和约束条件  
////			{
////				a[cur] = i;
////				...                 // 其他操作,设置标志等  
////					dfs(cur + 1);
////				//回溯前的清理工作（如a[cur]置空值,标志置0等）;  
////			}
////		}
////	}
////}
//int queen[8];//解空间 下标为列数，值为行数
//int count1;
//
////剪枝函数  
//bool IsSafe(int col, int row)
//{
//	for (int i = 0; i < col; i++)
//	{
//		//判断是否处于同一行或同一斜线  
//		if (queen[i] == row
//			|| abs(col - i) == abs(row - queen[i])) return false;
//	}
//	return true;
//}
////DFS算法
//void DFS(int cur)
//{
//	if (cur == 8)
//	{
//		count1++;
//		//print queen[];
//	}
//	else
//	{
//		for (int i = 0; i < 8; i++)
//		{
//			if (IsSafe(cur, i))
//			{
//				queen[cur] = i;
//				DFS(cur + 1);
//			}
//		}
//	}
//}
//
//int main()
//{
//	DFS(0);
//	cout << count1 << endl;
//	int i;
//	cin >> i;
//	return 0;
//}