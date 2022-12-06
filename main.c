#include <stdio.h>
#define NMAX 100
//declaration of functions
float product(float, float);
float array_product(float tab[], int size);
float array_average(float tab[], int size);
void array_input(float tab[], int *size);
int main() {
    float tab[NMAX],prod,avg;
    int n;
    array_input(tab, &n);
    prod = array_product(tab,n);
    printf("Product of array elements: %.2f\n",prod);
    avg = array_average(tab,n);
    printf("Average of array elements: %.2f\n",avg);
    return 0;
}
float product(float x, float y) {
    return x * y;
}

float array_product(float tab[], int size){
   float p=1;
   int i;
   for(i=0;i<size;i++){
     //p=p*tab[i];
     p*=tab[i];
   }
   return p;
}
float array_average(float tab[], int size){
   float sum=0;
   int i;
   for(i=0;i<size;i++){
     sum+=tab[i];
   }
   return sum/size;
   //return sum/(float)size;//in case of int/int (array of integers)
}
void array_input(float tab[], int *size){
    int i;
    printf("Enter the size of the array: ");
    scanf("%d", size);
    for(i=0;i<*size;i++){
        printf("Enter the element n° %d: ", i+1);
        scanf("%f", &tab[i]);
    }
}
