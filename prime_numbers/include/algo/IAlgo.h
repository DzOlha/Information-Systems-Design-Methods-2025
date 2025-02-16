//
// Created by dzuha on 16/02/2025.
//

#ifndef IALGO_H
#define IALGO_H
#include <vector>

template <typename T>
class IAlgo
{
protected:
    int n;
public:
    explicit IAlgo(int n): n(n) {};
    virtual std::vector<T> apply() = 0;
};

#endif //IALGO_H
