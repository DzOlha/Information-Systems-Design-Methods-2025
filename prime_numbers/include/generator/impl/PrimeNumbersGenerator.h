//
// Created by dzuha on 16/02/2025.
//

#ifndef PRIMENUMBERSGENERATOR_H
#define PRIMENUMBERSGENERATOR_H

#include <generator/IGenerator.h>

class PrimeNumbersGenerator : public IGenerator<int>
{
public:
    explicit PrimeNumbersGenerator(IAlgo<int>* algo): IGenerator<int>(algo) {}
    std::vector<int> generate() override;
};

#endif //PRIMENUMBERSGENERATOR_H
