#include <iostream>
#include <conio.h>
using namespace std;
class A
{
private:
    int n, i, s;

public:
    void input()
    {
        cout << "Enter a number: ";
        cin >> n;
    }
    void output()
    {
        i = 1;
        s = 0;
        while (i <= n)
        {
            s = s + i;
            i++;
        }
        cout << "Sum of n numbers is: ";
        cout << s;
    }
};
int main()
{
    A obj;
    obj.input();
    obj.output();
    getch();
}