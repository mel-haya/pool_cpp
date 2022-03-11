#include "Form.hpp"
int main()
{

    try
    {
        Form f = Form("Peace treaty",3,1);
        Bureaucrat p = Bureaucrat("vlad", 1);
        f.beSigned(p);
        std::cout << f << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        return 1;
    }
    
    try
    {
        Bureaucrat l = Bureaucrat ("sergei Lavrov", 6);
        Form w = Form("Declaration of war",3,1);
        w.beSigned(l);
    }
    catch (std::exception &e) 
    {
		std::cerr << e.what() << std::endl;
        return 1;
	}
    
    // try
    // {
    //     Form f = Form("Peace treaty",3,1);
    //     Bureaucrat p = Bureaucrat("vlad", 1);
    //     p.signForm(f);
    //     p.signForm(f);
    //     std::cout << f << std::endl;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << std::endl;
            // return 1;
    // }
    
    // try
    // {
    //     Bureaucrat l = Bureaucrat ("sergei Lavrov", 6);
    //     Form w = Form("Declaration of war",3,1);
    //     l.signForm(w);
    // }
    // catch (std::exception &e) 
    // {
	// 	std::cerr << e.what() << std::endl;
        // return 1;
	// }
    
    return 0;
}