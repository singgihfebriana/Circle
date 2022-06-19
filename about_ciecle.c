#include<stdio.h>
main(){

int Pilih;
float Sisi,Jari,Tinggi;
while(1){
printf("\n          <<<MENNU>>>          \n");
printf("\n");
printf("1. Menghitung isi kubus\n");
printf("2. Menghitung luas lingkaran\n");
printf("3. Menghitung isi silinder\n");
printf("\n");
printf("Pilih nomer (1-3) ?");
scanf("%d",&Pilih);
switch(Pilih){
case 1:
    printf("Panjang sisi kubus ? ");
    scanf("%f",&Sisi);
    printf("ii kubus= %f\n",Sisi*Sisi*Sisi);
    break;
case 2:
    printf("Jari-jari lingkaran ?");
    scanf("%f",&Jari);
    printf("Luas Lingkaran= %f\n",3.14*Jari*Jari);
    break;
case 3:
    printf("Jari-jari lingkaran? ");
    scanf("%f",&Jari);
    printf("Tinggi Silinder ? ");
    scanf("%f",&Tinggi);
    printf("Isi Silinder = %f\n",3.14*Jari*Tinggi);
    break;
default:
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
                exit(0);

}
}
}
