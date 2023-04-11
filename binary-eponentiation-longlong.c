// long long int for binary eponentiation 
//calculating power
#include <stdio.h>

unsigned long long binpow(unsigned long long n,unsigned long long e){
    if(e==0){
        return 1;
        
    }
    if(e%2 == 0){
        return binpow(n,e/2)* binpow(n,e/2);
    }
    else
    return n * binpow(n,e-1);

}
unsigned long long stupidpow(unsigned long long n,unsigned long long e){
    int res=1;
    for(int i=0;i<n;i++){
        res=res*n;
    }
    return res;
}

unsigned long long main() {
     
    printf("%d\n", binpow(5,20));
    printf("%d\n", stupidpow(5,20));
    return 0;
}