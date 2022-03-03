
#include <string>
#include <iostream>
#include <fstream>

std::string    replace_string(std::size_t found, std::size_t s1_size, std::string line, std::string replace)
{
    std::string     help;

    help = line.substr(0, found);
    help += replace;
    help += line.substr(found + replace.size() - 1, line.size());
    return (help);
}

int    main()
{
    std::string help = "hello it s me sboof";
    std::string replace;

    replace = replace_string(11, 2, help, "him");
    std::cout << replace << std::endl;
    return 0;
}