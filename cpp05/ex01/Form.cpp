#include "Form.hpp"
#include "Bureaucrat.hpp"

void    Form::beSigned( const Bureaucrat &b ) {
    if (b.getGrade() > _gradeToSign)
        throw Form::GradeTooLowException();
    _isSigned = true;
}

const std::string   &Form::getName( void ) const{
    return (_name);
}

bool    Form::getIsSigned( void ) const {
    return (_isSigned);
}

int Form::getGradeToSign( void ) const {
    return (_gradeToSign);
}
int Form::getGradeToExecute( void ) const {
    return (_gradeToExecute);
}

const char* Form::GradeTooHighException::what() const throw() {
    return "Form grade is too high!";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Form grade is too low!";
}

std::ostream &operator<<(std::ostream &os, const Form &f)
{
    os << "Form \"" << f.getName() << "\", signed: "
       << (f.getIsSigned() ? "yes" : "no")
       << ", grade required to sign: " << f.getGradeToSign()
       << ", grade required to execute: " << f.getGradeToExecute();
    return os;
}

// ORTHODOX
Form::Form( void ) : _name("Unnamed"), _isSigned(false), _gradeToSign(0), _gradeToExecute(0) {}

Form::Form( const std::string &name, int gradeToSign, int gradeToExecute )
    : _name(name),  _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooHighException();
    else if (gradeToExecute > 150 || gradeToSign > 150)
        throw Form::GradeTooLowException();
}

Form::Form( const Form &other ) : _name(other._name), _isSigned(other._isSigned),
                             _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {}
    
Form &Form::operator=(const Form &other)
{
    if (this != &other)
        this->_isSigned = other._isSigned;
    return *this;
}

Form::~Form( void ) {}