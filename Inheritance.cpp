#include <iostream>
using namespace std;
class Point;
std::ostream& operator<<(std::ostream& out, const Point& c);

class Complex;
std::ostream& operator<<(std::ostream& out, const Complex& c)
{

}

int main()
{
    Complex c1(15, 30), c2 (100, 200);
    Point& p_c1 = c1; Point& p_c2 = c2;
    
    Swap (p_c1, p_c2);  
    
    cout << "c1: (Point)" << p_c1 << "c2: " << p_c2 << endl;	    
    cout << "c1: " << c1 << "c2: " << c2 << endl;
    
    return 0;
}