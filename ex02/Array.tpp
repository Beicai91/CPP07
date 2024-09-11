//constructors and destructor
template <typename T>
Array<T>::Array(): _arr(new T[0]), _size(0)
{}

template <typename T> 
Array<T>::Array(unsigned int n): _arr(new T[n]), _size(n)
{}

template <typename T> 
Array<T>::Array(const Array &other)
{
    //deep copy!
    this->_size = other._size;
    this->_arr = new T[other._size];
    for (unsigned int i = 0; i < other._size; ++i)
        this->_arr[i] = other._arr[i];
}

template <typename T>
Array<T>::~Array()
{
    delete[] this->_arr;
}

//operators
template <typename T>
Array<T>   &Array<T>::operator=(const Array &other)
{
    if (this == &other)
        return (*this);
    delete[] this->_arr;
    this->_size = other._size;
    this->_arr = new T[other._size];
    for (unsigned int i = 0; i < other._size; ++i)
        this->_arr[i] = other._arr[i];
    return (*this);
}

template <typename T>
T   &Array<T>::operator[](unsigned int idx)
{
    if (idx >= this->_size)
        throw OutOfRangeException();
    return (this->_arr[idx]);
}

//other public member funcs
template <typename T>
unsigned int    Array<T>::size() const
{
    return (this->_size);
}

template <typename T>
const T   *Array<T>::getArr() const
{
    return (this->_arr);
}

//other funcs
template <typename T>
void    Array<T>::printArr() const
{
    for (unsigned int i = 0; i < this->_size; ++i)
        std::cout << this->_arr[i] << std::endl;
}


