#include <iostream>
#include <conio.h>
using namespace std;
class A
{
private:
    int n, c, s, r;

public:
    void input()
    {
        cout << "Enter a number: ";
        cin >> n;
    }
    void output()
    {
        c = n;
        s = 0;
        while (n > 0)
        {
            r = n % 10;
            s = (s * 10) + r;
            n = n / 10;
        }
        if (c == s)
            cout << "Palindrome number";
        else
            cout << "Not palindrome number";
    }
};
int main()
{
    A obj;
    obj.input();
    obj.output();
    getch();
}