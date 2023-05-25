#include <iostream>
#include <cmath>

using namespace std;
int main() {
	setlocale(LC_ALL, "Turkish");
	
	cout << "* * * * * * * * * * * * *" << endl;
	cout << "*                       *" << endl;
	cout << "*                       *" << endl;
	cout << "*    Zyra Software      *" << endl;
	cout << "*                       *" << endl;
	cout << "*                       *" << endl;
	cout << "*************************" << endl << endl << endl;



	

	
	//1 den 20`ye kadar tüm yazıları yazdıran bir for döngüsü


	int sayi; // Kullanıcıdan Sayi girmesini istedik
	cout << " Lütfen Sayıyı Girin ";

	cin >> sayi; // sayiyi aldık

	int sonuc = 1; // sonucu 1e atadık şuanlık öyle.


	for (int i = 1; i <= sayi; i++) { // i 1 değerini verdik dögü şartı ise i sayısı sayidan küçük eşitse i değerini 1 arttır.
		sonuc = sonuc * i; // kullanıcı 4 girdi diyelim. 1 *1 = 1, 1 * 2 = 2; 2*3 = 6, 6*4 = 24
	}

	cout << sonuc;
	
	return 0;
	

	
	
	
	
	
	
}
