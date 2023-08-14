#include <iostream>
#include <cstdlib>
#include <algorithm>

bool one_away(std::string s1, std::string s2)
{   
    bool found_diff = false;
    if(abs(s1.length() - s2.length()) > 1){
        return false;
    } else if(s1.length() == s2.length()){
        for(int i = 0; i< s1.length(); i++){
            if(s1[i] != s2[i]){
                if(found_diff){
                    return false;
                }
                found_diff = true;
            }
        }
        return true;
    } else {
        int i = 0;
        int j = 0;
        std::string longest_string = s1.length() > s2.length() ? s1 : s2;
        std::string smallest_string = s1.length() > s2.length() ? s2 : s1;
        while(i < longest_string.length() && j < smallest_string.length()){
            if(longest_string[i] != smallest_string[j]){
                if(i != j){
                    return false;
                }
                i++;
            }else {
                i++;
                j++;
            }
        }
        return true;
    }
}

int main()
{
    std::cout << one_away("pale", "ple") << std::endl;
    std::cout << one_away("pale", "pales") << std::endl;
    std::cout << one_away("pale", "bale") << std::endl;
    std::cout << one_away("pale", "bae") << std::endl;
}