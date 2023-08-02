#include <iostream>

int Raise(int base, int exp)
{
    if(exp == 0){
        return 1;
    } else {
        return base * Raise(base, exp - 1);
    }
}

int main() 
{
    int x , y;
    std::cout << "find the x to the power y" << std::endl;
    std::cout << "Enter the value of x: " ;
    std::cin >> x;
    std::cout << "Enter the value of y: ";
    std::cin >> y;
    std::cout << x << "^" << y << " is: " << Raise(x, y) << std::endl;
}