#include <iostream>

int main()
{

    // Declare and initialize pointer
    int *p_number{}; // Will initialize with nullptr (null pointer)
    double *p_fractional_number{};

    // Explicitly initialize with nullptr
    int *p_number1{nullptr};
    int *p_fractional_number1{nullptr};

    // Pointers to different variables are of the same size

    std::cout << "sizeof(int) : " << sizeof(int) << std::endl;                                   // 4
    std::cout << "sizeof(double) : " << sizeof(double) << std::endl;                             // 4
    std::cout << "sizeof(double*) : " << sizeof(double *) << std::endl;                          // 4
    std::cout << "sizeof(int*) : " << sizeof(int *) << std::endl;                                // 4
    std::cout << "sizeof(p_number1) : " << sizeof(p_number1) << std::endl;                       // 4
    std::cout << "sizeof(p_fractional_number1) : " << sizeof(p_fractional_number1) << std::endl; // 4

    // It doesnt matter if you put the * close to the data type or to variable name

    int *p_nuber2{nullptr};

    int *p_number5{}, other_int_var{};
    int *p_number6{}, other_int_var6{};

    std::cout << "sizeof(p_number5) : " << sizeof(p_number5) << std::endl;         // 4
    std::cout << "sizeof(other_int_var) : " << sizeof(other_int_var) << std::endl; // 4
    std::cout << "sizeof(p_number6) : " << sizeof(p_number6) << std::endl;         // 4

    // Initializing pointers and assigning them data
    // We know that pointers store addresses of variables
    int int_var{43};
    int *p_int{&int_var}; // The addess of int_var with operator (&)

    std::cout << "Int var : " << p_int << std::endl;

    // You can also change the address stored in a pointer any time
    int int_var1{65};
    p_int = &int_var1; // Assign a different address to the pointer
    std::cout << "p_int (with different address) : " << p_int << std::endl;

    // Can't cross assign between pointers of different types

    // Dereferencing a pointer :
    int *p_int2{nullptr};
    int int_data{56};
    p_int2 = &int_data;

    std::cout << "value : " << *p_int2 << std::endl; // Dereferencing a pointer

    return 0;
}