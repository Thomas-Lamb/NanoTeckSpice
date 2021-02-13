/*
** EPITECH PROJECT, 2021
** NanoTekSpice
** File description:
** Parsing
*/

#ifndef PARSING_HPP_
#define PARSING_HPP_

#include <iostream>
#include <string.h>
#include <fstream>

std::string find_character(std::string str);
int catch_link(std::string str);
int start_parsing(std::string filename);
void create_link(std::string str);
void create_input(std::string input);
void create_output(std::string output);
void create_4001(std::string my4001);
void create_4011(std::string my4011);
void create_4030(std::string my4030);
void create_4071(std::string my4071);
void create_4081(std::string my4081);
void create_4069(std::string my4069);
void create_4008(std::string my4008);
void create_4013(std::string my4013);
void create_4017(std::string my4017);
void create_4040(std::string my4040);
void create_4094(std::string my4094);
void create_4512(std::string my4512);
void create_4514(std::string my4514);
void create_4801(std::string my4801);
void create_2716(std::string my2716);

class Parsing {
public:
    Parsing();
    ~Parsing();

protected:
private:
};

#endif /* !PARSING_HPP_ */
