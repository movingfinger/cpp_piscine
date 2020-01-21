#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <string>

/**
Today, we’re going to create an artiﬁcial nightmare of oﬃces, corridors,
 forms, and waiting in line. Sounds fun ? No ? Too bad.
First,westartbythesmallestcoginthevastbureaucraticmachine: theBureaucrat.
 It must have a constant name, and a grade, that ranges
 from 1 (highest possible) to 150 (lowest possible). Any attempt to create
 a Bureaucrat with an invalid grade must throw an exception,
 which will be either a Bureaucrat::GradeTooHighException or
 a Bureaucrat::GradeTooLowException. You will provide getters
 for both these attributes (getName and getGrade), and two functions
 to increment or decrement the grade. Both these functions
 will throw the same exceptions as before if the grade gets too high or too low.
 Remember, grade 1 is highest, 150 is lowest, so incrementing a grade 3 gives you a grade 2 ...
The exceptions you throw must be catchable by a block like :
**/
class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		virtual			~Bureaucrat();

		std::string		getName() const;
		int				getGrade() const;
		void			upGrade(int const grade);
		void			downGrade(int const grade);

	class	GradeTooHighException : public std::exception
	{
		public:
			GradeTooHighException(void);
			virtual	~GradeTooHighException() throw();
			virtual const char* what() const throw();
	};

	class	GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException(void);
		virtual	~GradeTooLowException() throw();
		virtual const char* what() const throw();
	};

	private:
		std::string const	_name;
		int					_grade;
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &r);

#endif