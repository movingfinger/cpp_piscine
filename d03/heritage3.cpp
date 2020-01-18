class Quadruped // Can access name, run() and legs
{
	private:
		std::string		name;		// Only accessible from an Quadruped object

	protected:
		Leg				legs[4];	// Accessible from an Quadruped or derived object

	publice:
		void			run();		// Accessible from wherever
};

Class Dog : public Quadruped // Can access run() and legs
{
};

int	main() // Can only access run()
{
};
