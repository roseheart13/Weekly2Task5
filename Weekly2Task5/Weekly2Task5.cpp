
#include <iostream>
#include <string>

int i = 5;

int main()
{
    

    do {
        if (i % 5 == 0) {
            std::cout << " " << i;
        }
        i++;
    } while (i <= 50);
    std::cout << std::endl;
} 


