/*
** EPITECH PROJECT, 2021
** NanoTeckSpice
** File description:
** Shell
*/

#include "Shell.hpp"

Shell::Shell() :
    _strartLine("> "),
    _lastLine("")
{
}

Shell::~Shell()
{
}

void Shell::getNewLine()
{
    std::cout << _strartLine;
    std::getline(std::cin, _lastLine);
}

int Shell::executeLastLine()
{
    if (_lastLine == "exit") return -1;
    if (_lastLine == "simulate") {
        simulate();
        return 0;
    }
    if (_lastLine == "display") {
        display();
        return 0;
    }
    if (_lastLine == "help") {
        help();
        return 0;
    }
    std::cout << "Commande not found try tu use \"help\"" << std::endl;
    return 1;
}

void Shell::executeLine(std::string commande)
{
    std::cout << commande << std::endl;
}

int Shell::simulate()
{
    std::cout << "exec Simulate" << std::endl;
    return 0;
}

int Shell::display()
{
    std::cout << "exec Display" << std::endl;
    return 0;
}

void Shell::help()
{
    std::cout << "You can use :" << std::endl
    << "  - simulate : for simulate your cabling" << std::endl
    << "  - display : for display the result of your outputs" << std::endl
    << "  - X:Y : for set the value of your inputs, where \"X\" is the name of your input and \"Y\" is the value (1 or 0)" << std::endl
    << "  - exit : for exit" <<std::endl;
}

int Shell::shellStart()
{
    while (_lastLine != "exit") {
        getNewLine();
        executeLastLine();
    }
    return 0;
}