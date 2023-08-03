#include <iostream>

// Find x to the power y (iteratively)
int Raise_iteratively(int base, int exp)
{
    int ans = 1;
    for(int i = 1; i <= exp; i++){
        ans *= base;
    }
    return ans;
}

// Find x to the power y (recursively)
int Raise(int base, int exp)
{
    if(exp == 0){
        return 1;
    } else {
        return base * Raise(base, exp - 1);
    }
}

// More efficient recursive function
int Raise_Efficient(int base, int exp)
{
    if(exp == 0){
        return 1;
    } else {
        int half = Raise_Efficient(base, exp/2);
        if(exp % 2 == 0){
            return half * half;
        } else {
            return base * half * half;
        }
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
    std::cout << x << "^" << y << " (using iteration) is: " << Raise_iteratively(x, y) << std::endl;
    std::cout << x << "^" << y << " (using recursion) is: " << Raise(x, y) << std::endl;
    std::cout << x << "^" << y << " (using efficient recursion) is: " << Raise_Efficient(x, y) << std::endl;
}