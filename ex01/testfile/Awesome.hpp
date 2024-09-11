#ifndef AWESOME_HPP
# define AWESOME_HPP

#include <iostream>

class Awesome
{
    private:
        int _n;

    public:
        Awesome(void): _n(42) { return; };
        int get(void) const { return this->_n; };
};

inline  std::ostream    &operator<<(std::ostream &os, const Awesome &target)
{
    os << target.get();
    return (os);
};

#endif