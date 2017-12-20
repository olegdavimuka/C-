#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int n[t];
    int c[t][10000];
    for (int i = 0; i < t; i++) {
        cin >> n[i];
        for (int j = 0; j < n[i]; j++) {
        cin >> c[i][j];
        }
    }

    int max[t];
    int num[t];
    for (int i = 0; i < t; i++) {
        max[i] = 1;
    }
    for (int i = 0; i < t; i++) {
        num[i] = c[i][0];
    }

    int frequency;
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < n[i] - 1; j++) {
            frequency = 1;
            for (int k = j + 1; k < n[i]; k++) {
                if (c[i][j] == c[i][k])
                    frequency++;
            }
        if (frequency == max[i]) {
            max[i] = frequency;
            num[i] = 0;
        }
        if (frequency > max[i]) {
            max[i] = frequency;
            num[i] = c[i][j];
        }
        }
    }

    for (int i = 0; i < t; i++) {
        cout << num[i] << endl;
    }
}
