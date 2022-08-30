#include <iostream>

int main()
{

    /*
        Lambda function signature:
                                    [capture list] (parameters) -> return type {
                                        //Function body
                                    }
*/

    // Declaring a lambda function and calling it through a name
    /*auto func = []()
    {
        std::cout << "Hello world!" << std::endl;
    };
    func();
    */

    auto result = [](double a, double b)
    {
        return (a + b);
    }(12.1, 5.7);

    std::cout << result << std::endl;

    // Declare a lambda function and call it directly
    []()
    {
        std::cout << "Hello world!" << std::endl;
    }();

    // Lambda function that takes parameters
    auto func1 = [](double a, double b)
    {
        std::cout << "a+b : " << (a + b) << std::endl;
    };
    func1(10.2, 2.3);

    return 0;
}