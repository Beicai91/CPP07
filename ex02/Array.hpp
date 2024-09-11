#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
    private:
        T   *_arr;
        unsigned int    _size;
    
    public:
        Array();
        Array(unsigned int n);
        Array(const Array &other);
        Array   &operator=(const Array &other);
        T   &operator[](unsigned int idx); 
        ~Array();
        unsigned int    size() const;
        const T   *getArr() const;
        void    printArr() const;
};

class   OutOfRangeException: public std::exception
{
    public:
        const char  *what() const throw();
};


#include "Array.tpp"

#endif