/*gcd*/

#include <stdio.h>
#include <stdlib.h>
long long int gcd( long long int a, long long int b);

int main ( int argc, char * argv[] ) {
    long long int num0= atoll(argv[1]);
    long long int num1=atoll(argv[2]);
    if (argc!=3 ){
        printf("Usage: ./gcd <num1> <num2>\n");
        return 1;
    }
    else if (num0==0 || num1==0){
        printf("Enter a number except for zero(0)\n");
        return 1;
    }
    else{ 
        gcd ( num0,num1 );
    return 0;}
    return 0;
}


long long int gcd ( long long int a, long long int b){
    long long int mkd;
    if (a % b==0) {
        mkd=b;
        printf("gcd(a,b) = %lld\n", mkd);
    }
    else {
        gcd (b, a % b);
    }
    return mkd;
}
