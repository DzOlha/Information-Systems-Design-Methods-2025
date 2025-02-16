//
// Created by dzuha on 16/02/2025.
//

#ifndef GENERATOR_H
#define GENERATOR_H

#include <vector>

#include "algo/IAlgo.h"

template <typename T>

class IGenerator
{
protected:
    IAlgo<T>* algo;
public:
    virtual ~IGenerator() = default;
    explicit IGenerator(IAlgo<T>* algo): algo(algo) {}

    virtual std::vector<T> generate()
    {
        return this->algo->apply();
    };
};

#endif //GENERATOR_H
