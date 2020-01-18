#ifndef SORCERER_H
#define SORCERER_H

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer
{
	public:
		Sorcerer(void);
		Sorcerer(std::string name, std::string title);
		~Sorcerer(void);

		std::string	getName(void) const;
		std::string	getTitle(void) const;

		void 		polymorph(Victim const &) const;
		
	private:
		std::string	_name;
		std::string	_title;
};

std::ostream &operator<<(std::ostream &o, Sorcerer const &r);

#endif
