#include"SimpleFactory.h"
#include<iostream>
using namespace std;

int main(void)
{
	Gardener Tom;
	Fruit* fruit = Tom.get_fruit(APPLE);
	fruit->plant();
	fruit->grow();
	fruit->harvest();
	int i;
	cin >> i;
	return 0;
}