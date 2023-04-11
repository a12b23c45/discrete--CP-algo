// to calculate powers for small powers cp algo
// using just int
#include <stdio.h>

int binpow(int n,int e){
    if(e==0){
        return 1;
        
    }
    if(e%2 == 0){
        return binpow(n,e/2)* binpow(n,e/2);
    }
    else
    return n * binpow(n,e-1);

}

int main() {
     
    printf("%d\n",binpow(2,6));

    return 0;
}