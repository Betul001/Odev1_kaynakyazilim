//FATIMA BET�L MEMDUHOGLU
//02200201062


#include <stdio.h>
 
int main()
{
	
	FILE *belge;
	char karakter ;
	belge=fopen("file.txt","r"); //ISTEDIGINIZ �IKTIYI ELDE EDEBILMEK I�IN, 
	//                                                                 DOSYA KODUNUN ADRESINI KENDI DOSYA KODUNUZLA DEGISTIREBILIRSINIZ.
	do
	{
	karakter=getc(belge); 
	
	printf("%c",karakter);
	}
	
	while(karakter!=EOF);
	fclose(belge);
	

char *locale;
     locale = setlocale(LC_ALL, "");
 
 	int HRK, TOP, CIK, CRP, BOL, MOD, VE, VEYA, DEG
    int AX, BX, CX, DX;
    int sonuc;
    
    HRK = X1=X2;
    printf("\n sonu�: %d",HRK);
 
    TOP = X1=X1+X2;
    printf("\n sonu�: %d",TOP);
 
    CIK = X1=X1-X2;
    printf("\n sonu�: %d",CIK);
 
    CRP = X1=X1*X2;
    printf("\n sonu�:%d",CRP);
 
    BOL = X1=X1/X2;
    printf("\n sonu�: %d",BOL);
 
    MOD = X1=X1%X2;
    printf("\n sonu�: %d",MOD);
 
    
 
     return 0;

         
   
}
