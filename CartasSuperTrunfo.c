#include <stdio.h>

int main() {
char Estado [50] = "Ceará";
char CODICO [50]="A01";
char Nome [50]= "Fortaleza";
int População= 200000;
float Área= 10.00;
float Pib=322.56;



printf("Carta Numero: %s\n", CODICO);

printf("Estado de: %s\n" , Estado);

printf("Nome da cidade: %s\n", Nome );

printf("A População é: %d mil pessoas \n",População);

printf("Área estendida é: %.2f mil km²\n",Área);

printf("O pib é: %.2f mil \n", Pib);
return 0;


}
