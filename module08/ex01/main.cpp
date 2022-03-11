#include "span.hpp"

// int main()
// {
//     // Span sp = Span(5);
//     // int i[] = {5, 6 ,8 ,9};
//     // sp.addNumber(6);
//     // sp.addNumber(3);
//     // sp.addNumber(17);
//     // sp.addNumber(9);
//     // sp.addNumber(11);
//     // std::cout << sp.shortestSpan() << std::endl;
//     // std::cout << sp.longestSpan() << std::endl;

//     int i[] = {2, 5 ,8 ,19, 66, 91, 15};
//     std::vector<int> v(i, i+7) ;
//     Span sp1 = Span(7);
//     sp1.addNumbers(v);

//     std::cout << sp1.shortestSpan() << std::endl;
//     std::cout << sp1.longestSpan() << std::endl;


//     return 0;
// }

int	main( int, char ** )
{
	try {
		Span sp = Span(10000);
		std::vector < int > vec(10000);
		srand((unsigned)time(NULL));
		for (std::vector< int >::iterator it = vec.begin(); it != vec.end(); ++it) {
			sp.addNumber(*it + (rand() % INT_MAX / 4));
		}
 		//sp.addNumber( 10 ); 
		std::cout << "------------------------" << std::endl;
		std::cout << "shortestSpan -> " << sp.shortestSpan() << std::endl;
		std::cout << "longestSpan  -> " <<  sp.longestSpan() << std::endl;
		std::cout << "------------------------" << std::endl;
	} catch (const std::exception& e) { std::cerr << e.what() << std::endl; }

	return (EXIT_SUCCESS);
}