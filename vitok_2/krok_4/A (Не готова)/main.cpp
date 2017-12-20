#include <cmath>
#include <iostream>

using namespace std;

// ¬ар≥анти :
//дотикаютьс€ - 1 точка
//довжина м≥ж центрами б≥льша за суму рад≥ус≥в - 0 точок
//кола сп≥впадають - 0 €кщо рад≥уси р≥зн≥ ≥ безл≥ч €кщо однаков≥
//р≥зниц€ рад≥ус≥в менша за довжину м≥ж центрами - 2 точки
//р≥зниц€ рад≥ус≥в дор≥внюЇ довжин≥ м≥ж центрами - 1 точка
//р≥зниц€ рад≥ус≥в б≥льша за довжину м≥ж центрами - 0 точок

int main()
{
    double x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    double centersDistance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    double radiusSum = r1 + r2;
    double radiusDifference = abs(r1 - r2);
    if (centersDistance == radiusSum) cout << 1;
    else {
        if (centersDistance > radiusSum) cout << 0;
        else {
            if (centersDistance == 0) {
                if (abs(r1 - r2) != 0) cout << -1;
                else cout << 0;
            }
            else {
                if ((centersDistance > 0) && (centersDistance < radiusSum)) {
                    if (radiusDifference < centersDistance) cout << 2;
                    else {
                        if (radiusDifference == centersDistance) cout << 1;
                        else {
                            if (radiusDifference > centersDistance) cout << 0;
                        }
                    }
                }
            }
        }
    }
}
