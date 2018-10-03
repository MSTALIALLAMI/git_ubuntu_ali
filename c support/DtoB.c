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
void DtoB(mpz_t n)
{
    // array to store binary number
    // binaryNum[1000];
    //need to be defined and inicialized in the main program of the scomp
    mpz_t *binaryNum;
    // counter for binary array
    mpz_set_ui(i,0);
    while (n > 0) {
        // storing remainder in binary array
        mpz_mod_ui(*binaryNum+i,n,2);
        mpz_divexact_ui(n.n,2);
        mpz_add_ui(i,i,1);
    }
    // printing binary array in reverse order
    int i=0;
    for (int j = i - 1; j >= 0; j--){
      mpz_set(*binary2+i,*binaryNum+j);
      cout << *binaryNum+j;
      i++;
    }

}

// Driver program to test above function
int main()
{
    mpz_get_ui(n,17);
    DtoB(n);
    return 0;
}
