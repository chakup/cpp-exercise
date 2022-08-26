#include <iostream>
#include "compare.h" //Preprocessor copy whatever we have in compare.h and paste it in here

int main()
{

    int maximum = max(34, 56);
    std::cout << "max : " << maximum << std::endl;

    int minimum = min(146, 23);
    std::cout << "min : " << minimum << std::endl;
    return 0;
}
