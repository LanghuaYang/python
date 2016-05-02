/*
#include "MyProject.h"
#include <iostream>
#include <string>
using namespace std;


reuse
is-a inheritate
has-a composition 1,fully inclusion 2, by reference
1) it's common that the embedded class is private
2) you can public embeed class when you want to use all the public member function of the sub-class


//by reference supervisor is aslo a Employee, so we embedded the Employee *supervisor;
class Employee {
private:
	string name;
	string address;
	string salary_history;
	Employee *supervisor; //by reference embedded
public:
	Employee(string s) :name(s) {}
	void set_supervisor(Employee * a) { supervisor = a; };
	void get_supervisor() { cout << supervisor->name << endl; }
};

//fully inclusion
class Type
{
	int num;
public:
	Type() { cout << "type constructor" << endl; }
	void setnum() {}
};

class Car
{
public:
	Type type;
public:
	Car() { cout << "car constructor" << endl; }
};


void main()
{
	Employee A("li ming");
	Employee B("zhang san");
	A.set_supervisor(&B);
	A.get_supervisor();
	Car car; // can not access the private embedded class
	car.type.setnum();// when the sub-class is public, the public member function can be used.
	int i;
	cin >> i;
}
*/