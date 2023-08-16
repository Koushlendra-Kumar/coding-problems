#include <iostream>
#include <list>

void remove_duplicates(std::list<int>& list)
{
    std::list<int>::iterator i;
    std::list<int>::iterator j;

    for(i = list.begin(); i != list.end(); i++){
        for(j = std::next(i); j != list.end(); ){
            if(*i == *j){
                j = list.erase(j);
            }else {
                j++;
            }
        }
    }
}

void print_list(std::list<int> list)
{
    std::list<int>::iterator i;
    for(i = list.begin(); i != list.end(); i++){
        std::cout << *i << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::list<int> li {2,3,2,5,9,7,8,6,4,2,5,9};
    std::cout << "list before removing duplicates: ";
    print_list(li);
    remove_duplicates(li);
    std::cout << "list after removing duplicates: ";
    print_list(li);
}