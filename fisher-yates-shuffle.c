//https://en.wikipedia.org/wiki/Fisher%E2%80%93Yates_shuffle#Fisher_and_Yates.27_original_method

#include <stdio.h>
#include <time.h>
#define FIN "algsort.in"
#define SIZE 500005

void shuffle(int v[], int size) {

     int i,r;

     for(i = 0; i < size; ++i) {
         srand(time(NULL));
         r = rand() % (i+1); 
         int tmp = v[i]; 
             v[i] = v[r];
             v[r] = tmp;             
     }
};

void print(int v[],int n) {

    int i;

    for(i = 0; i < n; ++i) printf("%d ", v[i]);
 
    printf("\n");
};

int main() {

    int i, n;

    freopen(FIN, "r", stdin);  

    int v[SIZE];

    scanf("%d", &n);

    for(i = 0; i < n; ++i) scanf("%d", &v[i]);

    print(v, n);

    shuffle(v, n);    

    print(v, n);

 return(0);
};