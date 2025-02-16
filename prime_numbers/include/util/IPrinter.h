//
// Created by dzuha on 16/02/2025.
//

#ifndef IPRINTER_H
#define IPRINTER_H
#include <vector>
#include <string>

template <typename T>
class IPrinter {
public:
    virtual ~IPrinter() = default;
    virtual void print(std::vector<T>& arr, std::string& title) = 0;
};

#endif //IPRINTER_H
