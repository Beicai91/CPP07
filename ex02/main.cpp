#include "Array.hpp"
#include <iostream>

int main(void)
{
    Array<int>  arrInt1;
    Array<int>  arrInt2(3);
    Array<int>  arrInt3(arrInt1);
    Array<int>  arrInt4 = arrInt2;

    arrInt1.printArr();
    std::cout << std::endl;
    arrInt2.printArr();
    std::cout << std::endl;
    arrInt3.printArr();
    std::cout << std::endl;
    arrInt4.printArr();

    //prove deep copy
    std::cout << "//prove deep copy" << std::endl;
    std::cout << "arrInt4 address " << arrInt4.getArr() << std::endl;
    std::cout << "arrInt2 address " << arrInt2.getArr() << std::endl;

    //try with string
    std::cout << "//try with string" << std::endl;
    Array<std::string>  arrStr(2);
    arrStr.printArr();
    std::cout << "\nTry [] operator" << std::endl;
    try
    {
        std::cout << arrStr[0] << std::endl;
        std::cout << arrStr[2] << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
    return (0);
}