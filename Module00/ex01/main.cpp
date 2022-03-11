#include "phonebook.hpp"

void print_header(void)
{
	std::cout << "‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾|" << std::endl;
	std::cout << " ██████╗ ██╗  ██╗ ██████╗ ███╗   ██╗███████╗██████╗  ██████╗  ██████╗ ██╗  ██╗ |" << std::endl;
	std::cout << " ██╔══██╗██║  ██║██╔═══██╗████╗  ██║██╔════╝██╔══██╗██╔═══██╗██╔═══██╗██║ ██╔╝ |" << std::endl;
	std::cout << " ██████╔╝███████║██║   ██║██╔██╗ ██║█████╗  ██████╔╝██║   ██║██║   ██║█████╔╝  |" << std::endl;
	std::cout << " ██╔═══╝ ██╔══██║██║   ██║██║╚██╗██║██╔══╝  ██╔══██╗██║   ██║██║   ██║██╔═██╗  |" << std::endl;
	std::cout << " ██║     ██║  ██║╚██████╔╝██║ ╚████║███████╗██████╔╝╚██████╔╝╚██████╔╝██║  ██╗ |" << std::endl;
	std::cout << " ╚═╝     ╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚══════╝╚═════╝  ╚═════╝  ╚═════╝ ╚═╝  ╚═╝ |" << std::endl;
	std::cout << "_______________________________________________________________________________|" << std::endl;
}

int main(void)
{
	Phonebook c;
	std::string line;
	
	print_header();
	while(1)
	{
		std::cout << ">";
		getline(std::cin, line);
		if (line == "EXIT" || std::cin.eof())
		{
			std::cout << "exit" << std::endl;
			return(0);
		}
		else if (line == "SEARCH")
			c.printContacts();
		else if (line == "ADD")
			c.addContact();
	}	
}