#include <iostream>
#include <sstream>
#include "algo/impl/CustomAlgo.h"
#include "algo/impl/EratosthenesAlgo.h"
#include "benchmark/Benchmark.h"
#include "generator/IGenerator.h"
#include "generator/impl/PrimeNumbersGenerator.h"
#include "printer/impl/ConsolePrinter.h"
#include "saver/Saver.h"

int main()
{
    /**
     * User Console Interface
     **/
    int n = 10000;  // Default value
    std::string input;

    std::cout << "Please enter a number n (press Enter to use a default n = 10,000): ";
    std::getline(std::cin, input);  // Read the entire line

    if (!input.empty()) {  // If input is not empty, convert to integer
        std::stringstream(input) >> n;
    }

    std::cout << "n = " << n << "\n\n";

    /**
     * Application Code
     **/
    ConsolePrinter<int> printer;

    IAlgo<int>* algo1 = new CustomAlgo(n);
    IAlgo<int>* algo2 = new EratosthenesAlgo(n);

    IGenerator<int>* gen1 = new PrimeNumbersGenerator(algo1);
    IGenerator<int>* gen2 = new PrimeNumbersGenerator(algo2);

    // Measure execution time for each algorithm
    std::vector<int> primeNumbers1 = Benchmark::measureTime(
        "Custom Algorithm", [&]() {
        return gen1->generate();
    });

    std::vector<int> primeNumbers2 = Benchmark::measureTime(
        "Eratosthenes Algorithm", [&]() {
        return gen2->generate();
    });

    std::string title1 = "Prime numbers by Custom Algorithm";
    printer.print(primeNumbers1, title1);

    std::string title2 = "Prime numbers by Eratosthenes Algorithm";
    printer.print(primeNumbers2, title2);

    std::string filename1 = "primes_custom.txt";
    std::string filename2 = "primes_eratosthenes.txt";

    Saver::saveToFile(primeNumbers1, filename1);
    Saver::saveToFile(primeNumbers2, filename2);

    delete gen1;
    delete gen2;
    delete algo1;
    delete algo2;

    return 0;
}
