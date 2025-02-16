//
// Created by dzuha on 16/02/2025.
//

#ifndef BENCHMARK_H
#define BENCHMARK_H

#include <iostream>
#include <chrono>
#include <functional>

class Benchmark {
public:
    template<typename Func, typename... Args>
    static auto measureTime(const std::string& title, Func func, Args&&... args) {
        auto start = std::chrono::high_resolution_clock::now();
        auto result = func(std::forward<Args>(args)...);
        auto end = std::chrono::high_resolution_clock::now();

        auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
        std::cout << title << " took " << elapsed << " ms\n\n";

        return result;
    }
};

#endif //BENCHMARK_H
