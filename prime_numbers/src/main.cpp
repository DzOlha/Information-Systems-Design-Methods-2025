#include <iostream>

#include "algo/impl/CustomAlgo.h"
#include "algo/impl/EratosthenesAlgo.h"
#include "generator/IGenerator.h"
#include "generator/impl/PrimeNumbersGenerator.h"
#include "util/impl/ConsolePrinter.h"

int main()
{
    ConsolePrinter<int> printer;

    IAlgo<int>* algo = new EratosthenesAlgo(10000);

    IGenerator<int>* gen = new PrimeNumbersGenerator(algo);
    std::vector<int> primeNumbers = gen->generate();

    std::string title = "Prime numbers";
    printer.print(primeNumbers, title);

    delete gen;
    delete algo;

    return 0;
}
