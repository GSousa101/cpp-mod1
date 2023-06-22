#ifndef SHRUBEERYCREATIONFORM_HPP
# define SHRUBEERYCREATIONFORM_HPP

# include <fstream>
# include "AForm.hpp"

class       ShrubeeryCreationForm : public AForm
{
    public:
                ShrubeeryCreationForm( void );
                ShrubeeryCreationForm( std::string const& target);
                ShrubeeryCreationForm( ShrubeeryCreationForm const& other );
        virtual ~ShrubeeryCreationForm( void );
        ShrubeeryCreationForm&  operator=( ShrubeeryCreationForm const& other );

        // Methods
        virtual void    action( Bureaucrat const& executor ) const;

    private:
        std::string     target;
};

#endif