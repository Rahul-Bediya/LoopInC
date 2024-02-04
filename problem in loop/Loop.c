#include <stdio.h>

// Function to print numbers from 1 to n
void printNumbersFrom1ToN(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

// Function to print numbers from n to 1
void printNumbersFromNTo1(int n) {
    for (int i = n; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");
}

// Function to print numbers from m to n (forward and reverse)
void printNumbersFromMToN(int m, int n) {
    // Forward
    for (int i = m; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // Reverse
    for (int i = n; i >= m; i--) {
        printf("%d ", i);
    }
    printf("\n");
}

// Function to print numbers from m to n in forward order in recursion
void printForward(int m, int n) {
    // Base case: if m is greater than n, return
    if (m > n) {
        return;
    }

    // Print the current number in forward order
    printf("%d ", m);

    // Recursively call the function with the next number
    printForward(m + 1, n);
}

// Function to print numbers from m to n in reverse order in recursion
void printReverse(int m, int n) {
    // Base case: if m is greater than n, return
    if (m > n) {
        return;
    }

    // Recursively call the function with the next number before printing
    printReverse(m + 1, n);

    // Print the current number in reverse order after the recursive call
    printf("%d ", m);
}

// Function to print even and odd numbers from 1 to n
void printEvenOddNumbers(int n) {
    // Even numbers
    printf("Even numbers: ");
    for (int i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    // Odd numbers
    printf("Odd numbers: ");
    for (int i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
}

// Function to print the sum of numbers from 1 to n
void printSumOfNumbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Sum of numbers from 1 to %d: %d\n", n, sum);
}

// Function to print the product of numbers from 1 to n / factorial of n
void printProductOfNumbers(int n) {
    long long int product = 1;
    for (int i = 1; i <= n; i++) {
        product *= i;
    }
    printf("Factorial of %d: %lld\n", n, product);
}

// Function to print Fibonacci numbers up to n
void printFibonacciNumbers(int n) {
    int a = 0, b = 1, c;
    printf("Fibonacci sequence up to %d: ", n);
    printf("%d %d ", a, b);
    for (int i = 3; i <= n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");
}

// Function to print n Fibonacci numbers
void printNFibonacciNumbers(int n) {
    int a = 0, b = 1, c;
    printf("%d Fibonacci numbers: ", n);
    printf("%d %d ", a, b);
    for (int i = 3; i <= n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");
}

// Function to calculate x^n
double power(double x, int n) {
    double result = 1.0;
    for (int i = 0; i < n; i++) {
        result *= x;
    }
    return result;
}

// Function to find GCD/HCF of two numbers
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find LCM of two numbers
int findLCM(int a, int b) {
    return (a * b) / findGCD(a, b);
}

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0; // Not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

// Function to print all prime numbers within the range 1-n
void printAllPrimes(int n) {
    printf("Prime numbers up to %d: ", n);
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

// Function to print all factors of a number
void printFactors(int num) {
    printf("Factors of %d: ", num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

// Function to print all prime factors of a number
void printPrimeFactors(int num) {
    printf("Prime factors of %d: ", num);
    for (int i = 2; i <= num; i++) {
        while (num % i == 0 && isPrime(i)) {
            printf("%d ", i);
            num /= i;
        }
    }
    printf("\n");
}

// Function to find maximum, second maximum, minimum, and second minimum
void findMinMax(int num, int *max, int *secondMax, int *min, int *secondMin) {
    if (num > *max) {
        *secondMax = *max;
        *max = num;
    } else if (num > *secondMax) {
        *secondMax = num;
    }

    if (num < *min) {
        *secondMin = *min;
        *min = num;
    } else if (num < *secondMin) {
        *secondMin = num;
    }
}

// Function to accept a number and print it until the user enters 99
void printUntil99() {
    int num;
    printf("Enter numbers (enter 99 to stop):\n");
    while (1) {
        scanf("%d", &num);
        if (num == 99) {
            break;
        }
        printf("Entered number: %d\n", num);
    }
}

// Function to count digits, reverse, check palindrome, and check Armstrong number
void processMultiDigitNumber(int num) {
    int originalNum = num;
    int numDigits = 0, reversedNum = 0, digit, temp;

    // Count digits
    while (num != 0) {
        numDigits++;
        num /= 10;
    }

    num = originalNum; // Reset num to its original value

    // Reverse the number
    while (num != 0) {
        digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    num = originalNum; // Reset num to its original value

    // Check palindrome
    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    // Check Armstrong number
    temp = originalNum;
    int sum = 0;
    while (temp != 0) {
        digit = temp % 10;
        sum += power(digit, numDigits);
        temp /= 10;
    }

    if (originalNum == sum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }
}

// Function to print multiplication table of a number
void printMultiplicationTable(int num) {
    printf("Multiplication table of %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

// Function to print multiplication tables up to n
void printMultiplicationTablesUpToN(int n) {
    for (int i = 1; i <= n; i++) {
        printMultiplicationTable(i);
        printf("\n");
    }
}

int main() {
    int choice, n, m, x, powerN, gcd, lcm, max = 0, secondMax = 0, min = __INT_MAX__, secondMin = __INT_MAX__;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Print numbers from 1 to n\n");
        printf("2. Print numbers from n to 1\n");
        printf("3. Print numbers from m to n (forward and reverse)\n");
        printf("4. Print even and odd numbers from 1 to n\n");
        printf("5. Print sum of numbers from 1 to n\n");
        printf("6. Print product of numbers from 1 to n (factorial of n)\n");
        printf("7. Print Fibonacci of numbers from 1 to n and n Fibonacci numbers\n");
        printf("8. Calculate x^n\n");
        printf("9. Find GCD/HCF and LCM of two numbers\n");
        printf("10. Check prime number, generate primes, print factors and prime factors of a number\n");
        printf("11. Find maximum, second maximum, minimum, and second minimum\n");
        printf("12. Print numbers until 99\n");
        printf("13. Process multi-digit number (count digits, reverse, check palindrome, check Armstrong)\n");
        printf("14. Print multiplication tables of a number and up to n\n");
        printf("15. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter n: ");
                scanf("%d", &n);
                printNumbersFrom1ToN(n);
                break;

            case 2:
                printf("Enter n: ");
                scanf("%d", &n);
                printNumbersFromNTo1(n);
                break;

            case 3:
                printf("Enter m and n: ");
                scanf("%d %d", &m, &n);
                printNumbersFromMToN(m, n);
                break;

            case 4:
                printf("Enter n: ");
                scanf("%d", &n);
                printEvenOddNumbers(n);
                break;

            case 5:
                printf("Enter n: ");
                scanf("%d", &n);
                printSumOfNumbers(n);
                break;

            case 6:
                printf("Enter n: ");
                scanf("%d", &n);
                printProductOfNumbers(n);
                break;

            case 7:
                printf("Enter n: ");
                scanf("%d", &n);
                printFibonacciNumbers(n);
                printNFibonacciNumbers(n);
                break;

            case 8:
                printf("Enter base (x) and exponent (n): ");
                scanf("%d %d", &x, &n);
                powerN = power(x, n);
                printf("%d^%d = %d\n", x, n, powerN);
                break;

            case 9:
                printf("Enter two numbers: ");
                scanf("%d %d", &x, &n);
                gcd = findGCD(x, n);
                lcm = findLCM(x, n);
                printf("GCD/HCF: %d\n", gcd);
                printf("LCM: %d\n", lcm);
                break;

            case 10:
                printf("Enter n: ");
                scanf("%d", &n);

                // a. Check if prime
                if (isPrime(n)) {
                    printf("%d is a prime number.\n", n);
                } else {
                    printf("%d is not a prime number.\n", n);
                }

                // b. Generate primes up to n
                printAllPrimes(n);

                // c. Print factors of n
                printFactors(n);

                // d. Print prime factors of n
                printPrimeFactors(n);

                break;

            case 11:
                printf("Enter numbers (enter 99 to stop):\n");
                while (1) {
                    int num;
                    scanf("%d", &num);
                    if (num == 99) {
                        break;
                    }
                    findMinMax(num, &max, &secondMax, &min, &secondMin);
                }
                printf("Maximum: %d\n", max);
                printf("Second Maximum: %d\n", secondMax);
                printf("Minimum: %d\n", min);
                printf("Second Minimum: %d\n", secondMin);
                break;

            case 12:
                printUntil99();
                break;

            case 13:
                printf("Enter a multi-digit number: ");
                scanf("%d", &n);
                // a. Count digits
                printf("Number of digits: %d\n", (int)log10(n) + 1);

                // b. Reverse the number
                printf("Reversed number: ");
                while (n != 0) {
                    printf("%d", n % 10);
                    n /= 10;
                }
                printf("\n");

                // c. Check palindrome
                if (isPalindrome(n)) {
                    printf("Palindrome: Yes\n");
                } else {
                    printf("Palindrome: No\n");
                }

                // d. Check Armstrong number
                int temp = n;
                int sum = 0;
                while (temp != 0) {
                    int digit = temp % 10;
                    sum += power(digit, (int)log10(n) + 1);
                    temp /= 10;
                }
                if (sum == n) {
                    printf("Armstrong number: Yes\n");
                } else {
                    printf("Armstrong number: No\n");
                }
                break;

            case 14:
                printf("Enter n: ");
                scanf("%d", &n);
                // a. Print multiplication table of n
                printMultiplicationTable(n);

                // b. Print multiplication tables up to n
                printMultiplicationTablesUpToN(n);
                break;

            case 15:
                printf("Exiting the program.\n");
                return 0;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }

    return 0;
}
