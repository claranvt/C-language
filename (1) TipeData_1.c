#include <stdio.h>
int main(){ 
    char nama;
    int usia;
    float tinggi;

    printf("Nama\t: ");
    gets(nama);
    printf("Usia\t: ");
    scanf("%d", &usia);
    printf("Tinggi\t: ");
    scanf("%f", &tinggi);

    printf("Nama\t: %s\n", nama);
    printf("Usia\t: %d\n", usia);
    printf("Tinggi\t: %.1f\n", tinggi);
return 0;
}
