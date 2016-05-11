#ifndef _SINGLETON_H_
#define _SINGLETON_H_

class SINGLETON{
public:
	static SINGLETON * get_insatance();
	void Destroy_instance();
	void dosomething();
private:
	SINGLETON();
	~SINGLETON();
	SINGLETON(const SINGLETON &);
	SINGLETON & operator = (const SINGLETON &);
	static SINGLETON * instance;
};
#endif