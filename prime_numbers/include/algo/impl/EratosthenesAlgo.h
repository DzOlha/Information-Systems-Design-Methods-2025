//
// Created by dzuha on 16/02/2025.
//

#ifndef ERATOSTHENESALGO_H
#define ERATOSTHENESALGO_H

#include "algo/IAlgo.h"

class EratosthenesAlgo: public IAlgo<int>
{
public:
    explicit EratosthenesAlgo(int n): IAlgo<int>(n) {}
    std::vector<int> apply() override;
};

#endif //ERATOSTHENESALGO_H
