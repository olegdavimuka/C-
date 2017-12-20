#include <iostream>

using namespace std;

int main()
{
    string marius, doctor;
    cin >> marius >> doctor;
    cout << (marius.length() >= doctor.length()? "go" : "no");
}
