#include <iostream>
#include <cmath> // Required for sqrt()

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }
    if (num == 2 || num == 3) {
        return true; // 2 and 3 are prime numbers
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false; // Eliminate even numbers and multiples of 3
    }

    // Check for divisibility from 5 up to the square root of num
    // Increment by 6 to skip multiples of 2 and 3 (i.e., check numbers of form 6k ± 1)
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false; // If divisible, it's not prime
        }
    }
    return true; // If no divisors found, it's prime
}

int main() {
    int n;
    std::cout << "Enter a number to check for primality: ";
    std::cin >> n;

    if (isPrime(n)) {
        std::cout << n << " is a prime number." << std::endl;
    } else {
        std::cout << n << " is not a prime number." << std::endl;
    }

    return 0;
}