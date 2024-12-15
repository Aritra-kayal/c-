#include <iostream>
#include <conio.h>
using namespace std;
class A
{
private:
    int n, c, r, arm;

public:
    void input()
    {
        cout << "Enter a number: ";
        cin >> n;
    }
    void output()
    {
        c=n;
        arm = 0;
        while (n > 0)
        {
            r = n % 10;
            arm = (r * r * r) + arm;
            n = n / 10;
        }
        if (c == arm)
            cout << "Armstrong number";
        else
            cout << "Not armstrong number";
    }
};
int main()
{
    A obj;
    obj.input();
    obj.output();
    getch();
}