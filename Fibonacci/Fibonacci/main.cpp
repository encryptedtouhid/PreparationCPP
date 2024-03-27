//
//  main.cpp
//  Fibonacci
//
//  Created by Khaled Md Tuhidul Hossain on 27/03/2024.
//

#include <iostream>
#include <vector>

void PrintFibonacci(int n) {
    if (n < 0)
        return;

    std::vector<int> fib;
    fib.push_back(0);

    if (n > 0) {
        fib.push_back(1);
        std::cout << fib[0] << ", " << fib[1];
    } else {
        std::cout << fib[0];
    }

    for (int i = 2; i <= n; ++i) {
        fib.push_back(fib[i - 1] + fib[i - 2]);
        std::cout << ", " << fib[i];
    }

    std::cout << std::endl;
}

int main() {
    PrintFibonacci(0); // Output: 0
    PrintFibonacci(1); // Output: 0, 1
    PrintFibonacci(2); // Output: 0, 1, 1
    return 0;
}

