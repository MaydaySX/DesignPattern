#include "singleton.h"
#include <stdio.h>

int main() {
	CSingleton* s = CSingleton::getInstance();
	CSingleton* ss = CSingleton::getInstance();
	s->draw();
	if (s == ss) {
		cout << "s" << endl;
	}
	cout << &s << " " << &ss << endl;
	while (1);
	return 0;
}