#include <iostream>
#include <conio.h>
using namespace std;
class A
{
private:
    int n, r, s;

public:
    void input()
    {
        cout << "Enter a number : ";
        cin >> n;
    }
    void output()
    {
        s = 0;
        while (n > 0)
        {
            r = n % 10;
            s = s + r;
            n = n / 10;
        }
        cout << "sum of digits: " << s;
    }
};
int main()
{
    A obj;
    obj.input();
    obj.output();
    getch();
}