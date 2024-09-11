#ifndef AWESOME_HPP
# define AWESOME_HPP

#include <iostream>

class Awesome
{
    private:
        int _n;
    
    public:
        Awesome(void): _n(0){};
        Awesome(int n): _n(n){};
        Awesome &operator=(const Awesome &other){ _n = other._n; return *this; };
        bool    operator==(const Awesome &other) const { return (this->_n == other._n); };
        bool    operator!=(const Awesome &other) const { return (this->_n != other._n); };
        bool    operator<(const Awesome &other) const { return (this->_n < other._n); };
        bool    operator>(const Awesome &other) const { return (this->_n > other._n); };
        bool    operator<=(const Awesome &other) const { return (this->_n <= other._n); };
        bool    operator>=(const Awesome &other) const { return (this->_n >= other._n); };
        int     get_n(void) const { return this->_n; };
};
inline std::ostream    &operator<<(std::ostream &os, const Awesome &target){ os << target.get_n(); return os; };

#endif