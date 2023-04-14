// extended GCD in discrete maths 
//extendedeuclid.c
//number theory chp -5
#include <stdio.h>


struct triple{
    int g;
    int c1;
    int c2;
    
};
typedef struct triple triple;

void printtriple(triple t){
    printf("g=%d,c1=%d,c2=%d\n",t.g,t.c1,t.c2);
}
//---

triple extGCD(int a,int b){
    triple ans;
    
    if(a==0){
        ans.g=b;
        ans.c1=0;
        ans.c2=1;
        
        printtriple(ans);
        return ans;
    }
    
    else{
        triple temp=extGCD(b%a,a);
        
        ans.g=temp.g;
        ans.c1=-temp.c1*(b/a)+temp.c2;
        ans.c2=temp.c1;
        printtriple(ans);
        return ans;
    }
}

int main(){
    extGCD(242424,363636);
}