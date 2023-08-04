#include <iostream>
#include <vector>

bool BSearch(std::vector<int> prime, int start, int end, int key)
{   
    if(start > end) return false;
    int mid = (start + end) / 2;
    if(prime[mid] == key){
        return true;
    } else if(prime[mid] < key ){
        return BSearch(prime, mid + 1, end, key);
    } else {
        return BSearch(prime, start, mid - 1, key);
    }
}

int main()
{
    int userInp;
    std::vector<int> prime {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    std::cout << "Enter an integer, less than 100, to check if it's a Prime number: ";
    std::cin >> userInp;
    if(BSearch(prime, 0, prime.size() - 1, userInp)){
        std::cout << userInp << " is PRIME" << std::endl;
    } else {
        std::cout << userInp << " is NOT PRIME" << std::endl;
    }
}