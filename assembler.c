//FATIMA BETÜL MEMDUHOGLU
//02200201062


#include <stdio.h>
 
int main()
{
	
	FILE *belge;
	char karakter ;
	belge=fopen("file.txt","r"); //ISTEDIGINIZ ÇIKTIYI ELDE EDEBILMEK IÇIN, 
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
    printf("\n sonuç: %d",HRK);
 
    TOP = X1=X1+X2;
    printf("\n sonuç: %d",TOP);
 
    CIK = X1=X1-X2;
    printf("\n sonuç: %d",CIK);
 
    CRP = X1=X1*X2;
    printf("\n sonuç:%d",CRP);
 
    BOL = X1=X1/X2;
    printf("\n sonuç: %d",BOL);
 
    MOD = X1=X1%X2;
    printf("\n sonuç: %d",MOD);
 
    
 
     return 0;

         
   
}
