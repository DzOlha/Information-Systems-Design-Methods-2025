//
// Created by dzuha on 16/02/2025.
//
#include "algo/impl/EratosthenesAlgo.h"

std::vector<int> EratosthenesAlgo::apply()
{
    // initialize vector [0, n] with true as indicators that all numbers are prime
    std::vector<bool> prime(this->n + 1, true);

    for(int p = 2; p*p <= this->n; p++)
    {
        if(prime[p] == true)
        {
            for(int i = p*p; i <= this->n; i += p) prime[i] = false;
        }
    }

    std::vector<int> result = {};
    for(int i = 2; i <= this->n; i++)
    {
        if(prime[i]) result.push_back(i);
    }

    return result;
}