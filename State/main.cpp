#include <iostream>
//#include "tank.h"
#include "building.h"

using namespace std;
class SiegeTank;

void main()
{
	char a[100] = { "��Ӫ" };
	concreteBuilding cb(a);
	cb.production();
	cb.injured();
	cb.repair();
	cb.show();
	while (1);
	return;
}
