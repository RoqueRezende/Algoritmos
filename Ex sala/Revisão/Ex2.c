 #include<stdio.h>
 #include<math.h>
 int main()
 {
    int n=1000, p, s, soma, pot;
    int i=2;
    while (n>=1000 && n<=9999)
    {
        p=n/100;
        s=n%100;
        soma=p+s;
        pot=pow(soma, i);
        if (n==pot)
        {
            printf("%d\n", n);
        }
        n++; 
    }
    return 0;
 }