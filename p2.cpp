#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a = 5, b = 10, n;
    cout << "give the value of numer \n \t ";
    cin >> n;
    if (n > a)
    {
        cout << " given number is greater than 5 \n "
             << "good luck \t " << endl;
    }
    else
    {
        cout << "given number is lower than 5 \n "
             << "good luck \t " << endl;
    }

    system("pause");
    // return 0;
}
