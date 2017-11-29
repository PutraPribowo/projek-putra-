#include<iostream>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;

void Kamera1(){
    menu1 :
    system("cls");
    int bil1, jam, harga, harga2, harga1, waktu, sewa, hargajual, hargacam, kode, hargabeli, hargasewa, tarifsewa, hargabeli1;
    cout<<"\n|=============================================================================|\n";
    cout<<"|                               Menu E-Capture                                |\n";
    cout<<"|=============================================================================|\n";
    cout<<"|                            1. Jual Kamera                                   |\n";
    cout<<"|                            2. Beli Kamera*                                  |\n";
    cout<<"|                            3. Sewa Kamera *                                 |\n";
    cout<<"|                            4. Total Belanjaan                               |\n";
    cout<<"|=============================================================================|\n";
    cout<<"Mohon maaf atas ketidaknyamanannya, sistem kami memakasa anda untuk\n";
    cout<<"Memilih menu bertanda bintang\n";
    cout<<"Ini bertujuan agar akumulasi keranjang anda akurat\n\n";
    cout<<"Pilih Menu  : ";
    cin>>bil1;
    system("cls");
    if (bil1==1)       {
        cout<<"|=============================================================================|\n";
        cout<<"|                                Jual Kamera                                  |\n";
        cout<<"|=============================================================================|\n";
        cout<<"Pada menu ini Anda hanya dapat memperkirakan harga jual kamera\n\n";
        cout<<"Untuk Transaksi penjualan, hanya dilakukan secara offline\n\n";
        cout<<"|=============================================================================|\n";
        cout<<"Masukkan kode Anda : ";
        cin>>kode;
        if (kode==101||102|111|112)
        hargacam = 2900000;

        else if (kode==103)
        hargacam = 5000000;

        else if (kode==104||114||115||119||122||127)
        hargacam = 600000;

        else if (kode==105||106||107||108||109||110)
        hargacam = 8000000;

        else if (kode==113||116||117||118||119||120||121||123||124||125||126)
        hargacam = 9000000;

        else if (kode==128||129||130)
        hargacam = 10000000;

        cout<<"\nHarga max kamera yang anda pilih : Rp. "<<hargacam<<endl;
        cout<<"Jika Anda berminat menjual kepada kami\n";
        cout<<"Silahkan mengunjungi toko kami secara offline\n\n";
        getch ();
        goto menu1;
    }

    else if (bil1==2) {
        cout<<"|=============================================================================|\n";
        cout<<"|                                 Beli Kamera                                 |\n";
        cout<<"|=============================================================================|\n";
        cout<<"Masukkan Kode : ";
        cin>>kode;
        if (kode==101||102|111|112)
        hargacam = 2500000;

        else if (kode==103)
        hargacam = 6000000;

        else if (kode==104||114||115||119||122||127)
        hargacam = 720000;

        else if (kode==105||106||107||108||109||110)
        hargacam = 8900000;

        else if (kode==113||116||117||118||119||120||121||123||124||125||126)
        hargacam = 9800000;

        else if (kode==128||129||130)
        hargacam = 19000000;
        cout<<"Harga kamera yang anda pilih : Rp. "<<hargacam<<endl;
        cout<<"1. Beli          2. Batalkan         3. Menu\n\n";
        cout<<"Pilih        : ";
        cin>>harga1;
            if (harga1==1)
                hargabeli = hargacam;
            else if (harga1==2)
                hargabeli = 0;
            else if (harga1==3){
                cout<<"Terima Kasih sudah berkunjung";
                getch();
}
            else
                hargabeli = 0;
                goto menu1;

        }

    else if (bil1==3) {
        cout<<"|=============================================================================|\n";
        cout<<"|                                Sewa Kamera                                  |\n";
        cout<<"|=============================================================================|\n";
        cout<<"Masukkan Kode : ";
        cin>>kode;
        if (kode==101||102||103||111||118||114||115||124)
        tarifsewa = 5000;

        else if (kode==104||105||106||107||110||116||122||116||117)
        tarifsewa = 6500;

        else if (kode==108||109||112||113||119||120||121||123)
        tarifsewa = 7000;

        else if (kode==122||125||126||127||128||129||130)
        tarifsewa = 10000;


        cout<<"Harga Sewa per jam adalah Rp. "<<tarifsewa<<endl;
        cout<<"\n\nWaktu sewa anda (dalam satuan jam): ";
        cin>>waktu;
        sewa = waktu*tarifsewa;
        cout<<"\n\nHarga Sewa Anda: "<<sewa<<endl;
        cout<<"1. Beli          2. Batalkan         3. Menu\n\n";
        cout<<"Pilih        : ";
        cin>>harga2;
            if (harga2==1)
                hargabeli1 = sewa;
            else if (harga2==2)
                hargabeli1 = 0;
            else if (harga2==3){
                cout<<"Terima Kasih sudah berkunjung";
                getch();
}
            else
                hargabeli1 = 0;
                goto menu1;
    }

    else if (bil1==4) {
        cout<<"Harga Kamera : "<<hargabeli<<endl;
        cout<<"Harga sewa   :"<<hargabeli1<<endl;
        harga = hargabeli+hargabeli1;
        cout<<"Jumlah Harga :"<<harga;
            }

    else if (bil1==9)
        goto menu1;
        else
        cout<<"ERROR!!\n";



}

