#include "iter.hpp"
#include <iostream>
//#include "Awesome.hpp"

int main(void)
{
    int array[] = {0, 1, 2, 3, 4};
    //Awesome array2[5];
    iter(array, 5, printEle);
    //iter(array2, 5, printEle);

    return (0);
}