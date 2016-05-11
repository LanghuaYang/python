#ifndef _OBSERVATION_H_
#define _OBSERVATION_H_
#include "subject.h"

class observer{
public:
	virtual ~observer(){}
	virtual void update(float temperature, float humidity, float pressure) = 0;
};

class currentweather:public observer{
public:
	~currentweather(){}
	void update(float temperature, float humidity, float pressure);
private:
	float c_temp;
	float c_hum;
	float c_pres;
};

class forcastweather:public observer{
public:
	~forcastweather(){}
	void update(float temperature, float humidity, float pressure);
private:
	float f_temp;
	float f_hum;
	float f_pres;
};
#endif