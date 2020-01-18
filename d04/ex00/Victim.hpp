#ifndef VICTIM_H
#define VICTIM_H

#include <iostream>
#include <string>

class Victim
{
	public:
		Victim(void);
		Victim(std::string name);
		~Victim(void);

		std::string		getName(void) const;
		virtual void	getPolymorphed(void) const;

	protected:
		std::string _name;
};

std::ostream &operator<<(std::ostream &o, Victim const &r);

#endif
