#include<iostream>
 
using namespace std;
int main()
{
	int n, i, j, jum;
	printf("Masukkan jumlah anggota : ");
	scanf("%d",&n);
	jum=0;
	for(i=1;i<=n-1;i++){
		
		for(j=1;j<=n-i;j++)
		{
			jum=jum+1;
		}
		
	}
	printf("jumlah jabat tangan yang dilakukan adalah sebanyak : %d",jum);
}
