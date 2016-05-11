#include "Singleton.h"
#include <iostream>

using namespace std;

SINGLETON* SINGLETON::instance = NULL;

SINGLETON::SINGLETON()
{
	cout << "singleton constructed"<< endl;
}

SINGLETON::~SINGLETON()
{
	cout << "singleton destructed" << endl;
}

SINGLETON::SINGLETON(const SINGLETON &)
{}

//not thread safe, using pthread_mutx_lock/unlock
SINGLETON * SINGLETON::get_insatance()
{
	SINGLETON * ret = instance;
	if(ret == NULL)
	{
		instance = new SINGLETON;
		ret = instance;		
	}
	return ret;
}

void SINGLETON::Destroy_instance()
{
	delete this;
	instance = NULL;
}
void SINGLETON::dosomething()
{
	// cout << __FUNCTION__<< "," << __LINE__ << endl;
	cout << "," << __LINE__ << endl;
}
