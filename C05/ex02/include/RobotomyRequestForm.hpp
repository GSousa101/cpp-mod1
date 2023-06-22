#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <fstream>
# include <cstdlib>
# include "AForm.hpp"

class       RobotomyRequestForm : public AForm
{
    public:
                RobotomyRequestForm( void );
                RobotomyRequestForm( std::string const& target);
                RobotomyRequestForm( RobotomyRequestForm const& other );
        virtual ~RobotomyRequestForm( void );
        RobotomyRequestForm&  operator=( RobotomyRequestForm const& other );

        // Methods
        virtual void    action( Bureaucrat const& executor ) const;

    private:
        std::string     target;
};

#endif