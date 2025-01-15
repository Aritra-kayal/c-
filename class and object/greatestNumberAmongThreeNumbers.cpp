#include <iostream>
#include <conio.h>
using namespace std;
class A
{
private:
    int a, b, c;

public:
    void input()
    {
        cout << "Enter three numbers: ";
        cout << endl;
        cin >> a;
        cout << endl;
        cin >> b;
        cout << endl;
        cin >> c;
    }
    void output()
    {
        if (a > b)
        {
            if (a > c)
                cout << "Greatest number is: " << a;
            else
                cout << "Greatest number is: " << c;
        }
        else
        {
            if (b > c)
                cout << "Greatest number is: " << b;
            else
                cout << "Greatest number is: " << c;
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