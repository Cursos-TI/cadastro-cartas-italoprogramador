#include <stdio.h>


int main(){

char Estado [50] = "Ceará";
char CODICO [50]="A01";
char Nome [50]= "Fortaleza";
int População= 200000;
float Área= 10.00;
float Pib=322.56;


char CODICOA02[50]= "A02";
char EstadoA02[50]= "Ceará";
char NomeA02 [50] = "abaiara";
int PopulaçãoA02= 3000000;
float ÁreaA02=90.0000;
float PibA02=500.63;

char CODICOA03[50]="A03";
char EstadoA03[50]="Bahia";
char NomeA03[50]="Barreiras";
int PopulaçãoA03=5000000;
float ÁreaA03=80.000;
float PibA03=300.11;

char CODICOA04[50]="A04";
char EstadoA04[50]="Bahia";
char NomeA04[50]="são Desiderio";
int PopulaçãoA04=370000;
float ÁreaA04=10.000;
float PibA04=966.55 ;




printf("Carta Numero: %s\n", CODICO);

printf("Estado de: %s\n" , Estado);

printf("Nome da cidade: %s\n", Nome );

printf("A População é: %d mil pessoas. \n",População);

printf("Área estendida é: %.2f mil km².\n",Área);

printf("O pib é: %.2f mil. \n", Pib);

printf("\n");
printf("\n");



printf ("Carta Numero: %s\n", CODICOA02);

printf ("Estado de: %s\n" , EstadoA02);

printf("Nome da cidade:%s\n", NomeA02);

printf("A População é: %d mil pessoas.\n",PopulaçãoA02);

printf("Área estendida é: %.2f mil km².\n",ÁreaA02);

printf("O pib é: %.2f mil.\n", PibA02);
 
printf("\n");
printf("\n");

printf("Carta Numero:%s\n " , CODICOA03);

printf("Estado de : %s\n " ,EstadoA03);

printf("Nome da cidade : %s\n",NomeA03);

printf("A População é: %d mil pessoas. \n", PopulaçãoA03);

printf("Área estendida é: %.2f mil km².\n", ÁreaA03);

printf("O pib é : %.2f mil.\n", PibA03);
 
printf("\n");
printf("\n");

printf("carta Numero:%s\n",CODICOA04);

printf("Estado de : %s\n", EstadoA04);

printf("Nome da cidade :%s\n",NomeA04);

printf("A População é:%d mil pessoas. \n", PopulaçãoA04);

printf("Área estendida é:%.2f mil km².\n", ÁreaA04);

printf("O pib é : %.2f mil.\n",PibA04);
 






return 0;


}
