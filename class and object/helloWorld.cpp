#include <iostream>
#include <conio.h>
using namespace std;
class A
{
public:
    void show()
    {
        cout << "Hello World";
    }
};
int main()
{
    A obj;
    obj.show();
    getch();
}