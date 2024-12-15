#include <iostream>
#include <conio.h>
using namespace std;
class A
{
private:
    int n, a, b, i, c;

public:
    void input()
    {
        cout << "Enter a number of terms: ";
        cin >> n;
    }
    void output()
    {
        a = 0;
        b = 1;
        for (i = 1; i <= n; i++)
        {
            cout <<"  " <<a;
            c = a + b;
            a = b;
            b = c;
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