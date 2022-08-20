#include <iostream>

int main()
{

    // Braced initializers
    // Variable may contain some random garbage value. WARNING
    int elephant_count;

    int lion_count{};  // Initializes to zero
    int dog_count{10}; // Initializes to 10
    int cat_count{15};

    int domesticated_animals{dog_count + cat_count};

    double narrowing_conversion{2.9};

    // Functional initialization
    int apple_count(5);
    int orange_count(10);
    int fruit_count(apple_count + orange_count);

    // Assignment notation
    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;

    // Check the size with sizeof
    std::cout << "sizeof int : " << sizeof(int) << std::endl;
    std::cout << "sizeof truck_count : " << sizeof(truck_count) << std::endl;

        return 0;
}