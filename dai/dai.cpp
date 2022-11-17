#include <iostream>
#include <vector>
#include <windows.h>
using namespace std;

int main()
{
    int count = 0;
    double range1=0, range2=0;
    vector <double> v;
    cout << "Push Enter if you want end input\n";
    do
    {
        double buff;
        cout << "Inuput number --> ";
        cin >> buff;
        cout << endl;
        v.push_back(buff);
    }while(!GetAsyncKeyState(VK_ESCAPE));

    system("cls");
    cout << "Inupt start of range --> ";
    cin >> range1;
    cout << "\nInput end of range --> ";
    cin >> range2;

    if (v.size() == 0) cout << "\nYou nothing input";
    else {
        cout << "Numbers --> ";
        for (size_t i = 0; i < v.size(); i++)
        {
            if (v[i] > range1 && v[i] < range2) {
                cout << v[i] << " ";
                count++;
            }
        }
        if (count == 0) cout << "No number fell within the range\n";
    }

}