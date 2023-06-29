#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP


typedef struct s_Data {
    int     serialNumber;
}       Data;

class Serializer
{
    public:
        uintptr_t       serialize(Data* ptr);
        Data*           deserialize(uintptr_t raw);

	private:
		Serializer( void );
		Serializer( Scalar const & src );
		~Serializer( void );
		Serializer &operator=( Scalar const & other );

};

#endif
