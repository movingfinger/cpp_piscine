#ifndef PEON_H
#define PEON_H

#include <ostream>
#include <string>
#include "Sorcerer.hpp"
#include "Victim.hpp"

class Peon : public Victim
{
	public:
		Peon(void);
		Peon(std::string name);
		~Peon(void);

		void 	getPolymorphed(void) const;

		std::string		getName(void) const;
};

std::ostream	&operator<<(std::ostream &o, Peon const &r);

#endif
