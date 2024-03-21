//1.) - Algoritma Insertion Sort memulai dengan menganggap bahwa elemen pertama dalam array telah diurutkan
// - Kemudian untuk setiap elemen berikutnya dalam array algoritma membandingkannya dengan elemen" sebelumnya yang telah diurutkan
// - Algoritma terus membandingkan elemen tersebut dengan elemen" sebelumnya sampai menemukan tempat yang tepat di mana elemen tersebut harus disisipkan

//2.) - Setelah menemukan tempat yang tepat untuk menyisipkan elemen, algoritma akan memindahkan elemen tersebut ke posisi yang benar
// - Ini dilakukan dengan cara menggeser elemen" yang lebih besar satu posisi ke kanan untuk membuat ruang bagi elemen yang akan disisipkan
// - Ketika tempat yang tepat ditemukan, elemen yang sedang diperiksa akan ditempatkan pada posisi yang benar di antara elemen" yang lain

//3.) Perbandingan:
// - Algoritma Selection Sort mencari elemen terkecil(atau terbesar, tergantung pada apakah kita ingin mengurutkan secara ascending atau descending) dari array.
// - Untuk setiap iterasi, algoritma memindai array untuk menemukan elemen terkecil yang belum diurutkan dan membandingkannya dengan elemen" lain yang belum diurutkan.

// Penukaran:
// - Setelah menemukan elemen terkecil, algoritma akan menukar elemen tersebut dengan elemen pertama dari bagian array yang belum diurutkan.
// - Dengan cara ini, elemen terkecil akan diposisikan pada tempat yang benar dalam array yang diurutkan.

// Penjelasan: Untuk mengetahui jumlah langkah yang dilakukan dalam algoritma sortir, kita dapat menghitung jumlah iterasi atau perbandingan yang terjadi selama proses pengurutan.
// Dalam algoritma Insertion Sort, jumlah langkah dapat dihitung sebagai jumlah perbandingan dan jumlah penukaran yang terjadi.
// Sedangkan dalam algoritma Selection Sort, jumlah langkah dapat dihitung sebagai jumlah perbandingan dan jumlah penukaran yang terjadi juga.



#include <iostream>
using namespace std;

int Yola[38];
int n;

void input() {
	while (true) {
		cout << "Masukkan banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
		}
	}
	cout << endl;
	cout << "======================" << endl;
	cout << "Masukkan  Elemen Array" << endl;
	cout << "======================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> Yola[i];
	}
}

void InsertionSort() {
	int i, temp, j;

	for (i = 1; i <= n - 1; i++) {

		temp = Yola[i];

		j = i - 1;

		while (j >= 0 && Yola[j] > temp)
		{
			Yola[j + 1] = Yola[j];
			j--;
		}
		Yola[j + 1] = temp;
	}
}

void display() {
	cout << endl;
	cout << "====================" << endl;
	cout << "Element Array yang telah tersusun" << endl;
	cout << "====================" << endl;
	cout << endl;
	for (int j = 0; j < n; j++) {
		cout << Yola[j];
		if (j < n - 1) {
			cout << " --> ";
		}
	}
	cout << endl;
	cout << endl;
	cout << "Jumlah pass = " << n - 1 << endl;
	cout << endl;
}

int main()
{
	input();
	InsertionSort();
	display();

	system("pause");
	return 0;
}