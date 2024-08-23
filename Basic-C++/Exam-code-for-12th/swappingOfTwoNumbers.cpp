/*Write a function using refrence variable as argument to swap
the value of a pair of integers.*/
#include <iostream>
#include <conio.h>
using namespace std;
class swapping
{
    int a;

public:
    void getdata(void);
    friend void swap(swapping &, swapping &);
    void display(void);
};
void swapping::getdata(void)
{
    cout << "\n\nEnter any Integer :";
    cin >> a;
}
void swap(swapping &o1, swapping &o2)
{
    int temp;
    temp = o1.a;
    o1.a = o2.a;
    o2.a = temp;
}
void swapping ::display(void)
{
    cout << a << endl;
}
int main()
{
    swapping o1, o2;
    cout << "Before Swapping\n";
    o1.getdata();
    o2.getdata();
    swap(o1, o2);
    cout << "\n\nAfter Swapping\n";
    o1.display();
    o2.display();
    getch();
    return 0;
}
