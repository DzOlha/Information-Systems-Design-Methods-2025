//
// Created by dzuha on 16/02/2025.
//

#ifndef CUSTOMALGO_H
#define CUSTOMALGO_H
#include "algo/IAlgo.h"

class CustomAlgo: public IAlgo<int>
{
    public:
        explicit CustomAlgo(int n): IAlgo<int>(n) {}

        std::vector<int> apply() override;
private:
    bool dividableByK(int num, int k);
};

#endif //CUSTOMALGO_H
