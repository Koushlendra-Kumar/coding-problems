#include <iostream>
#include <string>

std::string compress_string(std::string str)
{
    std::string compressed_str = "";
    char letter = str[0];
    int count = 0;
    for(int i = 0; i<= str.length(); i++){
        if(str[i] == letter){
            count++;
        }else {
            compressed_str += letter;
            compressed_str += std::to_string(count);
            letter = str[i];
            count = 1;
        }
    }
    return compressed_str;
}
int main() 
{
    std::cout << compress_string("aabbccddeeffgghh") << std::endl;
    std::cout << compress_string("aabcccccaaa") << std::endl;
}