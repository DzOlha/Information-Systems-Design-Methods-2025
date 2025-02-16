#include "generator/impl/PrimeNumbersGenerator.h"
//
// Created by dzuha on 16/02/2025.
//
std::vector<int> PrimeNumbersGenerator::generate()
{
    return this->algo->apply();
}