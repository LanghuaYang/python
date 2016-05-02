//#include <iostream>
//
//using namespace std;
//
////二叉树本身就是按照递归的方式定义的，因此递归的算法在二叉树相关的遍历生成中非常有效
////迭代的方法也可以
//struct BiTreeNode
//{
//	char data;
//	struct BiTreeNode *lchild, *rchild;
//};
////					A
////		B						C
////	D		E           F				G
////H		I       K            M
////按照前序遍历方法创建一棵树
//
////输入ABDH  I  E K  CF M  G  即可生成上图的树
////约定按照前序遍历的方式生成树
//void CreateTree(BiTreeNode * &T)
//{
//	char c;
//	c = cin.get();
//	if (' ' == c)
//		T = NULL;
//	else
//	{
//		T = new BiTreeNode;
//		T->data = c;
//		CreateTree(T->lchild);
//		CreateTree(T->rchild);
//	}
//}
////前序遍历树
//void PreOrderTraverse(BiTreeNode * &T)
//{
//	if (T)
//	{
//		//visit(T);
//		cout << T->data << " ";
//		PreOrderTraverse(T->lchild);
//		PreOrderTraverse(T->rchild);
//	}
//}
////中序遍历树
//void MidOrderTraverse(BiTreeNode * &T)
//{
//	if (T)
//	{
//		MidOrderTraverse(T->lchild);
//		cout << T->data << " ";
//		MidOrderTraverse(T->rchild);
//	}
//}
////后序遍历树
//void BackOrderTraverse(BiTreeNode * &T)
//{
//	if (T)
//	{
//		BackOrderTraverse(T->lchild);
//		BackOrderTraverse(T->rchild);
//		cout << T->data << " ";
//	}
//}
////计算二叉树的节点数
//int CountNode(BiTreeNode * &T)
//{
//	if (!T) return 0;
//	else
//	{
//		int L = CountNode(T->lchild);
//		int R = CountNode(T->rchild);
//		return L + R + 1;
//	}
//}
//
////计算二叉树的深度
//int Depth(BiTreeNode * &T)
//{
//	if (!T) return 0;
//	else
//	{
//		int L = Depth(T->lchild);
//		int R = Depth(T->rchild);
//		return L>R ? (L + 1) : (R + 1);
//	}
//}
////删除树
//void DeleteTree(BiTreeNode * &T)
//{
//	if (T)
//	{
//		DeleteTree(T->lchild);
//		DeleteTree(T->rchild);
//		delete T;
//		T = NULL;
//	}
//}
//
//void main()
//{
//	BiTreeNode *Root;
//	CreateTree(Root);
//	PreOrderTraverse(Root);
//	cout << endl;
//	MidOrderTraverse(Root);
//	cout << endl;
//	BackOrderTraverse(Root);
//	cout << endl;
//	cout << CountNode(Root) << endl;
//	cout << Depth(Root) << endl;
//	DeleteTree(Root);
//	int i;
//	cin >> i;
//}