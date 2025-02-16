//
// Created by dzuha on 16/02/2025.
//

#ifndef SAVER_H
#define SAVER_H

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

class Saver {
public:
    static void saveToFile(const std::vector<int>& primes, const std::string& filename);
};

#endif // SAVER_H

