#ifndef AWEAPON_H
#define AWEAPON_H

#include <iostream>
#include <string>

class AWeapon
{
	public:
		AWeapon(std::string const & name, int apcost, int damage);
		~AWeapon(void);

		std::string		getName() const;
		int 			getAPCost() const;
		int				getDamage() const;

		void			attack() const = 0;
	
	private:
		std::string		_name;
		int				_nodp;
		int				_ap;
};

#endif

