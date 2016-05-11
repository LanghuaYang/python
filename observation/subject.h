#ifndef _SUBJECT_H_
#define _SUBJECT_H_
#include "observation.h"
#include <list>
using namespace std;

class observer;

class Subject{
public:
	virtual ~Subject(){}
	virtual void registerobserver(observer* o) = 0;
	virtual void removeobserver(observer* o) = 0;
	virtual void notifyobserver() = 0;
private:
	list <observer *> m_observer;
};

class WeatherData:public Subject{
public:
	~WeatherData(){}
	void registerobserver(observer* o);
	void removeobserver(observer* o);
	void notifyobserver();
	void setmeasurement(float temperature, float humidity, float pressure);
private:
	list <observer *> m_observer;
	float temp;
	float hum;
	float pres;
};
#endif