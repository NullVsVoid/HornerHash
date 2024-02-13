//
// Copyright Caiden Sanders - All Rights Reserved
//
// Unauthorized copying of this file, via any medium is strictly prohibited.
// Proprietary and confidential.
//
// Written by Caiden Sanders <work.caidensanders@gmail.com>, February 12, 2024.
//

#include <math.h>

#include <iostream>

/**
 * Hash function using Horner's method to compute the hash value of a given
 * string.
 *
 * @param s The string to compute the hash value of.
 * @param base The base to use for the hash function.
 * @param mod The modulo to use for the hash function.
 */
int horner_hash(const std::string& s, int base = 31, int mod = pow(10, 9) + 9) {
    int hash_value = 0;

    for (char c : s) {
        hash_value = (1LL * hash_value * base + c) % mod;
    }

    return hash_value;
}

/**
 * Example usage of the horner_hash() method.
 */
int main() {
    std::string s = "Hello, World!";

    std::cout << horner_hash(s);

    return 0;
}