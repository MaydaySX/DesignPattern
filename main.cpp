#include "polynomial.h"

int main() {
	Polynomial poly;
	PolyNode *La;
	float C1[] = { 3, 7, 9, 5 }, C2[] = { 8, 22, -9 };
	int E1[] = { 1, 0, 8, 17 }, E2[] = { 1, 7, 8 };
	poly.createList(La, C1, E1, 4);
	poly.print(La);
	poly.sortList(La);
	poly.print(La);

	getchar();

	return 0;
}