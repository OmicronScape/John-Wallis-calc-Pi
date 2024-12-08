// Calculation of π based on the formula developed by John Wallis
#include <stdio.h> 
 
int main() { 
int N; 
double P = 1.0; 
Double K; 
 
 
do { 
    printf(“Δώσε τον αριθμό Ν(Από 1000 έως και 100.000): ”); 
    scanf(“%d”, &N); 
 
if (N<1000 || N>10000){ 
    printf(“Προσοχή,ο αριθμός Ν να είναι απο 1000 μέχρι 100000”); 
}    
} while(N<1000 || N>100000); 
 
// Calculation of π using the Wallis formula 
for (int i=1; i<=N; i++) { 
    K = (2.0 * i) / (2.0 * i – 1.0); 
    P = P * K; 
    K = (2.0 * i) / (2.0 * i + 1.0); 
    P = P * K; 
} 
 
 
//Final calculation of π
P = P * 4; 
 
// Print the final result of π with 8 decimal places (%.8lf)
printf(“Η τιμή του π είναι: %.8lf\n”, P);  
return 0;  
} 
