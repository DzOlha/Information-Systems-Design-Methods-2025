//
// Created by dzuha on 16/02/2025.
//
#include <saver/Saver.h>

void Saver::saveToFile(const std::vector<int>& primes, const std::string& filename) {
    if (filename.empty()) {
        std::cerr << "Filename is empty. Skipping file save.\n";
        return;
    }

    std::ofstream outFile(filename);
    if (!outFile) {
        std::cerr << "Error opening file: " << filename << "\n";
        return;
    }

    for (size_t i = 0; i < primes.size(); ++i) {
        outFile << primes[i];
        if (i < primes.size() - 1) {
            outFile << " ";  // Space-separated numbers
        }
    }

    outFile.close();
    std::cout << "Prime numbers saved to: " << filename << "\n";
}
