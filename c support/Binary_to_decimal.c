//THIS IS NOT DONE YET NEED MORE WORK
//This link has awesome information
//https://www.cyberciti.biz/faq/linux-freebsd-gcc-cc-see-c-program-output/
// Convert binary to decimal in c++ using GMP library to facilitate the bignumbers
#include<iostream>
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
// Function to convert binary to decimal
int BToD(mpz_t n)
{
    mpz_set(num, n);
    mpz_set_ui(dec_value,0);

    // Initializing base value to 1, i.e 2^0
    mpz_set_ui(base,1);
    mpz_set(t,num);
    while (t)
    {
        mpz_mod_ui(last_digit,t,10);
        mpz_divexact_ui(t,t,10);
        mpz_mul(last_digit,last_digit,base);
        mpz_add(dec_value,dec_value,last_digit); += last_digit*base;
        mpz_mod_ui(base,base,2);
    }
    cout<<
    return dec_value;
}

// Driver program to test above function
int main()
{
    mpz_set_ui(num,10101001);
    BToD(num);
    //cout < <<<endl;
}
