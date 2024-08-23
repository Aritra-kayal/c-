// Sum of the digits of a number
#include <iostream>
#include <conio.h>
using namespace std;
class sum
{
    int n, d, s;

public:
    void read();
    void cal();
    void display();
};
void sum::read()
{
    cout << "Enter a number :";
    cin >> n;
}
void sum::cal()
{
    while (n > 0)
    {
        d = n % 10;
        s = s + d;
        n = n / 10;
    }
}
void sum::display()
{
    cout << "Sum=" << s;
}
int main()
{
    sum s;
    s.read();
    s.cal();
    s.display();
    getch();
    return 0;
}