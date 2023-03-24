//c program for output LCD
//euclidean LCS

int gcd (int a, int b)
{
    if (b==0) return a;
    else return gcd(b ,a%b);
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int c=(a*b)/gcd(a,b);
    printf("%d",c);
    return 0;
}