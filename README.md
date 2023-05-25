# cpp-for-dongusu-basit
c++ ile basit for döngüsü


=>> www.zyrasoftware.com.tr


=>> https://www.instagram.com/zyrasoftware/


# DİKKAT

	int sayi; // Kullanıcıdan Sayi girmesini istedik
	cout << " Lütfen Sayıyı Girin ";

	cin >> sayi; // sayiyi aldık

	int sonuc = 1; // sonucu 1e atadık şuanlık öyle.


	for (int i = 1; i <= sayi; i++) { // i 1 değerini verdik dögü şartı ise i sayısı sayidan küçük eşitse i değerini 1 arttır.
		sonuc = sonuc * i; // kullanıcı 4 girdi diyelim. 1 *1 = 1, 1 * 2 = 2; 2*3 = 6, 6*4 = 24
	}

	cout << sonuc;
	
	return 0;
  
  
  Kullanıcıdan bir sayi girmesini istedik. Bu sayiyi sayi değişkeninde tuttuk.
  
  
  sonuc değerine 1 atadık.
  
  
  for döngüsünde i değerine 1 verdik. i değeri 1 den başlıyor. dögüdeki şart i sayiya küçük eşitse i değerini arttık
  
  sonuc = sonuc * i; bu kısımda sonuc 1di. i 1den başlayıp sayi değerine kadar gidiyor ve giderken 1 ile kendisini çarpıyor.
  
  örneğin kullanıcı sayıyı 4 girdi
  
**1**.Adım: "i" değişkeni 1 değerine atanır. Şu an "i" değeri 1'dir.


**2**.Adım: sonuc = sonuc * i; (sonuc = 1 * 1;) Burada "sonuc" değişkeni, kendisiyle "i" değerinin çarpımı olan 1 olur. Yani, sonuc = 1.



**3**.Adım: "i" değeri 1 artırılır, yani "i" şu an 2 olur.


**4**.Adım: sonuc = sonuc * i; (sonuc = 1 * 2;) Bu adımda "sonuc" değişkeni, kendisiyle "i" değerinin çarpımı olan 2 olur. Yani, sonuc = 2.

**5**.Adım: "i" değeri 1 artırılır, yani "i" şu an 3 olur.


**6**.Adım: sonuc = sonuc * i; (sonuc = 2 * 3;) Bu adımda "sonuc" değişkeni, kendisiyle "i" değerinin çarpımı olan 6 olur. Yani, sonuc = 6.


**7**.Adım: "i" değeri 1 artırılır, yani "i" şu an 4 olur.


**8**.Adım: sonuc = sonuc * i; (sonuc = 6 * 4;) Bu adımda "sonuc" değişkeni, kendisiyle "i" değerinin çarpımı olan 24 olur. Yani, sonuc = 24.
