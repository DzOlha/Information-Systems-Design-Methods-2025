//
// Created by dzuha on 16/02/2025.
//

#include "algo/impl/CustomAlgo.h"

std::vector<int> CustomAlgo::apply()
{
    // Arrays to store intermediate values and results
    std::vector<int> p(n + 1);     // Array to store prime numbers
    std::vector<int> V(n + 1, 0);   // Array for square multiples

    // Initialize first prime
    p[1] = 2;
    int primeCount = 1;  // Keep track of how many primes we've found

    int x = 1;              // Current number being checked
    int lim = 1;            // Current limit for square multiples
    int kvadrat = 4;        // Square value (starts with 2²)
    int i = 2;              // Index for prime numbers found

    // Main loop to find prime numbers up to n
    while (true) {
        // Update x
        x = x + 2;
        if (x > n) break;   // Stop if we've exceeded n

        // Update square multiples array
        if (kvadrat <= x) {
            V[lim] = kvadrat;
            lim++;
            if (lim < i) {  // Protect against out-of-bounds access
                kvadrat = p[lim] * p[lim];
            }
        }

        // Check if x is prime
        bool prim = true;
        int k = 1;  // Start from the first prime (2)

        while (k < lim && prim) {
            if (V[k] < x) {
                V[k] = V[k] + p[k];
            }
            if (x % p[k] == 0) {  // Add explicit divisibility check
                prim = false;
            }
            k++;
        }

        // If x is prime, store it
        if (prim) {
            p[i] = x;
            primeCount++;
            i++;
        }
    }

    // Create result vector with exact size needed
    std::vector<int> result(primeCount);
    for (int j = 1; j <= primeCount; j++) {
        result[j-1] = p[j];
    }

    return result;
}