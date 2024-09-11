#include "whatever.hpp"
#include <iostream>
#include <string>
//#include "Awesome.hpp"
/*Avoid Name Clashes: In C++, there might be other functions named swap, min, or max defined in various namespaces or in the standard library (std::). By using ::swap, ::min, and ::max, you're explicitly telling the compiler to use the versions of these functions that are defined in the global namespace (i.e., the ones you defined or expect to be available globally), not any other versions that might exist in other scopes.*/

int main(void)
{
    int a = 2;
    int b = 3;

    ::swap(a, b);
    std::cout << "a = " << a << " , b = " << b << std::endl;
    std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
    std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";

    ::swap(c, d);
    std::cout << "c = " << c << " , d = " << d << std::endl;
    std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
    std::cout << "max(c, d) = " << ::max(c, d) << std::endl;

    /*
    Awesome a1(5);
    Awesome a2(10);
    ::swap(a1, a2);
    std::cout << "a1 = " << a1 << " ,a2 = " << a2 << std::endl;
    std::cout << "max(a1, a2) = " << ::max(a1, a2) << std::endl;
    */

    return (0);
}