// C++ program to cheek whether the given number is odd or even using class.
#include <iostream>
#include <conio.h>
using namespace std;
class num
{
    int n;

public:
    void getdata();
    void check();
};
void num::getdata()
{
    cout << "Enter a number:";
    cin >> n;
}
void num::check()
{
    if (n % 2 == 0)
        cout << ":::EVEN:::";
    else
        cout << ":::ODD:::";
}
int main()
{
    num n1;
    n1.getdata();
    n1.check();
    getch();
    return 0;
}