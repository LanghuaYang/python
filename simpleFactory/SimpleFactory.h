#ifndef _SIMPLEFACTORY_H_
#define _SIMPLEFACTORY_H_

enum
{
	APPLE = 0,
	GRAPE = 1,
	ORANGE = 2
};


class Fruit{
public:
	~Fruit(){};
	virtual void plant() = 0;
	virtual void grow() = 0;
	virtual void harvest() = 0;
	};

class Apple:public Fruit{
public:
	Apple();
	void plant();
	void grow();
	void harvest();
};

class Grape:public Fruit{
public:
	Grape();
	void plant();
	void grow();
	void harvest();
};

class Orange:public Fruit{
public:
	Orange();
	void plant();
	void grow();
	void harvest();
};


class Gardener{
public:
	~Gardener();
	Fruit* get_fruit(int fruit_type);
private:
	static Apple * apple;
	static Grape * grape;
	static Orange * orange;
};

#endif