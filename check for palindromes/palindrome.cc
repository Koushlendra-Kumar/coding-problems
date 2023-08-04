#include <iostream>
#include <string>

bool isPalindrome_recursion(std::string s)
{
    if(s.length() <= 1){
        return true;
    }
    return s[0] == s[s.length() - 1] && 
            isPalindrome_recursion(s.substr(1, s.length() - 2));
}

int main()
{
    std::string inputStr;
    std::cout << "Write a string to check if it's a palindrome: ";
    getline(std::cin, inputStr); 
    if(isPalindrome_recursion(inputStr)){
        std::cout << "It is a Palindrome" << std::endl;
    } else {
        std::cout << "It is NOT a Palindrome" << std::endl;
    }

}