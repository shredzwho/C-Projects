//namespaces provides entity to avoid name conflicts in a large projects

#include <iostream>

namespace first{
    int x = 1; //here x = 1
}
namespace second{
    int x = 2; //here x = 2
}
int main(){
    std::cout << second::x << '\n'; //we are printing first namespace
    std::cout << first::x << '\n'; //we are printing second namespace
    return 0;
}