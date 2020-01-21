#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = grade;
	return ;
}

Bureaucrat::~Bureaucrat()
{
	return;
}

std::string		Bureaucrat::getName() const
{
	return (this->_name);
}

int				Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void			Bureaucrat::upGrade(int const grade)
{
	if (this->_grade < 0)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = this->_grade + 1;
	return ;
}

void			Bureaucrat::downGrade(int const grade)
{
	if ((this->_grade - grade) < 0)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = this->_grade - 1;
	return ;
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &r)
{
	o << "[" << r.getName() << "], bureaucrat grade [" << r.getGrade() << "]" << std::endl;
	return (o);
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
	return ;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
	return ;
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error: Grade too low (less than 1)");
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
	return ;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
	return ;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Error: Grade too high (Higher than 150");
}