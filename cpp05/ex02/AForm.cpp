#include "AForm.hpp"
#include "Bureaucrat.hpp"

void    AForm::beSigned( const Bureaucrat &b ) {
    if (b.getGrade() > _gradeToSign)
        throw AForm::GradeTooLowException();
    _isSigned = true;
}

void    AForm::execute( Bureaucrat const & executor ) const {
    if (executor.getGrade() > _gradeToExecute)
        throw AForm::GradeTooLowException();
    else if (!_isSigned)
        throw AForm::IsNotSignedException();
    executeAction();
}

const std::string   &AForm::getName( void ) const{
    return (_name);
}

bool    AForm::getIsSigned( void ) const {
    return (_isSigned);
}

int AForm::getGradeToSign( void ) const {
    return (_gradeToSign);
}
int AForm::getGradeToExecute( void ) const {
    return (_gradeToExecute);
}

const char* AForm::GradeTooHighException::what() const throw() {
    return "Form grade is too high!";
}

const char* AForm::GradeTooLowException::what() const throw() {
    return "Form grade is too low!";
}

const char* AForm::IsNotSignedException::what() const throw() {
    return "Form is not signed!";
}

std::ostream &operator<<(std::ostream &os, const AForm &f)
{
    os << "AForm \"" << f.getName() << "\", signed: "
       << (f.getIsSigned() ? "yes" : "no")
       << ", grade required to sign: " << f.getGradeToSign()
       << ", grade required to execute: " << f.getGradeToExecute();
    return os;
}

// ORTHODOX
AForm::AForm( void ) : _name("Unnamed"), _isSigned(false), _gradeToSign(0), _gradeToExecute(0) {}

AForm::AForm( const std::string &name, int gradeToSign, int gradeToExecute )
    : _name(name),  _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw AForm::GradeTooHighException();
    else if (gradeToExecute > 150 || gradeToSign > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm( const AForm &other ) : _name(other._name), _isSigned(other._isSigned),
                             _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {}
    
AForm &AForm::operator=(const AForm &other)
{
    if (this != &other)
        this->_isSigned = other._isSigned;
    return *this;
}

AForm::~AForm( void ) {}