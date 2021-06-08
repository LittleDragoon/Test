#include <stdio.h> 



void tableau(int res[], int length) {

    for (int j=0 ; j <= 100 ; j++) {
        if (j%2 == 0){
            res[j/2]= j;
        }
    }
    
}


int main() {
    int res[51];
    tableau(res, 51) ;
    for (int i=0 ; i <= 50 ; i++) {
        printf("res[i] = %d\n", res[i]);
}
}
