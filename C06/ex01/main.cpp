#include "include/Serializer.hpp"

int main( void )
{
    Data    *my_data = new Data;
    uintptr_t  my_size_pointer;

    my_data->serialNumber = 789456123;

    my_data = Serializer::serialize(my_size_pointer);
    if ( Serializer::deserialize(my_data) == my_data)
        std::cout << "It was serialized and deseliazed with success" << std::endl;
    else
        std::cout << "Some information was missed" << std::endl;
    

    return (0);
}
