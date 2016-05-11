#include"SimpleFactory.h"
#include <iostream>


using namespace std;

Apple * Gardener::apple = NULL;
Grape * Gardener::grape = NULL;
Orange * Gardener::orange = NULL;

Gardener::~Gardener()
{
	if(apple != NULL)
		delete apple;
	if(grape != NULL)
		delete grape;
	if(orange != NULL)
		delete orange;

}
Fruit* Gardener::get_fruit(int fruit_type)
{
	Fruit* fruit_instance = NULL;
	if(fruit_type == APPLE)
	{
		if(apple == NULL)
			apple = new Apple();
		fruit_instance = apple;
	}
	else if(fruit_type == GRAPE)
	{
		if(grape == NULL)
			grape = new Grape();
		fruit_instance = grape;
	}
	else if(fruit_type == ORANGE)
	{
		if(orange == NULL)
			orange = new Orange();
		fruit_instance = orange;
	}
	return fruit_instance;
}

Apple::Apple(){cout << "apple constructed" << endl;}
void Apple::plant(){cout << "apple plant" << endl;}
void Apple::grow(){cout << "apple grow" << endl;}
void Apple::harvest(){cout << "apple harvest" << endl;}

Grape::Grape(){cout << "Grape constructed" << endl;}
void Grape::plant(){cout << "Grape plant" << endl;}
void Grape::grow(){cout << "Grape grow" << endl;}
void Grape::harvest(){cout << "Grape harvest" << endl;}

Orange::Orange(){cout << "Orange constructed" << endl;}
void Orange::plant(){cout << "Orange plant" << endl;}
void Orange::grow(){cout << "Orange grow" << endl;}
void Orange::harvest(){cout << "Orange harvest" << endl;}
