/*
** EPITECH PROJECT, 2021
** NanoTekSpice
** File description:
** NanoTekSpice
*/

#include <iostream>
#include <string>
#include "../parsing/Parsing.hpp"
#include "../shell/Shell.hpp"

int main(int argc, char **argv)
{
    if (int error = start_parsing(argv[1]) != 0) return 84;
    Shell shell;
    return shell.shellStart();
}