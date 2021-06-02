#include <stdio.h>

int fibonacci (int n) {
    if (n==1){
        return 0;
    }
    if (n ==2) {
        return 1;
    }
    else {
        int i=3;
        int a=0;
        int b=1;
        while (i <= n) {
            int c=b;
            b = a + b;
            a = c ;
            i++;
        }
        return b ;
    }

}

int main() {
    for (int i=1; i<10 ; i++){
        printf(" f = %d\n", fibonacci(i));
    }
}


