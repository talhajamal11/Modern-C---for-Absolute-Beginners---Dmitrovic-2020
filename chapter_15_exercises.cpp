#include <iostream>
#include <string>

int main()
{
    std::cout << "Define an array and change the first and last location's value" << std::endl;
    double arr[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
    arr[0] = 10.0;
    arr[4] = 20.0;
    std::cout << arr[0] << std::endl;
    std::cout << arr[4] << std::endl;

    std::cout << "Define an Object, Pointer to that object, and print the value of the pointed to object by dereferencing the pointer." << std::endl;
    double d = 3.142;
    double* p_d = &d;
    std::cout << *p_d << std::endl;

    std::cout << "Double Object, reference it, change ref value, print object value using object and reference" << std::endl;
    double mydouble = 3.142;
    double& myreference = mydouble;
    myreference = myreference*2;
    std::cout << "Original Object: " << mydouble << std::endl;
    std::cout << "Reference : " << myreference << std::endl;
    mydouble = mydouble/2;
    std::cout << "Original Object: " << mydouble << std::endl;
    std::cout << "Reference : " << myreference << std::endl;
    
    return 0;
}