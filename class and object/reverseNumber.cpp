#include <iostream>
#include <conio.h>
using namespace std;
class A
{
private:
    int n, r;

public:
    void input()
    {
        cout << "Enter a number: ";
        cin >> n;
    }
    void output()
    {
        while (n > 0)
        {
            r = n % 10;
            cout << r;
            n = n / 10;
        }
    }
};
int main()
{
    A obj;
    obj.input();
    obj.output();
    getch();
}