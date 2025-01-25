#include <iostream>
#include <conio.h>
using namespace std;
class A
{
private:
    float pe, l, w;

public:
    void input()
    {
        cout << "Enter the value of length: ";
        cin >> l;
        cout << "Enter the value of width: ";
        cin >> w;
    }
    void output()
    {
        pe = 2 * (l + w);
        cout << "Perimeter of a rectangle is: " << pe;
    }
};
int main()
{
    A obj;
    obj.input();
    obj.output();
    getch();
}