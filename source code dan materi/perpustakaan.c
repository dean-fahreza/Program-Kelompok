#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu(int pil);
int pil;
int main(void)
{
    menu(pil);
    system("pause");
    return (0);
}
void menu(int pil)
{
    struct data_nilai
    {
        char nomor[20], nama[50];
    };
    int a, b;
    char nama_siswa[30], npm[15];
    struct data_nilai buku[50];
    printf("==================================");
    printf("\n\nMasukkan Nama : ");
    scanf("%[^\n]", nama_siswa);
    printf("Masukkan NPM : ");
    scanf("%s", &npm);

    printf("\n\n\t\t\tDATA PEMINJAMAN BUKU\n");
    printf("\t\t\t--------------------");
    printf("\n\nMasukan Jumlah Buku : ");
    scanf("%d", &a);
    if (a < 10)
    {
        for (b = 0; b < a; b++)
        {
            printf("\nData Peminjaman Buku ke %d\n\n", b + 1);
            printf("Masukan Nomor Buku : ");
            scanf("\n %s", &buku[b].nomor);
            printf("Masukan Judul Buku: ");
            scanf("%[^\n]s", &buku[b].nama);
            system("CLS");
            printf("\n\n\t\t\tDATA PEMINJAMAN BUKU\n");
            printf("\t\t\t--------------------\n");
        }
        system("CLS");
        printf("\n\n\t\t\tDATA PEMINJAMAN BUKU\n");
        printf("\t\t\t--------------------\n");
        printf("\n");
        printf("-------------------------------------------------------");
        printf("\n Nomor\t\tJudul Buku\n");
        printf("-------------------------------------------------------");
        for (b = 0; b < a; b++)
        {
            printf("\n %s\t", buku[b].nomor);
            printf("\t %s \t", buku[b].nama);
        }
        printf("\n\n\n\n --------------TERIMAKASIH-------------- \n");
    }
    else
    {
        printf("\nMaaf, Batas Peminjaman Hanya 10 Buku....!!!");
    }
    printf("\n\n");
}

/*
program dah dicompile
tinggal dijalankan saja .exe nya tuh.
*/