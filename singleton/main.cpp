#include "Singleton.h"

int main()
{
	//get_instance() is a static function, so we could use it 
	//without creating a instance.
	SINGLETON::get_insatance()->dosomething();
	return 0;
}
