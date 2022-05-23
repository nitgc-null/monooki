#include <stdio.h>
#include <complex.h>
int main(){
    double complex x=7+3i; //宣言 complex をつける
    double complex y=3+1i;
    double complex z;
    z=x+y;
    printf("(%6.2lf)+(%6.2lf)i\n",creal(z),cimag(z));//複素数の表示
    z=x-y;
    printf("(%6.2lf)+(%6.2lf)i\n",creal(z),cimag(z));
    z=x*y;
    printf("(%6.2lf)+(%6.2lf)i\n",creal(z),cimag(z));
    z=x/y;
    printf("(%6.2lf)+(%6.2lf)i",creal(z),cimag(z));
}