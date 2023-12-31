﻿#include <iostream>

int climbStairs(int n) {
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;

    return climbStairs(n - 1) + climbStairs(n - 2);
}

int main() {
    int n1 = 2;
    int n2 = 3;

    std::cout << "Example 1:\nInput: n = " << n1 << "\nOutput: " << climbStairs(n1) << "\n\n";
    std::cout << "Example 2:\nInput: n = " << n2 << "\nOutput: " << climbStairs(n2) << "\n";

    return 0;
}
