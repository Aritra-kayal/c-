#include <iostream>
#include <conio.h>
using namespace std;
class A
{
private:
    int a, b;

public:
    void input()
    {
        cout << "Enter two numbers: ";
        cout<<endl;
        cin >> a;
        cout << endl;
        cin >> b;
    }
    void output()
    {
        if (a > b)
            cout << "Greatest number is: " << a;
        else
            cout << "Greatest number is: " << b;
    }
};
int main()
{
    A obj;
    obj.input();
    obj.output();
    getch();
}
