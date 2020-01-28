#include <iostream>

int main()
{
    double a = 10. / 4;
    double b = 10 % 4 ;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    //flow normally go right except initialize. 
    double c,d,e,f;
    c = 10;
    d = c = 100;
    e = 10;
    (f = e) = 100;
    std::cout << c << "\t" << d << std::endl;
    std::cout << e << "\t" << f << std::endl;

}