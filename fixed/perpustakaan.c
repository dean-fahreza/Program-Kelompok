#include <stdio.h>
#include <string.h>

struct daftar {
    char nama[25], npm[10];
};

struct pinjam {
    char namap[25], status, npmp[10];
    char judulbuku[15], Pengarang[15];
    int tglpinjam, tglkembali;
    int kodepinjam, kodebuku;
};

int main() {
    system("cls");
    struct daftar anggota;
    struct pinjam buku[11];
    char yn = "n";
    int pil, jmhbuku, jmlpinjam, harga, kodepin;
    int b = 1, jml = 1;
    int ditemukan;

    while(1) {
        yn = 'n';
        printf("----- Perpustakaan -----\n");
        printf("--------- Menu ---------\n");
        printf("1. Daftar             \n");
        printf("2. Peminjaman         \n");
        printf("3. Pengembalian       \n");
        printf("4. Exit               \n");
        printf("------------------------\n");
        printf("Masukkan Pilihan Anda = ");scanf("%d", &pil);
        printf("\n");

    if(pil == 1) {
        while(yn == 'n' || yn == 'N'){
            system("cls");
            printf("\t\t\tPENDAFTARAN\n");
            printf("Nama : ");scanf("\n%[^\n]", anggota.nama);
            printf("NPM  : ");scanf("\n%s", anggota.npm);
            printf("Simpan Data ? (y/n) : ");scanf("\n%c", &yn);
            if (yn == 'y' || yn == 'Y'){
                printf("\nData Berhasil Disimpan\n");
                system("pause");
                system("cls");
            }
        }
    } else if(pil == 2) {
        yn = 'y';
        for(;(yn == 'y' || yn == 'Y'); b++){
            system("cls");
            printf("\n\n\t\t\tDATA PEMINJAMAN BUKU\n");
            printf("\t\t\t--------------------\n");
            printf("Data Peminjaman Buku ke %d\n\n", b); //masukkan data buku yang mau dipinjam dan peminjamnya
            printf("Kode Pinjaman  : ");scanf("\n%d", &buku[b].kodepinjam);
            printf("Kode Buku      : ");scanf("\n%d", &buku[b].kodebuku);
            printf("Judul Buku     : ");scanf("\n%[^\n]", buku[b].judulbuku);
            printf("Nama Penyewa   : ");scanf("\n%[^\n]", buku[b].namap);
            printf("NPM            : ");scanf("\n%s", buku[b].npmp);
            printf("Tanggal Pinjam (DD/MM/YYYY)       : ");scanf("%d", &buku[b].tglpinjam);
            printf("Tanggal Pengembalian (DD/MM/YYYY) : ");scanf("%d", &buku[b].tglkembali);
            printf("Banyak Buku Yang di Pinjam        : ");scanf("%d", &jmhbuku);
            harga = jmhbuku * 10000;
            printf("Harga Sewa     : %d\n", harga);
            printf("Status dipinjam ? (y/n) : ");scanf("\n%c", &buku[b].status);
            printf("Apakah Anda Ingin Menambahkan Data Lagi ? (y/n) : ");scanf("\n%c", &yn);
            if (yn == 'Y' || yn == 'y'){
            } else {
                printf("\nData Berhasil Disimpan\n");
                system("pause");
                system("cls");
            }
        }
    } else if(pil == 3) {
        yn = 'n';
        while(yn == 'N' || yn == 'n'){
            system("cls");
            printf("Masukan kode Peminjaman : ");scanf("\n%d", &kodepin); //memasukan kode peminjaman
            printf("---------------------------\n");
			ditemukan = 0;
			for(int c=1;c <= b;c++){
				if(buku[c].kodepinjam == kodepin){
                    ditemukan = 1;
                    printf("\t\t\tDATA PENGEMBALIAN BUKU\n");
					printf("Nama Penyewa : %s\n", buku[c].namap);
					printf("NPM          : %s\n", buku[c].npmp);
					printf("Judul Buku   : %s\n", buku[c].judulbuku);
					printf("Tanggal Pinjam (DD/MM/YYYY)       : %d\n", buku[c].tglpinjam);
					printf("Tanggal Pengembalian (DD/MM/YYYY) : %d\n", buku[c].tglkembali);
					printf("Banyak Buku Yang di Pinjam        : %d\n", jmhbuku);
					harga = jmhbuku * 10000;
					printf("Harga Sewa   : %d\n", harga);
					printf("Status       : %c\n", buku[c].status);
					if((buku[c].status == 'y') || (buku[c].status == 'Y')){
						printf(" (dipinjam) ");
					}else{
						printf(" (dikembalikan) ");
					}
					printf("\nSudah dikembalikan ? (y/n) : ");scanf("\n%c", &yn);
					if((yn == 'Y') || (yn == 'y')){
						printf("\nData Berhasil Disimpan\n");
						system("pause");
						system("cls");
					}else{
					    yn = 'y';
						printf("\nData Berhasil Disimpan\n");
						system("pause");
						system("cls");
					}
					break;
				}
			}
			if(ditemukan == 0){
			    printf("\nData Tidak Di temukan");
			    printf("\nApakah ingin mengulang? (y/n) : ");scanf("\n%c", &yn);
			    if(yn == 'Y' || yn == 'y'){
			        system("cls");
                }else{
                    system("cls");
                }
            }
        }
	} else if(pil == 4) { //keluar
		while(1){
		    printf("---------- Anda Telah Keluar ----------\n");
		    printf("\n--------------TERIMAKASIH--------------\n");
		    system("pause");
		    system("cls");
		}
	} else { //jika inputan semua salah
        printf("Anda Salah Input\n");
        system("pause");
		system("cls");
	}
	}
}
