#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    vector<int> _rank;
    int a, b;
    cout << "Enter the number" << endl;
    cin >> a;
    bool isNegative;
    char sign;
    if (a > 0)
    {
        isNegative = false;
        sign = '+';
    }
    else
    {
        isNegative = true;
        sign = '-';
    }
    while (a != 0)
    {
        b = a % 10;
        _rank.push_back(b);
        a = a / 10;
    }
   
    for (int i = _rank.size() - 1; i > 0; i--)
        if(_rank[i]!=0)
            if (isNegative)
                cout << _rank[i] << "*10^" << i;
            else
                cout << _rank[i] << "*10^" << i << sign;
    
    cout << _rank[0];
}

