#include <iostream>
#include <cctype>
  
int main(int argc, char** argv)
{
    std::string str;
    if(argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    for (int i = 1; i < argc; ++i)
    {
        str = argv[i];
        std::transform(str.begin(), str.end(),str.begin(), ::toupper);
        std::cout << str;
    }
    std::cout << std::endl;
  
    return 0;
}