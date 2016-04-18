///* start
//* declaration of copyright
//* Copyright (c) 2016, langhua yang
//* All rights reserved.
//* name: students score management system
//* writer; langhua yang
//* date:31/03/2016
//* version:0.0.1
//
//*1, funtions£º
//
//cout<<"¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡ï ¡î 1.add ¡î ¡ï¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ"<<endl;
//cout<<"¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡ï ¡î 2.display ¡î ¡ï¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ"<<endl;
//cout<<"¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡ï ¡î 3.sort ¡î ¡ï¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ"<<endl;
//cout<<"¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡ï ¡î 4.find ¡î ¡ï¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ"<<endl;
//cout<<"¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡ï ¡î 5.delete ¡î ¡ï¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ"<<endl;
//cout<<"¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡ï ¡î 6.modify ¡î ¡ï¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ"<<endl;
//cout<<"¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡ï ¡î 0.quit ¡î ¡ï¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ"<<endl;
//2, linked list
//
//* end
//*/
//
//#include <iostream> 
//#include <string>
//#include <fstream>
//using namespace std;
////every node
//class student
//{
//public:
//	string name;
//	int ID;
//	float score;
//	student * next;
//	student() {}
//	student(string n, int i, float s) :name(n), ID(i), score(s) {}
//	~student() {}
//	void init(ifstream &icin)
//	{
//		icin >> name >> ID >> score;
//	}
//	void modify()//modify the student information
//	{
//	}
//	void add()
//	{
//		cout << "\t please input the student name" << endl;
//		cin >> name;
//		cout << "\t please input the student ID" << endl;
//		cin >> ID;
//		cout << "\t please input the student score" << endl;
//		cin >> score;
//	}
//	void display()//display a student's inf
//	{
//		cout << "\t student name: " << name << "\t student ID: " << ID << "\t student score: " << score << endl;
//	}
//};
////linedlist and the relative operations
//class studentmanagementsystem
//{
//	student *head;
//	student *tail;
//	ifstream in;  //read
//	ofstream out; //write
//public:
//	studentmanagementsystem();
//	~studentmanagementsystem();
//	void shownemu()
//	{
//		cout << "¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡ï ¡î 1.add     ¡î ¡ï¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ" << endl;
//		cout << "¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡ï ¡î 2.display ¡î ¡ï¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ" << endl;
//		cout << "¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡ï ¡î 3.sort    ¡î ¡ï¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ" << endl;
//		cout << "¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡ï ¡î 4.find	   ¡î ¡ï¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ" << endl;
//		cout << "¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡ï ¡î 5.delete  ¡î ¡ï¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ" << endl;
//		cout << "¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡ï ¡î 6.modify  ¡î ¡ï¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ" << endl;
//		cout << "¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡ï ¡î 0.quit    ¡î ¡ï¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ¡þ" << endl;
//	}
//	void add()
//	{
//		student *p = new student;
//		tail->next = p;
//		tail = p;
//		p->next = NULL;
//		p->add();// input name id and score
//	}
//	void display()
//	{
//		student *p = head;
//		while (p)
//		{
//			//ofstream ocout;
//			if (!p->name.empty())
//			{
//				p->display();
//			}
//			p = p->next;
//		}
//	}
//	void sort() {}
//	void find() {}
//	void Delete() {}
//	void modify() {}
//	void quit()
//	{
//		//save the info to file
//		out.open("studentmanagement.txt");
//		student *p = head;
//		while (p)
//		{
//			//ofstream ocout;
//			if (!p->name.empty())
//			{
//				out << p->name << "\t" << p->ID << "\t" << p->score << "\n";
//			}
//			//delete the student node
//			student *temp = p;
//			p = p->next;
//			delete temp;
//		}
//		out.close();
//	}
//};
//
//studentmanagementsystem::studentmanagementsystem()
//{
//	head = new student;
//	tail = new student;
//	head->next = tail;
//	tail->next = NULL;
//	ifstream icin;
//	icin.open("studentmanagement.txt");
//	if (!icin)
//		cout << "this is a empty table, please add item first" << endl;
//	else
//	{
//		while (tail && !icin.eof())
//		{
//			tail->init(icin);
//			if (tail->name.empty())break;
//			tail->next = new student;
//			tail = tail->next;
//		}
//		tail->next = NULL;
//		icin.close();
//		cout << "\t\t load the student information successfully" << endl;
//	}
//	shownemu();
//}
//studentmanagementsystem::~studentmanagementsystem()
//{
//
//}
//int main()
//{
//	studentmanagementsystem grade;
//	bool quit = false;
//	while (!quit)
//	{
//		int i;
//		cin >> i;
//		switch (i)
//		{
//		case 1:
//			grade.add();
//			break;
//		case 2:
//			grade.display();
//			break;
//		case 3:
//			grade.sort();
//			break;
//		case 4:
//			grade.find();
//			break;
//		case 5:
//			grade.Delete();
//			break;
//		case 6:
//			grade.modify();
//			break;
//		case 0:
//			quit = true;
//			grade.quit();
//			break;
//		default:
//			break;
//		}
//	}
//	return 0;
//}