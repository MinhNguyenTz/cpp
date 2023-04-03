#include <bits/stdc++.h>

using namespace std::chrono;
void runtime(auto* f){
    auto start = high_resolution_clock::now();
    f();
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    std::cout << "Seive(bitmask): \t" << (duration.count()/(1e6)) << " s";
}