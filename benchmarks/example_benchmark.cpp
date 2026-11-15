#include <benchmark/benchmark.h>

#include <unistd.h>

static void BM_Example(benchmark::State& state) {
  for (auto _ : state) {
    pid_t pid = getpid();
    benchmark::DoNotOptimize(pid);
  }
}

BENCHMARK(BM_Example);
