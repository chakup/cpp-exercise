#include <iostream>
#include <string>

std::string number_to_string(int num)
{

    return std::to_string(num);
}

int main()
{

    number_to_string(1 + 2); // "3"
    number_to_string(67);    // "67"
    number_to_string(-5);    // "-5"

    return 0;
}
