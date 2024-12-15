#include <iostream>
#include <conio.h>
using namespace std;
class A
{
private:
    int n, i, f;

public:
    void input()
    {
        cout << "Enter a number: ";
        cin >> n;
    }
    void output()
    {
        f = 1;
        for (i = 1; i <= n; i++)
        {
            f = f * i;
        }
        cout << "Factorial is: ";
        cout << f;
    }
};
int main()
{
    A obj;
    obj.input();
    obj.output();
    getch();
}