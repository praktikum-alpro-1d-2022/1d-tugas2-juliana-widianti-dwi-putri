#include <iostream>
 using namespace std;

 int main() {
 float hasil,angka1,angka2,angka3,jumlah1;
 int p;
 cout<<"Luas bangun datar apa yang ingin anda hitung ?\n";
 cout<<"1. Persegi\n";
 cout<<"2. Persegi Panjang\n";
 cout<<"3. Segitiga\n";
 cout<<"4. Trapesium\n";
 cout<<"5. Jajar Genjang\n";
 cout<<"6. Belah Ketupat\n";
 cout<<"7. Layang-Layang\n";
 cout<<"8. Lingkaran\n";
 cout<<"9. Keluar\n";
 cout<<"Pilihlah salah satu angka yang ada diatas : ";
 cin>>p;

  if (p == 1)
  {
	cout << "Masukan angka sisi persegi : ";
	cin >> angka1;
	hasil = angka1 * angka1;
	
	cout << "Luas Persegi adalah " << hasil;
 }
 else if (p == 2)
 {
	cout << "Masukan angka Panjang : ";
	cin >> angka1;
	cout << "Masukan angka Lebar : ";
	cin >> angka2;
	hasil = angka1 * angka2;
	
	cout << "Luas Persegi Panjang adalah " << hasil;
 }
 else if (p == 3)
 {
	cout << "Masukan angka alas segitiga : ";
	cin >> angka1;
	cout << "Masukan angka tinggi segitiga : ";
	cin >> angka2;
	hasil = 0.5 * angka1 * angka2;
	
	cout << "Luas Segitiga adalah " << hasil;
 }
else if (p == 4)
 {
	cout << "Masukan angka sisi pertama : ";
	cin >> angka1;
	cout << "Masukan angka sisi kedua : ";
	cin >> angka2;
	cout << "Masukan angka tinggi trapesium : ";
	cin >> angka3;
	hasil = 0.5 * (angka1 + angka2) * angka3;
	
	cout << "Luas Trapesium adalah " << hasil;
 }
else if (p == 5)
 {
	cout << "Masukan angka alas : ";
	cin >> angka1;
	cout << "Masukan angka tinggi : ";
	cin >> angka2;
	hasil = angka1 * angka2;
	
	cout << "Luas Jajar Genjang adalah " << hasil;
 }
else if (p == 6)
 {
	cout << "Masukan angka diameter pertama : ";
	cin >> angka1;
	cout << "Masukan angka diameter kedua : ";
	cin >> angka2;
	hasil = 0.5 * angka1 * angka2;
	
	cout << "Luas Belah Ketupat adalah " << hasil;
 }
else if (p == 7)
 {
	cout << "Masukan angka diameter pertama : ";
	cin >> angka1;
	cout << "Masukan angka diameter kedua : ";
	cin >> angka2;
	hasil = 0.5 * angka1 * angka2;
	
	cout << "Luas Layang-Layang adalah " << hasil;
 }
else if (p == 8)
 {
	cout << "Masukan angka jari jari lingkarang : ";
	cin >> angka1;
	hasil = 3.14 * angka1 * angka1;
	
	cout << "Luas Lingkaran adalah " << hasil;
 }
else if (p == 9)
 {
	return 0;
 }  else{
    cout<<"Maaf Program Tidak Tersedia";
 }
  return 0;
}