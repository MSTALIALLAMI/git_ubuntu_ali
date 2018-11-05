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
//Declare the variables
mpz_t n;//the number need to be converted
mpz_t c;//counter
mpz_t *binaryNum;//array to hold the reversed binary representation of n
mpz_t *binary2;
void maldec(int l){
binaryNum= (mpz_t*)malloc(l*sizeof(mpz_t));//allocate memory for binaryNum
binary2= (mpz_t*)malloc(l*sizeof(mpz_t));//allocate memory for binary2
}
// function to convert decimal to binary
void DtoB(mpz_t n)
{
    mpz_set_ui(c,0);
    while (n > 0) {
        // storing remainder in binary array
        mpz_mod_ui(*binaryNum+c,n,2);
        mpz_divexact_ui(n,n,2);
        mpz_add_ui(c,c,1);
    }
    // printing and saving the final binary array in reverse order
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
