#include <stdio.h>
#include <string.h>

FILE* fdosya;

int main(){
	
	
	//menu seçimi için değişken 
	int menu; 
	
	//case 1 için değişkenler
	char ad[50],soyad[50],otobus1;
	int koltuk,karakter,i,j,k;
	int otobusA[50],otobusB[50],otobusC[50];
	
	
	//case 2 için değişkenler
	char ad2[50];
	
	//case 3 için değişkenler
	char otobus3[50];
	
	//doğru kullanıcı adı ve şifre 
	char dogrukullaniciadi[] = "afra";
    char dogrusifre[] = "1234";
	
	//kullanıcıdan aldığım ad ve şifre
	char kullaniciadi[50];
    char sifre[50];
	
	int giristamam = 0;  // giriş başarılı olana kadar döngüyü sürdürmek için kullanılacak değişken
	
		do 
		{  // kullanıcıdan giriş için adını ve şifreyi alma
        		printf("Kullanici Adi: ");
       			scanf("%s", &kullaniciadi);

        		printf("Sifre: ");
        		scanf("%s", &sifre);

       		  // kullanıcı adı ve şifreyi kontrol etme strcmp iki diziyi karşılaştırma yapar. strcasecmp büyük küçük harf farketmeksizin yapar.
       		  
        	if (strcasecmp(kullaniciadi, dogrukullaniciadi) == 0 && strcasecmp(sifre, dogrusifre) == 0) 
			{
            printf("------------------------------Otobus Rezervasyon Sistemine Hos Geldiniz--------------------------------\n");
            giristamam = 1;  // Giriş başarılı olduğunda döngüyü sonlandır
        	} 
			else 
			{
            printf("\nGirilen bilgiler yanlis. Tekrar giris yapiniz:\n");
        	}
   		} 
			while (giristamam!=1);
	
	
	
		printf("\n1-Bilet satin almak icin 1'e basiniz.\n");
		printf("2-Bileti iptal etmek icin 2'ye basiniz.\n");
		printf("3-Otobus ve koltuk durumunu kontrol etmek icin 3'e basiniz.\n");
		printf("4-Cikis\n");
		
		do
		{
		printf("\n\nMenu secimi yapiniz: ");
		scanf("%d",&menu);
		printf("\n");
		
			switch(menu)
			{
				case 1:
						printf("\nBilet satin almak icin bilgilerinizi giriniz:\n");
						printf("Ad:");
						scanf("%s",&ad);
						printf("Soyadi:");
						scanf("%s",&soyad);
						printf("Otobus( A,B,C ):");
						scanf("%s",&otobus1);
						printf("Koltuk No:");
						scanf("%d",&koltuk);
						
							if(otobus1=='A')
							{
								// dosyayı okuma modunda aç
    							fdosya = fopen("denemea.txt", "r");
    								if (fdosya == NULL) 
									{
        							printf("Dosya açma hatası");
        							return 1;
    								}
			
    							// dosyadan 20 sayıyı oku ve diziye aktar
    							for (i = 0; i < 20; i++) 
									{
        							fscanf(fdosya, "%d", &otobusA[i]);
      								}
      								fclose(fdosya);
        							printf("%d\n", otobusA[i]);
   							}


							
							
							
							
							
							else if(otobus1=='B')
							{
								// dosyayı okuma modunda aç
    							fdosya = fopen("denemeb.txt", "r");
    								if (fdosya == NULL) 
									{
        							printf("Dosya açma hatası");
        							return 1;
    								}
			
    							// dosyadan 20 sayıyı oku ve diziye aktar
    							for (i = 0; i < 20; i++) 
									{
        							fscanf(fdosya, "%d", &otobusB[i]);
      								}
      								fclose(fdosya);
        							printf("%d\n", otobusB[i]);
									
							}
							
							
							
							
							
							
							
							 else if(otobus1=='C')
							{
								// dosyayı okuma modunda aç
    							fdosya = fopen("denemec.txt", "r");
    								if (fdosya == NULL) 
									{
        							printf("Dosya açma hatası");
        							return 1;
    								}
			
    							// dosyadan 20 sayıyı oku ve diziye aktar
    							for (i = 0; i < 20; i++) 
									{
        							fscanf(fdosya, "%d", &otobusC[i]);
      								}
      								fclose(fdosya);
        							printf("%d\n", otobusC[i]);
								      
							}
							
								
								
								
								
							 
							else 
							{
								printf("yanlis otobus secimi");
							}
						
					break;
					
					
					
					
				case 2:
						printf("Adinizi giriniz: ");
						scanf("%s",ad2);
						printf("%s kullanicisinin bileti iptal edilmistir.",&ad2);
					break;
					
					
					
					
					
				case 3:
						printf("Otobus sirketinin adini giriniz: ");
						scanf("%c ",&otobus3);
					break;
					
					
					
					
					
						
				case 4:
						printf("Sistemden cikiliyor...");
						
					break;
					
					
					
					
				default: printf("Lutfen gecerli bir sayi giriniz.");
			
			}
	}
	
	while(menu!='4');
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
