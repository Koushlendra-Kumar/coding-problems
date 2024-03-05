#include <iostream>
#include <unordered_map>

bool check_permutation_palindrome(std::string s)
{
    std::unordered_map<char, int> letterCount;

    for (char c : s)
    {
        letterCount[c]++;
    }
    int oddCount = 0;
    for (const auto &pair : letterCount)
    {
        if (pair.second % 2 == 1)
        {
            oddCount++;
        }
    }
    return oddCount <= 1;
}

int main()
{
    std::string userString;
    std::cout << "Write a word below to check if 'any Permutaion' of that word is a 'Palindrome'" << std::endl;
    std::cin >> userString;
    std::cout << (check_permutation_palindrome(userString) ? "Yes, a permutation of " + userString + "is a palindrome." : "No, no permutation of " + userString + " is a palindrome.") << std::endl;
}