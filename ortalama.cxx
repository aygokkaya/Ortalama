#include <stdio.h>

int main()

{
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
	float derssaati1;
	float derssaati2;
	float derssaati3;
	float derssaati4;
	float derssaati5;
	float derssaati6;
	float derssaati7;
	float derssaati8;
	float derssaati9;
	float derssaati10;
	float derssaati11;
	float derssaati12;
	float derssaati13;
	float derssaati14;
	float ortalama;

	printf("Sayisal ortalama hesaplayiciya hosgeldiniz!\n");

	printf("Matematik ortalamasini giriniz.:");
	scanf("%f", &ders1);
	printf("Matematik haftalik ders saatini giriniz.:");
	scanf("%f", &derssaati1);

	printf("Edebiyat ortalamasini giriniz.:");
	scanf("%f", &ders2);
	printf("Edebiyat haftalik ders saatini giriniz.:");
	scanf("%f", &derssaati2);

	printf("Fizik ortalamasini giriniz.:");
	scanf("%f", &ders3);
	printf("Fizik haftalik ders saatini giriniz.:");
	scanf("%f", &derssaati3);

	printf("Kimya ortalamasini giriniz.:");
	scanf("%f", &ders4);
	printf("Kimya haftalik ders saatini giriniz.:");
	scanf("%f", &derssaati4);

	printf("Biyoloji ortalamasini giriniz.:");
	scanf("%f", &ders5);
	printf("Biyoloji haftalik ders saatini giriniz.:");
	scanf("%f", &derssaati5);

	printf("Tarih ortalamisini giriniz.:");
	scanf("%f", &ders6);
	printf("Tarih haftalik ders saatini giriniz.:");
	scanf("%f", &derssaati6);

	printf("Felsefe ortalamasini giriniz.:");
	scanf("%f", &ders7);
	printf("Felsefe haftalik ders saatini giriniz.:");
	scanf("%f", &derssaati7);

	printf("Turk Dusunce Tarihi ortalamasini giriniz.:");
	scanf("%f", &ders8);
	printf("Turk Dusunce Tarihi haftalik ders saatini giriniz.:");
	scanf("%f", &derssaati8);

	printf("Beden Egitimi ortalamasini giriniz.:");
	scanf("%f", &ders9);
	printf("Beden Egitimi haftalik ders saatini giriniz.:");
	scanf("%f", &derssaati9);

	printf("Muzik ortalamasini giriniz.:");
	scanf("%f", &ders10);
	printf("Muzik haftalik ders saatini giriniz.:");
	scanf("%f", &derssaati10);

	printf("Astronomi ortalamasini giriniz.:");
	scanf("%f", &ders11);
	printf("Astronomi haftalik ders saatini giriniz..:");
	scanf("%f", &derssaati11);

	printf("Ingilizce ortalamasini giriniz.:");
	scanf("%f", &ders12);
	printf("Ingilizce haftalik ders saatini giriniz.:");
	scanf("%f", &derssaati12);

	printf("Din Kulturu ortalamasini giriniz.:");
	scanf("%f", &ders13);
	printf("Din Kulturu haftalik ders saatini giriniz.:");
	scanf("%f", &derssaati13);

	ortalama = ((ders1 * derssaati1) + (ders2 * derssaati2) + (ders3 * derssaati3) + (ders4 * derssaati4) + (ders5 * derssaati5) + (ders6 * derssaati6) + (ders7 * derssaati7) + (ders8 * derssaati8) + (ders9 * derssaati9) + (ders10 * derssaati10) + (ders11 * derssaati11) + (ders12 * derssaati12) + (ders13 * derssaati13)) / (derssaati1 + derssaati2 + derssaati3 + derssaati4 + derssaati5 + derssaati6 + derssaati7 + derssaati8 + derssaati9 + derssaati10 + derssaati11 + derssaati12 + derssaati13);
	
	printf("%.4f\n", ortalama);

																																																									
																																																									return 0;
																																																									
																																																									
}
