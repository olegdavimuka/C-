#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	int xA, yA, xB, yB, xC, yC, xO, yO;
	scanf("%d %d %d %d %d %d %d %d", &xA, &yA, &xB, &yB, &xC, &yC, &xO, &yO);
	// OA = (xA - xO,yA - yO)
	// AB = (xB - xA,yB - yA)
	int OAxAB = (xA - xO)*(yB - yA) - (xB - xA)*(yA - yO);
	// OB = (xB - xO,yB - yO)
	// BC = (xC - xB,yC - yB)
	int OBxBC = (xB - xO)*(yC - yB) - (xC - xB)*(yB - yO);
	// OC = (xC - xO,yC - yO)
	// CA = (xA - xC,yA - yC)
	int OCxCA = (xC - xO)*(yA - yC) - (xA - xC)*(yC - yO);

	//якщо все додатнЇ або в≥д'Їмне - всередин≥
	//≤накше ззовн≥
	if (OAxAB >= 0 && OBxBC >= 0 && OCxCA >= 0 || OAxAB <= 0 && OBxBC <= 0 && OCxCA <= 0) printf("In\n");
	else printf("Out\n");
	return 0;
}
