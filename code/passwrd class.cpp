//using namespace std;
//
//class passwd {
//	string password, inputpassword;
//public:
//	passwd(char * input) :password(input) {}
//	void inputpasswrd();
//	bool isture(const char * psw);
//};
//void passwd::inputpasswrd()
//{
//	char ch;
//	while (1)
//	{
//		ch = cin.get();
//		if ('\n' == ch && !inputpassword.empty())
//			break;
//		else if (ch == '\b' && !inputpassword.empty())
//			inputpassword.pop_back();
//		else if ('\n' != ch && ch != '\b')
//			inputpassword.push_back(ch);
//	}
//	password = inputpassword;
//}
//bool passwd::isture(const char * psw)
//{
//	if (psw == password)
//		return true;
//	else
//		return false;
//}
//void main()
//{
//	passwd pw("liuxinyang614");
//	pw.inputpasswrd();
//	cout << pw.isture("abcde") << endl;
//	int i;
//	cin >> i;
//}
