//
// Created by dzuha on 16/02/2025.
//

#ifndef CONSOLEPRINTER_H
#define CONSOLEPRINTER_H
#include "util/IPrinter.h"
#include <iostream>

template <typename T>
class ConsolePrinter: public IPrinter<T>
{
public:
    void print(std::vector<T>& arr, std::string& title) override
    {
        size_t size = arr.size();

        std::cout << title << ": { ";

        for (size_t i = 0; i < size; i++)
        {
            std::cout << arr[i];
            if (i < size - 1)
                std::cout << ", ";
        }

        std::cout << " } \n";
    }
};

#endif //CONSOLEPRINTER_H
