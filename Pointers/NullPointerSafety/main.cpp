#include <iostream>

int main()
{

    // Verbose nullptr check

    std::cout << std::endl;
    std::cout << "Verbose nullptr check: " << std::endl;

    int *p_number{};
    p_number = new int(7);

    if (!(p_number == nullptr))
    {
        std::cout << "p_number points to a VALID address : " << p_number << std::endl;
        std::cout << "*p_number : " << *p_number << std::endl;
    }
    else
    {
        std::cout << "p_number points to an INVALID address." << std::endl;
    }

    delete p_number;
    nullptr;

    return 0;
}