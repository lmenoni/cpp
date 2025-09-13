#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <stdexcept>
# include <string>

class Bureaucrat;

class Form {
private:

    const std::string   _name;
    bool                _isSigned;
    const int           _gradeToSign;
    const int           _gradeToExecute;

public:

    Form( void );
    Form( const std::string &name, int gradeToSign, int gradeToExecute );
    Form( const Form &other );
    Form &operator=( const Form &other );
    ~Form( void );

    const std::string   &getName( void ) const;
    bool                getIsSigned( void ) const;
    int                 getGradeToSign( void ) const;
    int                 getGradeToExecute( void ) const;

    void    beSigned( const Bureaucrat &b );

    // Exceptions
    class GradeTooHighException : public std::exception {
        public:
            virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
        public:
            virtual const char* what() const throw();
    };
};

std::ostream &operator<<(std::ostream &os, const Form &f);

#endif