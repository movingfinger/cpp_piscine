//#include "Bureaucrat.hpp"
//
//int     main()
//{
//	int x = 0;
//	int i = 0;
//
//	Bureaucrat test("Tom", 1);
//	while (i++ < 10)
//	{
//		std::cout <<"grade is " << test.getGrade() << std::endl;
//		try
//		{
//			if (i % 2 == 0)
//				x = 0;
//			else
//				x = 151;
//			Bureaucrat test2("Error Testing", x);
//		}
//		catch (Bureaucrat::GradeTooHighException &error)
//		{
//			std::cout << error.what() << std::endl;
//		}
//		catch (Bureaucrat::GradeTooLowException &error)
//		{
//			std::cout << error.what() << std::endl;
//		}
//		catch (const std::exception & error)
//		{
//			std::cout << error.what() << std::endl;
//		}
//	}
//
//	return (0);
//}
