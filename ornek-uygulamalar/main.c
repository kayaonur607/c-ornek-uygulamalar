#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*main() {
	int sayi1, sayi2;
	printf("LUTFEN 2 ADET SAYI GIRINIZ\n");
	scanf("%d%d",&sayi1,&sayi2);
	
	printf("GIRDIGINIZ BIRINCI SAYI = %d\n",sayi1);
	printf("GIRDIGINIZ IKINCI\ SAYI = %d\n",sayi2);
	
	printf("%d %% %d = %d\n",sayi1,sayi2,(sayi1%sayi2));
	
	return 0;
}*/

/*main(){
	char h;
	int i=0;
	while(h !='x'){
		printf("\b\b\b\b\b",i);
		h = getch();
		i++;
	}
	printf("X KARAKTERINE BASILDIGI ICIN UYGULAMA SONLANDI\n");
	printf("BASILAN TUS SAYISI = %d",i);
	return 0;
	
}*/

/*main(){
	char ad[50]="";
	char soyad[50]="";
	int yas=0;
	
	printf("ADINIZ = ");
	scanf("%s",&ad);
	printf("SOYADINIZ = ");
	scanf("%s",&soyad);
	printf("YASINIZ = ");
	scanf("%s",&yas);
	
	printf("MERHABA %s %s",ad,soyad);
	
	return 0;
	
}*/

/*bir sýnýftaki on kiþi sýnava girmiþtir notlar 0-100 arasýndadýr her öðrenci için not giriþi yapýp 
sonuçta sýnýf ortalamasý bulan programý en etkili þekilde yazýýnýz*/

/*main(){
	
	int sayac = 0, girilenNot, toplam, ortalama;
	toplam = 0;
	
	for(sayac = 0; sayac < 10; sayac++){
		printf("OGRENCININ NOTUNU GIRINIZ = ");
		scanf("%d",&girilenNot);
		toplam = toplam + girilenNot;
	}	
	
	ortalama = toplam / 10;
	printf("ORTALAMA = %d\n",ortalama);
	
	
	
	
	
	
	
}*/

/*ATM UYGULAMASI*/

/*main(){
	int bakiye = 0;
	int para;
	int kalan;
	int limit;
	

		
	printf("BAKIYE GIRINIZ = ");
	scanf("%d",&bakiye);
	
	printf("HESAPTAN NE KADAR CEKECEKSINIZ = ");
	scanf("%d",&para);
	
	limit = 5000;
	
	limit = bakiye - para;
	if(kalan <= 0){
		printf("YETERSIZ BAKIYE\n");	
	}else{
		printf("%d TL BORCUNUZ VARDIR\n",limit);
	}	
	if(para>limit){
		printf("5000 TL LIMITINIZ VARDIR\n",limit);
	}else if(bakiye){
		printf("BAKIYE = %d",bakiye);
	}

}*/

/*main(){
	
	int ilkOyuncu;
	int ikinciO;
	int zar;
	
	srand(time(NULL));

	printf("");
	ilkOyuncu = rand()%6+1;
	printf("");
	ikinciO = rand()%6+1;
	
	
	printf("\n\n\nBASLATMAK ICIN ENTER TUSUNA BASINIZ\n\n\n");
	while (getchar() != '\n');
	
	printf("1.OYUNCU ZARI = %d\n",ilkOyuncu);
	
	printf("2.OYUNCU ZARI = %d\n",ikinciO);
	
	
	if(ilkOyuncu > ikinciO){
		printf("1.OYUNCU KAZANDI");
	}else if(ilkOyuncu == ikinciO){
		printf("YENISEMEDILER");
	}else if(ikinciO>ilkOyuncu){
		printf("2.OYUNCU KAZANDI");
	}
	
		

}*/

/*ZAR ATMA OYUNU*/

/*int zarAtma(void);
 int main(){
	
	
	int oyunDurumu,toplam,oyuncuPuani;
	
	srand(time(NULL));
	toplam = zarAtma();
	
	switch(toplam){
		
		case 7: case 11:
		oyunDurumu = 1;
		break;
		case 2: case 3: case 12:
		oyunDurumu = 2;
		break;
		default:
			oyunDurumu = 0;
			oyuncuPuani = toplam;
			printf( "OYUNCUNUN KAZANACAGI ZAR: %d\n", oyuncuPuani );
 		break;
	}
	
	while(oyunDurumu == 0){
		toplam = zarAtma();
		if(toplam == oyuncuPuani)
		oyunDurumu = 1;
		else if(toplam == 7)
		oyunDurumu=2;
	}
	
	if(oyunDurumu == 1){
		printf("OYUNCU KAZANIR\n");
	
	}else
		printf("OYUNCU KAYBEDER\n");
	
	return 0;
	
	
	
}
	int zarAtma(void)
	{
		int zar1, zar2, toplamZar;

 	zar1 = 1 + ( rand( ) % 6 );
 	zar2 = 1 + ( rand( ) % 6 );
 	toplamZar = zar1 + zar2;
	 printf( "OYUNCU %d + %d = %d ATTI \n", zar1, zar2, toplamZar );
 	return toplamZar;

		
	}*/

/*SWITCH CASE YAPISI*/

/*main(){
int secim;

printf("1 - Muhasebe\n");
printf("2 - Bilgi Islem\n");
printf("3 - Insan Kaynaklari\n");
printf("4 - Satin Alma\n");
scanf("%d",&secim);

switch(secim){
	case 1:
		printf("Muhasebe Departmani\n");
		break;
	case 2:
		printf("Bilgi Islem Departmani\n");
		break;
	case 3:
		printf("Insan Kaynaklari Departmani\n");
		break;
	case 4:
		printf("Satin Alma Departmani\n");
		break;
	default:
		printf("YANLIS SECIM !!!\n");
		break;

}






}*/

/*main(){
	int secim;

	
	printf("1 ILE 7 ARASINDA SAYI SECINIZ\n");
	scanf("%d",&secim);
	
	switch(secim){
		case 1:
			printf("PAZARTESI\n");
		break;
		case 2:
			printf("SALI\n");
		break;
		case 3:
			printf("CARSAMBA\n");
			break;
		case 4:
		printf("PERSEMBE\n");
		break;
		case 5:
		printf("CUMA\n");
		break;
		case 6:
		printf("CUMARTESI\n");
		break;
		case 7:
		printf("PAZAR\n");
		default:
			printf("YANLIS SECIM\n");
		break;
	}
}*/


/*main(){
	int sayac ;
	
	while(sayac <= 1000){
		if(sayac - 10){
			printf("%d\n",sayac);
		}
		
	}
		
	}
	*/

/*int main()
{
int Not;
char harf_notu ;
int notlar;

printf("Lutfen bir not giriniz (0-100 arasinda): ");
scanf("%d", &Not);



if(Not >= 90){
harf_notu = 'A';
}else if(Not <= 80){
	harf_notu = 'B';
}else if(Not <= 60){
	harf_notu = 'C';
}else if(Not <= 70){
	harf_notu = 'D';
}else if(Not <= 40){
	harf_notu = 'F';
}*/


// Ekrana harf notu yazdýrýlsýn






