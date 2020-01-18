#include <string>

class Cat
{
	private:
		int		_numberOflegs;

	public:
		Cat();
		Cat(Cat const &);
		Cat& operator=(Cat const &);
		~Cat();

		void	run(int distance);
		void	scornSomeone(std::string const & target);

};

class Pony
{
	private:
		int		_numberOflegs;

	public:
		Pony();
		Pony(Pony const &);
		Pony& operator=(Pony const &);
		~Cat();

		void	run(int distance);
		void	doMagic(std::string const & target);

};
