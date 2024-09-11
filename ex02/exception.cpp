#include "Array.hpp"

/*When you include Array.hpp in your Array.cpp, the compiler will see the declaration of the Array template class but won’t generate any code for it unless that file contains code that uses the template (e.g., Array<int>). So, the inclusion won’t generate template-related code unless Array is instantiated with a concrete type.*/

const char  *OutOfRangeException::what() const throw()
{
    return "Index out of range";
}