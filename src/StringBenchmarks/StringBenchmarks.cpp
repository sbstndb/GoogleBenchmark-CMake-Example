﻿// StringBenchmarks.cpp : Defines the entry point for the application.
//

#include <benchmark/benchmark.h>
#include "StringBenchmarks.h"

static void BM_StringCreation(benchmark::State& state) {
    for (auto _ : state)
        std::string empty_string;
}
// Register the function as a benchmark
BENCHMARK(BM_StringCreation);

// Define another benchmark
static void BM_StringCopy(benchmark::State& state) {
    std::string x = "hello, from Google Benchmark !!!";
    for (auto _ : state)
        std::string copy(x);
}
BENCHMARK(BM_StringCopy);

// Define another benchmark
static void BM_StringShortCopy(benchmark::State& state) {
    std::string x = "h";
    for (auto _ : state)
        std::string copy(x);
}
BENCHMARK(BM_StringShortCopy);


// Define another benchmark
static void BM_StringVeryShortCopy(benchmark::State& state) {
    std::string x = "";
    for (auto _ : state)
        std::string copy(x);
}
BENCHMARK(BM_StringVeryShortCopy);



BENCHMARK_MAIN();
