#include <stdio.h>

int main(void) {
float lato1,lato2,lato3;
    printf("Inserisci il primo lato:");
    scanf("%f",&lato1);
    printf("Inserisci il secondo lato:");
    scanf("%f",&lato2);
    printf("Inserisci il terzo lato:");
    scanf("%f",&lato3);
    if (lato1==lato2 && lato2==lato3) {
        printf("il triangolo e' equilatero");
    }
    else if (lato1==lato3 || lato3==lato2 || lato2==lato1) {
        printf("il triangolo e' isoscele");
    }
    else {
        printf("il triangolo e' scaleno");
    }

    return 0;
}
