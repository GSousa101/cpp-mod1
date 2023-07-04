#includle "Array.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
template <typename T>
Array<T>::Array( void ) : _lenght(0), _elements(NULL)
{ }


template <typename T>
Array<T>::Array( size_t n) : _lenght(n), _elements(new T[n])
{ }

template <typename T>
Array<T>::Array(const Array<T>& other) : 
    _lenght( other.size() ),
    _elements(NULL) {
    if (other.size() > 0)
    {
        this->_elements = new T[other.size()]();
        for ( size_t i = 0; i < other.size(); i++)
            this->_elements[i] = other._elements[i];
    }
}

template <typename T>
Array<T>::~Array()
{
    if (this->_lenght > 0)
        delete[] this->_elements;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

template <typename T>
Array<T>&       Array<T>::operator=( Array<T> const& other ) {
    
    if ( this->size() > 0 )
        delete[] this->_elements;

    this->_elements = NULL;

    if (other->size() > 0 )
    {
        this->_elements = new T[other.size()]();
        for (size_t i = 0; i < other.size(); i++)
            this->_elements[i] = other._elements[i];
        this->_lenght = other.size();
    }
    return *this);
}

template <typename T>
T&          Array<T>::operator[]( size_t index) {
    if (index >= this->size())
        throw Array::OutOfRangeException();
    return this->_elements[index]
}

/*
** --------------------------------- METHODS ----------------------------------
*/

template <typename T>
size_t      Array<t>::size() const {
    return this->_lenght;
}

template <typename T>
const char*     Array<T>::OutOfRangeException::what() const throw()
{
    return "error: the index is out of range";
}

