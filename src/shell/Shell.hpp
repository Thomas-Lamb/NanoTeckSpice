/*
** EPITECH PROJECT, 2021
** NanoTeckSpice
** File description:
** Shell
*/

#ifndef SHELL_HPP_
#define SHELL_HPP_

#include <iostream>

class Shell {
    public:
        Shell();
        ~Shell();
        void printStartLine();
        void getNewLine();
        int executeLastLine();
        void executeLine(std::string commande);
        int shellStart();
        int simulate();
        int display();
        void help();

    protected:
    private:
        std::string _lastLine;
        std::string _strartLine;
};

#endif /* !SHELL_HPP_ */
