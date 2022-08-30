#include <iostream>

int main()
{

    // Capture lists
    double a{10};
    double b{20};
    /*
        auto func = [a, b]()
        {
            std::cout << "a + b : " << a + b << std::endl;
        };
        func();*/
    /*
        double c{42};

        auto func = [c]() { // C is just a copy and not the actual variable
            std::cout << "Inner value : " << c << "address of inner" << &c << std::endl;
        };

        for (size_t i{}; i < 5; ++i)
        {
            std::cout << "Outer value : " << c << "address of outer" << &c << std::endl;
            func();
            ++c;
        }*/

    // Capture by reference
    double c{42};

    auto func = [&c]() { // C is no longer a copy and using the initial C
        std::cout << "Inner value : " << c << "address of inner" << &c << std::endl;
    };

    for (size_t i{}; i < 5; ++i)
    {
        std::cout << "Outer value : " << c << "address of outer" << &c << std::endl;
        func();
        ++c;
    }

    return 0;
}