int main()
{
int menu, cam, jual, canon, pilih, harga, harga1, harga2;
char jawab;
long saldo;

system("cls");
menu :
cout<<"|=============================================================================|\n\n";
cout<<"|                        SELAMAT DATANG DI E-CAPTURE                          |\n\n";
cout<<"|=============================================================================|\n\n";
cout<<"             Kami Melayani Jual-Beli dan Penyewaan Berbagai Jenis Kamera        \n\n";
cout<<"|=============================================================================|\n\n";
cout<<" 0. Lanjut\n\n";
cout<<" 9. Exit\n\n";
cout<<" Pilih Menu (0/9)  : ";
cin >> menu;

if(menu==0) {
system("cls");
cout<<"\n|=============================================================================|\n\n";
cout<<"|                              Menu E-Capture                                 |\n\n";
cout<<"|=============================================================================|\n\n";
cout<<"|                    Silahkan meilih kamera yang anda inginkan                |\n\n\n\n";
cout<<"1.  Canon Powershot SX410 IS       11. Nikon D3100         21. OLYMPUS E5\n";
cout<<"2.  Canon Powershot SX4OO IS       12. Nikon D3200         22. PANASONIC GF1\n";
cout<<"3.  Canon EOS 500D Kit             13. Nikon D5200         23. PANASONIC ZR3\n";
cout<<"4.  Canon EOS 550D Kit             14. Nikon D7000         24. PANASONIC FZ100\n";
cout<<"5.  Canon EOS 60D Kit              15. Nikon D7200         25. PENTAX  Q\n";
cout<<"6.  Canon EOS 600D Kit             16. Nikon D600          26. PENTAX   KR\n";
cout<<"7.  Canon EOS 700D Kit             17. Nikon D800          27. PENTAX   KM\n";
cout<<"8.  Canon EOS 1000 Kit             18. Nikon D800E         28. FUJIFILM X-M1  \n";
cout<<"9.  Canon EOS 1100 Kit             19. OLYMPUS E620        29. FUJIFILM X-A2 \n";
cout<<"10. Canon EOS 1Ds Mark III Kit     20. OLYMPUS XZ 1        30. FUJIFILM X E2 \n\n";
cout<<"Pilihan Anda : ";
cin>>pilih; }
system("cls");
    switch(pilih){
    case 1:
    cout<<"Kode Anda 101\n";
    cout<<"Masukkan Kode ini bila diminta\n";
    cout<<"Tekan Enter untuk melanjutkan\n";
    getch();
    Kamera1(); break;

    case 2:
    cout<<"Kode Anda 102\n";
    cout<<"Masukkan Kode ini bila diminta\n";
    cout<<"Tekan Enter untuk melanjutkan\n";
    getch();
    Kamera1(); break;

    case 3:
    cout<<"Kode Anda 103\n";
    cout<<"Masukkan Kode ini bila diminta\n";
    cout<<"Tekan Enter untuk melanjutkan\n";
    getch();
    Kamera1(); break;

    case 4:
    cout<<"Kode Anda 104\n";
    cout<<"Masukkan Kode ini bila diminta\n";
    cout<<"Tekan Enter untuk melanjutkan\n";
    getch();
    Kamera1(); break;

    case 5:
    cout<<"Kode Anda 105\n";
    cout<<"Masukkan Kode ini bila diminta\n";
    cout<<"Tekan Enter untuk melanjutkan\n";
    getch();
    Kamera1(); break;

    case 6:
    cout<<"Kode Anda 106\n";
    cout<<"Masukkan Kode ini bila diminta\n";
    cout<<"Tekan Enter untuk melanjutkan\n";
    getch();
    Kamera1(); break;

    case 7:
    cout<<"Kode Anda 107\n";
    cout<<"Masukkan Kode ini bila diminta\n";
    cout<<"Tekan Enter untuk melanjutkan\n";
    getch();
    Kamera1(); break;

    case 8:
    cout<<"Kode Anda 108\n";
    cout<<"Masukkan Kode ini bila diminta\n";
    cout<<"Tekan Enter untuk melanjutkan\n";
    getch();
    Kamera1(); break;

    case 9:
    cout<<"Kode Anda 109\n";
    cout<<"Masukkan Kode ini bila diminta\n";
    cout<<"Tekan Enter untuk melanjutkan\n";
    getch();
    Kamera1(); break;

    case 10:
    cout<<"Kode Anda 110\n";
    cout<<"Masukkan Kode ini bila diminta\n";
    cout<<"Tekan Enter untuk melanjutkan\n";
    getch();
    Kamera1(); break;

    case 11:
    cout<<"Kode Anda 111\n";
    cout<<"Masukkan Kode ini bila diminta\n";
    cout<<"Tekan Enter untuk melanjutkan\n";
    getch();
    Kamera1(); break;

    case 12:
    cout<<"Kode Anda 112\n";
    cout<<"Masukkan Kode ini bila diminta\n";
    cout<<"Tekan Enter untuk melanjutkan\n";
    getch();
    Kamera1(); break;

    case 13:
    cout<<"Kode Anda 113\n";
    cout<<"Masukkan Kode ini bila diminta\n";
    cout<<"Tekan Enter untuk melanjutkan\n";
    getch();
    Kamera1(); break;

    case 14:
    cout<<"Kode Anda 114\n";
    cout<<"Masukkan Kode ini bila diminta\n";
    cout<<"Tekan Enter untuk melanjutkan\n";
    getch();
    Kamera1(); break;

    case 15:
    cout<<"Kode Anda 115\n";
    cout<<"Masukkan Kode ini bila diminta\n";
    cout<<"Tekan Enter untuk melanjutkan\n";
    getch();
    Kamera1(); break;

    case 16:
    cout<<"Kode Anda 116\n";
    cout<<"Masukkan Kode ini bila diminta\n";
    cout<<"Tekan Enter untuk melanjutkan\n";
    getch();
    Kamera1(); break;

    case 17:
    cout<<"Kode Anda 117\n";
    cout<<"Masukkan Kode ini bila diminta\n";
    cout<<"Tekan Enter untuk melanjutkan\n";
    getch();
    Kamera1(); break;

    case 18:
    cout<<"Kode Anda 118\n";
    cout<<"Masukkan Kode ini bila diminta\n";
    cout<<"Tekan Enter untuk melanjutkan\n";
    getch();
    Kamera1(); break;

    case 19:
    cout<<"Kode Anda 119\n";
    cout<<"Masukkan Kode ini bila diminta\n";
    cout<<"Tekan Enter untuk melanjutkan\n";
    getch();
    Kamera1(); break;

    case 20:
    cout<<"Kode Anda 120\n";
    cout<<"Masukkan Kode ini bila diminta\n";
    cout<<"Tekan Enter untuk melanjutkan\n";
    getch();
    Kamera1(); break;

    case 21:
    cout<<"Kode Anda 121\n";
    cout<<"Masukkan Kode ini bila diminta\n";
    cout<<"Tekan Enter untuk melanjutkan\n";
    getch();
    Kamera1(); break;

    case 22:
    cout<<"Kode Anda 122\n";
    cout<<"Masukkan Kode ini bila diminta\n";
    cout<<"Tekan Enter untuk melanjutkan\n";
    getch();
    Kamera1(); break;

    case 23:
    cout<<"Kode Anda 123\n";
    cout<<"Masukkan Kode ini bila diminta\n";
    cout<<"Tekan Enter untuk melanjutkan\n";
    getch();
    Kamera1(); break;

    case 24:
    cout<<"Kode Anda 124\n";
    cout<<"Masukkan Kode ini bila diminta\n";
    cout<<"Tekan Enter untuk melanjutkan\n";
    getch();
    Kamera1(); break;

    case 25:
    cout<<"Kode Anda 125\n";
    cout<<"Masukkan Kode ini bila diminta\n";
    cout<<"Tekan Enter untuk melanjutkan\n";
    getch();
    Kamera1(); break;

    case 26:
    cout<<"Kode Anda 126\n";
    cout<<"Masukkan Kode ini bila diminta\n";
    cout<<"Tekan Enter untuk melanjutkan\n";
    getch();
    Kamera1(); break;

    case 27:
    cout<<"Kode Anda 127\n";
    cout<<"Masukkan Kode ini bila diminta\n";
    cout<<"Tekan Enter untuk melanjutkan\n";
    getch();
    Kamera1(); break;

    case 28:
    cout<<"Kode Anda 128\n";
    cout<<"Masukkan Kode ini bila diminta\n";
    cout<<"Tekan Enter untuk melanjutkan\n";
    getch();
    Kamera1(); break;

    case 29:
    cout<<"Kode Anda 129\n";
    cout<<"Masukkan Kode ini bila diminta\n";
    cout<<"Tekan Enter untuk melanjutkan\n";
    getch();
    Kamera1(); break;

    case 30:
    cout<<"Kode Anda 130\n";
    cout<<"Masukkan Kode ini bila diminta\n";
    cout<<"Tekan Enter untuk melanjutkan\n";
    getch();
    Kamera1(); break;

    default :
    getch();
    goto menu;
    break;
}
}
