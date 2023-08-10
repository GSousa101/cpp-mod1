#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include "AForm.hpp"

class       ShrubberyCreationForm : public AForm
{
    public:
                ShrubberyCreationForm( void );
                ShrubberyCreationForm( std::string const& target);
                ShrubberyCreationForm( ShrubberyCreationForm const& other );
        virtual ~ShrubberyCreationForm( void );
        ShrubberyCreationForm&  operator=( ShrubberyCreationForm const& other );

        // Methods
        virtual void    action( Bureaucrat const& executor ) const;

    private:
        std::string     target;
};

#endif