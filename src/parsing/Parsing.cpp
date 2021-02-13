/*
** EPITECH PROJECT, 2021
** NanoTekSpice
** File description:
** Parsing
*/

#include "Parsing.hpp"

Parsing::Parsing()
{
}

std::string find_character(std::string str)
{
    str = str.erase(0, str.find(" "));
    while (str.find(" ") == 0)
        str = str.erase(0, 1);
    if (str.find(" ", str.find(" " + 1)) != -1)
        return str.substr(0, str.find(" "));
    else
        return str;
}

int catch_link(std::string str)
{
    if (str.find(" ") != -1) {
        std::string str1 = str.substr(0, str.find(" "));
        std::string str2 = str.erase(0, str.find(" ") + 1);
        while (str1.find(" ") == 0) str1.erase(0, 1);
        while (str2.find(" ") == 0) str2.erase(0, 1);
        if (str1.find(":") == -1 || str2.find(":") == -1)
          return 84;
        if (str1.substr(0, str1.find(":")) != "" && str1.substr(str1.find(":") + 1, str1.length() - str1.find(":") - 1) != "" &&
        str2.substr(0, str2.find(":")) != "" && str2.substr(str2.find(":") + 1, str2.length() - str2.find(":") - 1) != "") {
            return 0;
        }
    }
    return 84;
}

int start_parsing(std::string filename)
{
    int chipset_links = -1;
    std::string my_line;
    std::ifstream file(filename);

    if (file.is_open())
        while (getline(file, my_line)) {
            if (my_line.length() == 0 || my_line.find("#") == 0);
            else if (my_line.find(".chipsets :") == 0)
                chipset_links = 0;
            else if (my_line.find(".links :") == 0)
                chipset_links = 1;
            else if (my_line.find("input ") == 0 && chipset_links == 0)
                create_input(find_character(my_line));
            else if (my_line.find("output ") == 0 && chipset_links == 0)
                create_output(find_character(my_line));
            else if (my_line.find("4001 ") == 0 && chipset_links == 0)
                create_4001(find_character(my_line));
            else if (my_line.find("4011 ") == 0 && chipset_links == 0)
                create_4011(find_character(my_line));
            else if (my_line.find("4030 ") == 0 && chipset_links == 0)
                create_4030(find_character(my_line));
            else if (my_line.find("4071 ") == 0 && chipset_links == 0)
                create_4071(find_character(my_line));
            else if (my_line.find("4081 ") == 0 && chipset_links == 0)
                create_4081(find_character(my_line));
            else if (my_line.find("4069 ") == 0 && chipset_links == 0)
                create_4069(find_character(my_line));
            else if (my_line.find("4008 ") == 0 && chipset_links == 0)
                create_4008(find_character(my_line));
            else if (my_line.find("4013 ") == 0 && chipset_links == 0)
                create_4013(find_character(my_line));
            else if (my_line.find("4017 ") == 0 && chipset_links == 0)
                create_4017(find_character(my_line));
            else if (my_line.find("4040 ") == 0 && chipset_links == 0)
                create_4040(find_character(my_line));
            else if (my_line.find("4094 ") == 0 && chipset_links == 0)
                create_4094(find_character(my_line));
            else if (my_line.find("4512 ") == 0 && chipset_links == 0)
                create_4512(find_character(my_line));
            else if (my_line.find("4514 ") == 0 && chipset_links == 0)
                create_4514(find_character(my_line));
            else if (my_line.find("4801 ") == 0 && chipset_links == 0)
                create_4801(find_character(my_line));
            else if (my_line.find("2716 ") == 0 && chipset_links == 0)
                create_2716(find_character(my_line));
            else if (catch_link(my_line) == 0 && chipset_links == 1)
                create_link(my_line);
            else
                return 84;
        }
    return 0;
}

void create_link(std::string str)
{
    std::string str1 = str.substr(0, str.find(" "));
    std::string str2 = str.erase(0, str.find(" ") + 1);
}

void create_input(std::string input)
{
    std::cout << "You created : " << input << std::endl;
}

void create_output(std::string output)
{
    std::cout << "You created : " << output << std::endl;
}

void create_4001(std::string my4001)
{
    std::cout << "You created : " << my4001 << std::endl;
}

void create_4011(std::string my4011)
{
    std::cout << "You created : " << my4011 << std::endl;
}

void create_4030(std::string my4030)
{
    std::cout << "You created : " << my4030 << std::endl;
}

void create_4071(std::string my4071)
{
    std::cout << "You created : " << my4071 << std::endl;
}

void create_4081(std::string my4081)
{
    std::cout << "You created : " << my4081 << std::endl;
}

void create_4069(std::string my4069)
{
    std::cout << "You created : " << my4069 << std::endl;
}

void create_4008(std::string my4008)
{
    std::cout << "You created : " << my4008 << std::endl;
}

void create_4013(std::string my4013)
{
    std::cout << "You created : " << my4013 << std::endl;
}

void create_4017(std::string my4017)
{
    std::cout << "You created : " << my4017 << std::endl;
}

void create_4040(std::string my4040)
{
    std::cout << "You created : " << my4040 << std::endl;
}

void create_4094(std::string my4094)
{
    std::cout << "You created : " << my4094 << std::endl;
}

void create_4512(std::string my4512)
{
    std::cout << "You created : " << my4512 << std::endl;
}

void create_4514(std::string my4514)
{
    std::cout << "You created : " << my4514 << std::endl;
}

void create_4801(std::string my4801)
{
    std::cout << "You created : " << my4801 << std::endl;
}

void create_2716(std::string my2716)
{
    std::cout << "You created : " << my2716 << std::endl;
}

Parsing::~Parsing()
{
}
