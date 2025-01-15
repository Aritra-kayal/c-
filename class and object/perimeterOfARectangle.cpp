#include <iostream>
#include <conio.h>
using namespace std;
class A
{
private:
    float l, w, p;

public:
    void inpot()
    {
        cout << "Enter the value of length: ";
        cin >> l;
        cout << endl;
        cout << "Enter the value of width: ";
        cin >> w;
    }
    void output()
    {
        p = 2 * (l + w);
        cout << "Perimeter of a rectangle is: " << p;
    }
};
int main()
{
    A obj;
    obj.inpot();
    obj.output();
    getch();
}