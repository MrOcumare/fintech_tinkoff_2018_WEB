#include <iostream>
#include <vector>
#include <cctype>   // для функции isdigit
#include <cstdlib>  // для функции atoi
 
int main() {
 
    std::string buff = "";
    std::string result = "";
    char ch;
   
    while (std::cin >> ch) {
        if (isdigit(ch)) {
            buff += ch;
        } else {
            if (buff != "") {
                for (int i = 0; i < atoi(buff.c_str()); i++) {
                    result += ch;
                }
                buff = "";
            } else {
                result += ch;
            }
        }
    }
   
    std::cout << result << std::endl;
 
 
    return 0;
 
}