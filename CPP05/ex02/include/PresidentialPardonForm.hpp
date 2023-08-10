#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <fstream>
# include "AForm.hpp"

class       PresidentialPardonForm : public AForm
{
    public:
                PresidentialPardonForm( void );
                PresidentialPardonForm( std::string const& target);
                PresidentialPardonForm( PresidentialPardonForm const& other );
        virtual ~PresidentialPardonForm( void );
        PresidentialPardonForm&  operator=( PresidentialPardonForm const& other );

        // Methods
        virtual void    action( Bureaucrat const& executor ) const;

    private:
        std::string     target;
};

#endif