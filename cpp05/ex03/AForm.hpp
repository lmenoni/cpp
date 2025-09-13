#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <stdexcept>
# include <string>

class Bureaucrat;

class AForm {
private:

    const std::string   _name;
    bool                _isSigned;
    const int           _gradeToSign;
    const int           _gradeToExecute;

public:

    AForm( void );
    AForm( const std::string &name, int gradeToSign, int gradeToExecute );
    AForm( const AForm &other );
    AForm &operator=( const AForm &other );
    virtual ~AForm( void );

    const std::string   &getName( void ) const;
    bool                getIsSigned( void ) const;
    int                 getGradeToSign( void ) const;
    int                 getGradeToExecute( void ) const;

    void    beSigned( const Bureaucrat &b );
    void    execute( Bureaucrat const & executor ) const;
    virtual void executeAction() const = 0;

    // Exceptions
    class GradeTooHighException : public std::exception {
        public:
            virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
        public:
            virtual const char* what() const throw();
    };

    class IsNotSignedException : public std::exception {
        public:
            virtual const char *what() const throw();
    };

};

std::ostream &operator<<(std::ostream &os, const AForm &f);

#endif