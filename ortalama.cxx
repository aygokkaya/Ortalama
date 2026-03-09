#include <stdio.h>
#include <locale.h>
int main()

{
	
	setlocale(LC_ALL, "Turkish");
	
	
	float ders1;
	float ders2;
	float ders3;
	float ders4;
	float ders5;
	float ders6;
	float ders7;
	float ders8;
	float ders9;
	float ders10;
	float ders11;
	float ders12;
	float ders13;
	float derssaati1 = 6;
	float derssaati2 = 5;
	float derssaati3 = 4;
	float derssaati4 = 4;
	float derssaati5 = 4;
	float derssaati6 = 2;
	float derssaati7 = 2;
	float derssaati8 = 1;
	float derssaati9 = 2;
	float derssaati10 = 2;
	float derssaati11 = 1;
	float derssaati12 = 4;
	float derssaati13 = 2;
	float ortalama;

	printf("=====================================\n");
	printf("11.Sınıf Sayısal Ortalama Hesaplayıcı\n");
	printf("=====================================\n");
	
	
	printf("Matematik ortalamasini giriniz.:");
	scanf("%f", &ders1);

	printf("Edebiyat ortalamasini giriniz.:");
	scanf("%f", &ders2);

	printf("Fizik ortalamasini giriniz.:");
	scanf("%f", &ders3);

	printf("Kimya ortalamasini giriniz.:");
	scanf("%f", &ders4);

	printf("Biyoloji ortalamasini giriniz.:");
	scanf("%f", &ders5);

	printf("Tarih ortalamisini giriniz.:");
	scanf("%f", &ders6);

	printf("Felsefe ortalamasini giriniz.:");
	scanf("%f", &ders7);

	printf("Turk Dusunce Tarihi ortalamasini giriniz.:");
	scanf("%f", &ders8);

	printf("Beden Egitimi ortalamasini giriniz.:");
	scanf("%f", &ders9);

	printf("Muzik ortalamasini giriniz.:");
	scanf("%f", &ders10);

	printf("Astronomi ortalamasini giriniz.:");
	scanf("%f", &ders11);

	printf("Ingilizce ortalamasini giriniz.:");
	scanf("%f", &ders12);

	printf("Din Kulturu ortalamasini giriniz.:");
	scanf("%f", &ders13);
	
	ortalama = ((ders1 * derssaati1) + (ders2 * derssaati2) + (ders3 * derssaati3) + (ders4 * derssaati4) + (ders5 * derssaati5) + (ders6 * derssaati6) + (ders7 * derssaati7) + (ders8 * derssaati8) + (ders9 * derssaati9) + (ders10 * derssaati10) + (ders11 * derssaati11) + (ders12 * derssaati12) + (ders13 * derssaati13)) / (derssaati1 + derssaati2 + derssaati3 + derssaati4 + derssaati5 + derssaati6 + derssaati7 + derssaati8 + derssaati9 + derssaati10 + derssaati11 + derssaati12 + derssaati13);
	
	printf("%.4f\n", ortalama);

																																																																																																													return 0;
																																																									
	return 0;																																																							
}
