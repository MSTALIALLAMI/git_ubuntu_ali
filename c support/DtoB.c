//Converting decimal to binary using GMP library to handel the big numbers
#include<iostream>
#include <math.h>
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<gmp.h>
#include<stdint.h>
#include<inttypes.h>
#include<errno.h>
#include <unistd.h>
#include <time.h>
#include <string.h>
#include <bitset>
#include<string>
#include<ctime>
using namespace std;

// function to convert decimal to binary
void decToBinary(int n)
{
    // array to store binary number
    int binaryNum[1000];

    // counter for binary array
    int i = 0;
    while (n > 0) {

        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
}

// Driver program to test above function
int main()
{
    int n = 17;
    decToBinary(n);
    return 0;
} 
