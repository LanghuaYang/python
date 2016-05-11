#include"subject.h"


void WeatherData::registerobserver(observer * o)
{
	m_observer.push_back(o);
}

void WeatherData::removeobserver(observer * o)
{
	m_observer.remove(o);
}

void WeatherData::notifyobserver()
{
	for(list<observer *>::iterator i = m_observer.begin(); i != m_observer.end(); i++)
	{
		observer * obj = *i;
		obj->update(temp,hum,pres);
	}
}

void WeatherData::setmeasurement(float temperature, float humidity, float pressure)
{
	temp = temperature;
	hum = humidity;
	pres = pressure;
	notifyobserver();
}
