#include <iostream>


int main()
{
    long double a = 1000;
    long double b = 0.0001;
    long double x = pow(a+b,2) , y = pow(a, 2) + 2*a*b , z = pow(b, 2) , R;

    R = (x-y)/z;

    std::cout << "Результат: " << R << std::endl;

    return 0;

    


}