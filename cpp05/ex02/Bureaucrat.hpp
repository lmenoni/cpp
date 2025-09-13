#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>
# include <string>
# include "AForm.hpp"

class Bureaucrat
{
    private:
        const std::string   _name;
        int                 _grade;

    public:
        // Canonical form
        Bureaucrat();
        Bureaucrat(const std::string &name, int grade);
        Bureaucrat(const Bureaucrat &other);
        Bureaucrat &operator=(const Bureaucrat &other);
        ~Bureaucrat();

        // Getters
        const std::string &getName() const;
        int getGrade() const;

        // Methods
        void incrementGrade(); // raise (go closer to 1)
        void decrementGrade(); // lower (go closer to 150)
        void signForm( AForm &f);
        void executeForm(AForm const & form);

        // Exceptions
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

// Overload of operator<<
std::ostream &operator<<(std::ostream &os, const Bureaucrat &b);

#endif
