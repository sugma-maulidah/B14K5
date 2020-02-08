#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

main () 
{
	char plaintext[100],chipertext[100], str[5];
	int n,i,l,j,k,pil,m,minv;
	
	menu:
	printf("\n\t\tAFFINE CHIPHER");
	printf("\n\tMENU \n");
	printf("\n1. Enkripsi \n");
	printf("2. Dekripsi \n");
	printf("\n\nMasukkan pilihan : ");
	gets(str);
	pil=atoi(str);

	switch(pil)
	{
		case 1:	
			printf("\nMasukkan kalimat : ");gets(plaintext);
			strupr(plaintext);
			printf("Masukkan k : ");scanf("%d",&k);
			printf("Masukkan m : ");scanf("%d",&m);
			l=strlen(plaintext);
			for(i=0;i<l;i++)
			chipertext[i]=((m*plaintext[i])+k-65)%26+65;
			printf("\nChipertext : %s",chipertext);			
			break;
			
		case 2:
			printf("\nMasukkan kalimat : ");gets(plaintext);
			strupr(plaintext);
			printf("Masukkan k : ");scanf("%d",&k);
			printf("Masukkan m : ");scanf("%d",&m);
			l=strlen(plaintext);
			for(i=0;i<26;i++)
			{
				if((m*i)%26==1)
				minv=i;
			}
			for(i=0;i<l;i++)
			chipertext[i]=(minv*(plaintext[i]-k)-65)%26+65;
			printf("\nChipertext: \n");	
			printf("%s",chipertext);
			break;
	}
	getch();
}
