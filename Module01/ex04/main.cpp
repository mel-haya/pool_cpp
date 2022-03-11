#include <iostream>
#include <fstream>

std::string ft_replace(std::string line, std::string str1, std::string str2)
{
    int i = 0;
    std::string before;
    std::string after;
    while ((i = line.find(str1)) != -1)
    {
        before = line.substr(0,i);
        after = line.substr(i + str1.length(), line.length());
        line = before + str2 + after;
    }
    return (line);
}

int main(int c, char **v)
{
    std::string s;

    if (c != 4 || !v[2][0] || !v[3][0])
    {
        std::cout << "invalid args" << std::endl;
        return(1);
    }
    s = v[1];
    std::ifstream filein(s);
    if (!filein)
    {
        std::cout << "invalid file" << std::endl;
        return(1);
    }
    std::ofstream fileout(s + ".replace");
    for (std::string line; std::getline(filein, line); ) 
    {
        fileout << ft_replace(line, v[2], v[3]) <<std::endl;
    }
}