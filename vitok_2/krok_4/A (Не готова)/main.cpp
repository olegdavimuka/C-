#include <cmath>
#include <iostream>

using namespace std;

// ������� :
//����������� - 1 �����
//������� �� �������� ����� �� ���� ������ - 0 �����
//���� ���������� - 0 ���� ������ ��� � ����� ���� �������
//������ ������ ����� �� ������� �� �������� - 2 �����
//������ ������ ������� ������ �� �������� - 1 �����
//������ ������ ����� �� ������� �� �������� - 0 �����

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
