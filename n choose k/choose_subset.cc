#include <iostream>

int C(int n, int k)
{
    if(k == 0 || k == n){
        return 1;
    }else {
        return C(n-1, k) + C(n-1, k-1);
    }
}

int main()
{
    int n, k;
    std::cout << "Enter n: ";
    std::cin >> n;
    std::cout << "Enter k: ";
    std::cin >> k;
    std::cout << "The number of distinct subset of size " << k << "from a set of size " << n << " is: " << C(n, k) << std::endl;
}