#pragma once
class poistion
{
protected:
	int x;
	int y;

public:
	poistion();
	poistion(int, int);
	int get_x();
	int get_y();
	void set_x(int);
	void set_y(int);


	~poistion();
};

