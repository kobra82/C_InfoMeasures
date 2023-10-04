#include <stdio.h>   // per le operazioni di I/O e grafica
#include <windows.h> // per il system
#include <conio.h>   // per getch()
int main()
{
system("cls");
printf("\n");    
printf("PROGRAMMA DI CONVERSIONE MISURE INFORMATICHE VER 1.0\n");
printf("========================================================\n");
printf("========================================================\n");
printf("\n");
printf("   0. Bit --> Byte\n");
printf("\n");
printf("   1. Byte --> Bit\n");
printf("\n");
printf("========================================================\n");
printf("========================================================\n");
printf("\n");
printf("   2. Byte --> Kbyte\n");
printf("\n");
printf("   3. Byte --> Mbyte\n");
printf("\n");
printf("   4. Byte --> Gbyte\n");
printf("\n");
printf("========================================================\n");
printf("========================================================\n");
printf("\n");
printf("   5. KByte --> Byte\n");
printf("\n");
printf("   6. KByte --> Mbyte\n");
printf("\n");
printf("   7. KByte --> Gbyte\n");
printf("\n");
printf("========================================================\n");
printf("========================================================\n");
printf("\n");
printf("   8. MByte --> Byte\n");
printf("\n");
printf("   9. MByte --> Kbyte\n");
printf("\n");
printf("   10. MByte --> Gbyte\n");
printf("\n");
printf("========================================================\n");
printf("========================================================\n");
printf("\n");
printf("   11. GByte --> Byte\n");
printf("\n");
printf("   12. GByte --> Kbyte\n");
printf("\n");
printf("   13. GByte --> Mbyte\n");
printf("\n");
printf("========================================================\n");
printf("========================================================\n");
printf("\n");
//Inserimento Dati
printf("Inserisci q.ta': ");
int qta;
scanf("%d",&qta);
int mode;
printf("\n");
printf("Inserisci modo conversione: ");
scanf("%d",&mode);
printf("\n");
float result;
//FINE INSERIMENTO DATI
// Calcolo Risultato
switch (mode) 
{
case 0:result = (float)qta/8.0; printf("Byte: "); break;
case 1:result = (float)qta*8.0; printf("bit: "); break;
case 2:result = (float)qta/1024.0; printf("Kbyte: "); break;
case 3:result = (float)qta/1048756.0; printf("Mbyte: "); break;
case 4:result = (float)qta/1073741824.0; printf("Gbyte: "); break;     
case 5:result = (float)qta*1024.0; printf("byte: "); break;     
case 6:result = (float)qta/1024.0; printf("Mbyte: "); break;     
case 7:result = (float)qta/1048756.0; printf("Gbyte: "); break;     
case 8:result = (float)qta*1048756.0; printf("byte: "); break;     
case 9:result = (float)qta*1024.0; printf("Kbyte: "); break;     
case 10:result = (float)qta/1024.0; printf("Gbyte: "); break;     
case 11:result = (float)qta/1073741824.0; printf("byte: ");break;     
case 12:result = (float)qta/1048756.0; printf("Kbyte: "); break;     
case 13:result = (float)qta/1024.0; printf("Mbyte: "); break;     
} //switch
//FINE CALCOLO RISULTATO
//Stampa dei risultati e chiusura
printf("%.2f\n",result);
printf("\n");
printf("Grazie per aver usato questo programma. Premi un tasto per terminare.");
getch();
printf("\n");
system("cls");
} //fine listato
