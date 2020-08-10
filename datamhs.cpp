#include <conio.h>
#include <string.h>
#include <stdio.h>
#include<stdlib.h>
#include <windows.h>
#include <bits/stdc++.h>
#include <algorithm>

void gotoxy(short x, short y) {
COORD pos = {x, y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

struct data
{
	char nama[30];
	int npm;
	int nilai;                                                 
};
data mhs[10];

int n,i,j,a,k,m,tmp,min,max,total;
float rata;
char kata[10],temp[10];

void input()
{
system("cls");
printf("Jumlah data : "); scanf("%d",&n);
   for (i=0; i<n; i++)
   {
        printf("\nData ke-%d\n",i+1);
      printf("  npm   : "); scanf("%d",&mhs[i].npm);
      printf("  Nama  : "); scanf("%s",&mhs[i].nama);
      printf("  Nilai : "); scanf("%d",&mhs[i].nilai);
   }
}

void output()
{
		system("cls");
	   printf("            Tampilan Data awal          \n");
	   printf("+======================================+\n");
	   printf("| No |    npm     |    NAMA    | NILAI |\n");
	   printf("|--------------------------------------|\n");
	   printf("|    |            |            |       |\n");
	   for(i=0; i<n; i++)
	   {
	        printf("|    |            |            |       |\n");
	        gotoxy(3,5+i); printf("%d",i+1);
	    	gotoxy(8,5+i); printf("%d",mhs[i].npm);
	    	gotoxy(21,5+i); printf("%s",mhs[i].nama);
	    	gotoxy(35,5+i); printf("%d\n",mhs[i].nilai);
	   }
	   printf("+======================================+\n");
}

void nilai()
{
	for (int i=0; i<n; i++)
 {
  total = total+mhs[i].nilai;
 }
 
  max = mhs[0].nilai;
 for (int i=1; i<n; i++)
 {
  if(mhs[i].nilai>max)
  {
   max = mhs[i].nilai;
  }
 }
 
 rata = mhs[0].nilai;
 for (int i=1; i<n; i++)
 {
  if(mhs[i].nilai>rata)
  {
   rata = mhs[i].nilai;
  }
 }
  rata = total/n;
  
  printf("Nilai terbesar adalah %d dengan nama %s", max);
printf("\n");
printf("Rata rata nilai adalah %f", rata); 
}

void urutnpm()
{
	system("cls");
	
	for(i=1; i<n; i++)
	   {
	       for(j=0; j<n-1; j++)
	      {
				if(mhs[j].npm<mhs[j+1].npm)
	            { 
	                tmp=mhs[j].npm;
	                mhs[j].npm=mhs[j+1].npm;
	                mhs[j+1].npm=tmp; 
	            }       
				
			}
	            
	   }
		system("cls");
	   printf("        Data Setelah Diurutkan          \n");
	   printf("+======================================+\n");
	   printf("| No |    npm     |    NAMA    | NILAI |\n");
	   printf("|--------------------------------------|\n");
	   printf("|    |            |            |       |\n");
	   for(i=0; i<n; i++)
	   {
	        printf("|    |            |            |       |\n");
	        gotoxy(3,5+i); printf("%d",i+1);
	      gotoxy(8,5+i); printf("%d",mhs[i].npm);
	      gotoxy(21,5+i); printf("%s",mhs[i].nama);
	      gotoxy(35,5+i); printf("%d\n",mhs[i].nilai);
	   }
	   printf("+======================================+\n");	   
}

void urutnilai()
{
	system("cls");
	for(i=1; i<n; i++)
	   {
	       for(j=0; j<n-1; j++)
	      {
				if(mhs[j].nilai<mhs[j+1].nilai)
	            { 
	                tmp=mhs[j].nilai;
	                mhs[j].nilai=mhs[j+1].nilai;
	                mhs[j+1].nilai=tmp; 
	            }       
				
			}
	            
	   }
	   system("cls");
	   printf("        Data Setelah Diurutkan          \n");
	   printf("+======================================+\n");
	   printf("| No |    npm     |    NAMA    | NILAI |\n");
	   printf("|--------------------------------------|\n");
	   printf("|    |            |            |       |\n");
	   for(i=0; i<n; i++)
	   {
	        printf("|    |            |            |       |\n");
	        gotoxy(3,5+i); printf("%d",i+1);
	      gotoxy(8,5+i); printf("%d",mhs[i].npm);
	      gotoxy(21,5+i); printf("%s",mhs[i].nama);
	      gotoxy(35,5+i); printf("%d\n",mhs[i].nilai);
	   }
	   printf("+======================================+\n");
}


void urutnama()
{
	system("cls");
	for(i=0;i<n;i++){
	
	            int j,bd;
	            j=i;
	            for(int k=i+1;k<3;k++)
	            {
	                    bd=strcmp(mhs[j].nama,mhs[k].nama);
	                    if(bd==1) j=k;        /* angka 1 merupakan urut data secara ascending, untuk descending ganti dengan -1 */
	                    }
	                                if(j!=i){
	                             char temp[1][30]; /* Swapping */
	                             strcpy(temp[0],mhs[j].nama);
	                             strcpy(mhs[j].nama,mhs[i].nama);
	                             strcpy(mhs[i].nama,temp[0]);}
	                    }   
		system("cls");
	   printf("        Data Setelah Diurutkan          \n");
	   printf("+======================================+\n");
	   printf("| No |    npm     |    NAMA    | NILAI |\n");
	   printf("|--------------------------------------|\n");
	   printf("|    |            |            |       |\n");
	   for(i=0; i<n; i++)
	   {
	        printf("|    |            |            |       |\n");
	        gotoxy(3,5+i); printf("%d",a+1);
	      gotoxy(8,5+i); printf("%d",mhs[a].npm);
	      gotoxy(21,5+i); printf("%s",mhs[a].nama);
	      gotoxy(35,5+i); printf("%d\n",mhs[a].nilai);
	   }
	   printf("+======================================+\n");
	}

int main ()
{
	int pil;
	do{
	system("cls");
	        printf("+================================+\n");
	      printf("|    PROGRAM NILAI MAHASISWA     |\n");
	      printf("|--------------------------------|\n");
	      printf("| 1. Input data                  |\n");
	      printf("| 2. Urutkan Data Sesuai NPM     |\n");
	      printf("| 3. Urutkan Data Sesuai Nilai   |\n");
	      printf("| 4. Urutkan Data Sesuai Nama    |\n");
	      printf("| 0. Keluar                      |\n");
	      printf("|--------------------------------|\n");
	      printf("| Pilih menu :                   |\n");
	      printf("+================================+\n");
	      gotoxy(16,9); scanf("%d",&pil);
	      switch(pil)
	      {
	        case 1 : input(); getch(); break;
	        case 2 : {
	                     output();
	                     printf("\n\n  Tekan enter untuk mengurutkan data\n");
	                     getch();
	                     urutnpm();
	                     nilai();
	                     getch();
	                     break;
	                            }
	        case 3 : {
	                     output();
	                     printf("\n\n  Tekan enter untuk mengurutkan data\n");
	                     getch();
	                     urutnilai();
	                     nilai();
						 getch();
	                     break;
	                            }
	        case 4 : {
	                     output();
	                     printf("\n\n  Tekan enter untuk mengurutkan data\n");
	                     getch();
	                     urutnilai();
	                     nilai();
	                     getch();
	                     break;
	                            }
	        
			case 0 : break;
	        default: printf("Input salah");

      }

}

   while(pil!=0);

        getch();

}

