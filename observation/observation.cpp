#include"observation.h"
#include "subject.h"
#include<iostream>

void currentweather::update(float temperature, float humidity, float pressure)
{
	c_temp = temperature;
	c_hum = humidity;
	c_pres = pressure;
	cout<< "currentweather update" << c_temp << c_hum << c_pres << endl;
}

void forcastweather::update(float temperature, float humidity, float pressure)
{
	f_temp = temperature;
	f_hum = humidity;
	f_pres = pressure;
	cout<< "forcastweather update" << f_temp << f_hum << f_pres << endl;
}

