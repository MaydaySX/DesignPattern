#ifndef STATE_H
#define STATE_H
#include <iostream>
using namespace std;

class absState {
public:
	virtual void show() = 0;
};

class buildingState :public absState {
public:
	virtual void show()
	{
		cout << "������Ч  ";
	}
};

class fireState :public absState {
public:
	virtual void show()
	{
		cout << "�����Ż�  ";
	}
};

class productionState :public absState {
public:
	virtual void show()
	{
		cout << "�����׹�  ";
	}
};

class upGradeState :public absState
{
public:
	virtual void show()
	{
		cout << "��������  ";
	}
};

class repairState :public absState
{
public:
	virtual void show()
	{
		cout << "�޸��̹�  ";
	}
};
#endif
