#include"observation.h"
#include "subject.h"
#include <iostream>
using namespace std;

int main(void)
{
	WeatherData weather;
	currentweather current;
	forcastweather forcast;

	weather.registerobserver(&current);
	weather.registerobserver(&forcast);

	weather.setmeasurement(30,75,29);
	int i;
	cin >> i;
	return 0;
}
