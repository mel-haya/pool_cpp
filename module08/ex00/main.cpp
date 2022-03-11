#include "easyfind.hpp"
#include<list>
#include<vector>
#include<map>

int main()
{
    //std::vector<int> ar;
    std::list<int> ar;

    ar.push_back(8);
    ar.push_back(5);
    ar.push_back(13);
    ar.push_back(12);
    ar.push_back(-85);
    ar.push_back(14);
    ar.push_back(544);
    try
    {
        easyfind(ar,5);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }  
    try
    {
        easyfind(ar,999999);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}