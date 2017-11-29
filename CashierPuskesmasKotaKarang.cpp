#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;
void penanganan1(){
    system("cls");
    cout<<"Penanganan : Angkat Jahitan.\n";
}
void penanganan2(){
    system("cls");
    cout<<"Penanganan : Jahit Luka 3cm.\n";
}

void penanganan3(){
    system("cls");
    cout<<"Penanganan : Jahit Luka 4-6cm.\n";
}

void penanganan4(){
    system("cls");
    cout<<"Penanganan : Debridement Luka.\n";
}

void penanganan5(){
    system("cls");
    cout<<"Penanganan : Pasang Kateter Urine.\n";
}

void penanganan6(){
    system("cls");
    cout<<"Penanganan : Insisi Furunkel/Abses.\n";
}

void penanganan7(){
    system("cls");
    cout<<"Penanganan : IVFD.\n";
}

void penanganan8(){
    system("cls");
    cout<<"Penanganan : Ekstraksi Kuku.\n";
}

void penanganan9(){
    system("cls");
    cout<<"Penanganan : Ekstraksi Corpus Alienum.\n";
}

void penanganan10(){
    system("cls");
    cout<<"Penanganan : Nebulizer/Inhalasi.\n";
}

void penanganan11(){
    system("cls");
    cout<<"Penanganan : Pengobatan Epitaxis.\n";
}

void penanganan12(){
    system("cls");
    cout<<"Penanganan : Oksigen 1 Jam.\n";
}

int main (){
    int jam, cetak;
    int angka, jumlah;
    int kembali[12];
    int bayar[12];
    int biaya[12];
    char back;
    string nama1,nama2, nomor, address;
    cout <<"=================================================================="<<endl;
    cout <<"|              DINAS KESEHATAN KOTA BANDAR LAMPUNG                |"<<endl;
    cout <<"|                PUSKESMAS RAWAT INAP KOTA KARANG                 |"<<endl;
    cout <<"|Jl. Teluk Ratai No.18 Telp. (0721) 480129 Kec. Teluk Betung Timur|"<<endl;
    cout <<"|                        BANDAR LAMPUNG                           |"<<endl;
    cout <<"=================================================================="<<endl;

    cout <<"Nama Pasien     : "; cin>>nama1; cin>>nama2;
    cout <<"Alamat          : "; cin>>address;
    cout <<"Nomor Antrian   : "; cin >>nomor;
    cout <<endl;

    do {
    system ("cls");
    system ("color 30");
    cout<<"\t\tPENANGANAN                               Biaya"<<endl;
    cout<<"\t\t1. Angkat Jahitan                   Rp   15000"<<endl;
    cout<<"\t\t2. Jahit Luka 3cm                   Rp   15000"<<endl;
    cout<<"\t\t3. Jahit Luka 4-6cm                 Rp   65000"<<endl;
    cout<<"\t\t4. Debridement Luka                 Rp   15000"<<endl;
    cout<<"\t\t5. Pasang Kateter Urine             Rp   15000"<<endl;
    cout<<"\t\t6. Insisi Furunkel/Abses            Rp   15000"<<endl;
    cout<<"\t\t7. IVFD                             Rp   15000"<<endl;
    cout<<"\t\t8. Ektraksi Kuku                    Rp   27000"<<endl;
    cout<<"\t\t9. Ekstraksi Corpus Alienum         Rp   27000"<<endl;
    cout<<"\t\t10. Nebulizer/Inhalasi              Rp   27000"<<endl;
    cout<<"\t\t11. Pengobatan Epistaxis            Rp   27000"<<endl;
    cout<<"\t\t12. Oksigen 1 Jam                   Rp    9000"<<endl;
    cout<<""<<endl;
    cout<<"Masukkan kode : ";cin>>angka;
    switch (angka){
    case 1:
        cout<<'\n'<<"Angkat Jahitan"<<endl;
        biaya[1] = 15000;
        cout<<"Total biayanya yaitu : Rp. "<<biaya[1]<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>bayar[1];
        kembali[1]=bayar[1]-biaya[1];
        cout<<"KEMBALI : Rp. "<<kembali[1]<<endl;
        cout<<"Cetak Struk (Y/T) :";
        cin>>back;
        penanganan1();
        cout<<"\t\t\t\t======================================"<<endl;
        cout<<"\t\t\t\t||        STRUK PEMBAYARAN           ||"<<endl;
        cout<<"\t\t\t\t|| Puskesmas Rawat Inap Kota Karang  ||"<<endl;
        cout<<"\t\t\t\t======================================"<<endl;
        cout<<"\t\t\t\tNama             : "<<nama1<<" "<<nama2<<endl;
        cout<<"\t\t\t\tAlamat           : "<<address<<endl;
        cout<<"\t\t\t\tNomor            : "<<nomor<<endl;
        cout<<"\t\t\t\tPenanganan       : Angkat Jahitan"<<endl;
        cout<<"\t\t\t\tTotal Biaya      : Rp. "<<biaya[1]<<endl;
        cout<<"\t\t\t\tBayar            : Rp. "<<bayar[1]<<endl;
        cout<<"\t\t\t\tKembali          : Rp. "<<kembali[1]<<endl;
        cout<<"\t\t\t\t======================================"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t|| Terima Kasih Atas Kunjungan Anda ||"<<endl;
        cout<<"\t\t\t\t||       Semoga Lekas Sembuh        ||"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t======================================"<<endl;
        break;
    case 2:
        cout<<'\n'<<"Jahit Luka 3cm"<<endl;
        biaya[2] = 15000;
        cout<<"Total biayanya yaitu : Rp. "<<biaya[2]<<endl;
        cout<<"DIBAYAR : Rp. "; cin>>bayar[2];
        kembali[2] = bayar[2]-biaya[2];
        cout<<"KEMBALI : Rp. "<<kembali[2]<<endl;
        cout<<"Cetak Struk (Y/T) :";
        cin>>back;
        penanganan2();
        cout<<"\t\t\t\t======================================"<<endl;
        cout<<"\t\t\t\t||        STRUK PEMBAYARAN           ||"<<endl;
        cout<<"\t\t\t\t|| Puskesmas Rawat Inap Kota Karang  ||"<<endl;
        cout<<"\t\t\t\t======================================"<<endl;
        cout<<"\t\t\t\tNama             : "<<nama1<<" "<<nama2<<endl;
        cout<<"\t\t\t\tAlamat           : "<<address<<endl;
        cout<<"\t\t\t\tNomor            : "<<nomor<<endl;
        cout<<"\t\t\t\tPenanganan       : Jahit Luka 3cm"<<endl;
        cout<<"\t\t\t\tBayar            : Rp. "<<bayar[2]<<endl;
        cout<<"\t\t\t\tKembali          : Rp. "<<kembali[2]<<endl;
        cout<<"\t\t\t\tTotal Biaya      : Rp. "<<biaya[2]<<endl;
        cout<<"\t\t\t\t======================================"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t|| Terima Kasih Atas Kunjungan Anda ||"<<endl;
        cout<<"\t\t\t\t||       Semoga Lekas Sembuh        ||"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t======================================"<<endl;
        break;
    case 3:
        cout<<'\n'<<"Jahit Luka 4-6cm"<<endl;
        biaya[3] = 65000;
        cout<<"Total biayanya yaitu : Rp. "<<biaya[3]<<endl;
        cout<<"DIBAYAR : Rp. "; cin>>bayar[3];
        kembali[3] = bayar[3]-biaya[3];
        cout<<"KEMBALI : Rp. "<<kembali[3]<<endl;
        cout<<"Cetak Struk (Y/T) :";
        cin>>back;
        penanganan3();
        cout<<"\t\t\t\t======================================"<<endl;
        cout<<"\t\t\t\t||        STRUK PEMBAYARAN           ||"<<endl;
        cout<<"\t\t\t\t|| Puskesmas Rawat Inap Kota Karang  ||"<<endl;
        cout<<"\t\t\t\t======================================"<<endl;
        cout<<"\t\t\t\tNama             : "<<nama1<<" "<<nama2<<endl;
        cout<<"\t\t\t\tAlamat           : "<<address<<endl;
        cout<<"\t\t\t\tNomor            : "<<nomor<<endl;
        cout<<"\t\t\t\tPenanganan       : Jahit Luka 4-6cm"<<endl;
        cout<<"\t\t\t\tTotal Biaya      : Rp. "<<biaya[3]<<endl;
        cout<<"\t\t\t\tBayar            : Rp. "<<bayar[3]<<endl;
        cout<<"\t\t\t\tKembali          : Rp. "<<kembali[3]<<endl;
        cout<<"\t\t\t\t======================================"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t|| Terima Kasih Atas Kunjungan Anda ||"<<endl;
        cout<<"\t\t\t\t||       Semoga Lekas Sembuh        ||"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t======================================"<<endl;
        break;
    case 4 :
        cout<<'\n'<<"Debridement Luka "<<endl;
        biaya[4] = 15000;
        cout<<"Total biayanya yaitu : Rp. "<<biaya[4]<<endl;
        cout<<"DIBAYAR : Rp. "; cin>>bayar[4];
        kembali[4] = bayar[4]-biaya[4];
        cout<<"KEMBALI : Rp. "<<kembali[4]<<endl;
        cout<<"Cetak Struk (Y/T) :";
        cin>>back;
        penanganan4();
        cout<<"\t\t\t\t======================================"<<endl;
        cout<<"\t\t\t\t||        STRUK PEMBAYARAN           ||"<<endl;
        cout<<"\t\t\t\t|| Puskesmas Rawat Inap Kota Karang  ||"<<endl;
        cout<<"\t\t\t\t======================================"<<endl;
        cout<<"\t\t\t\tNama             : "<<nama1<<" "<<nama2<<endl;
        cout<<"\t\t\t\tAlamat           : "<<address<<endl;
        cout<<"\t\t\t\tNomor            : "<<nomor<<endl;
        cout<<"\t\t\t\tPenanganan       : Debridement Luka"<<endl;
        cout<<"\t\t\t\tTotal Biaya      : Rp. "<<biaya[4]<<endl;
        cout<<"\t\t\t\tBayar            : Rp. "<<bayar[4]<<endl;
        cout<<"\t\t\t\tKembali          : Rp. "<<kembali[4]<<endl;
        cout<<"\t\t\t\t======================================"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t|| Terima Kasih Atas Kunjungan Anda ||"<<endl;
        cout<<"\t\t\t\t||       Semoga Lekas Sembuh        ||"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t======================================"<<endl;
        break;
    case 5 :
        cout<<'\n'<<"Pasang Kateter Urine"<<endl;
        biaya[5] = 15000;
        cout<<"Total biayanya yaitu : Rp. "<<biaya[5]<<endl;
        cout<<"DIBAYAR : Rp. "; cin>>bayar[5];
        kembali[5] = bayar[5]-biaya[5];
        cout<<"KEMBALI : Rp. "<<kembali[5]<<endl;
        cout<<"Cetak Struk (Y/T) :";
        cin>>back;
        penanganan5();
        cout<<"\t\t\t\t======================================"<<endl;
        cout<<"\t\t\t\t||        STRUK PEMBAYARAN           ||"<<endl;
        cout<<"\t\t\t\t|| Puskesmas Rawat Inap Kota Karang  ||"<<endl;
        cout<<"\t\t\t\t======================================"<<endl;
        cout<<"\t\t\t\tNama             : "<<nama1<<" "<<nama2<<endl;
        cout<<"\t\t\t\tAlamat           : "<<address<<endl;
        cout<<"\t\t\t\tNomor            : "<<nomor<<endl;
        cout<<"\t\t\t\tPenanganan       : Pasang Kateter Urine"<<endl;
        cout<<"\t\t\t\tTotal Biaya      : Rp. "<<biaya[5]<<endl;
        cout<<"\t\t\t\tBayar            : Rp. "<<bayar[5]<<endl;
        cout<<"\t\t\t\tKembali          : Rp. "<<kembali[5]<<endl;
        cout<<"\t\t\t\t======================================"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t|| Terima Kasih Atas Kunjungan Anda ||"<<endl;
        cout<<"\t\t\t\t||       Semoga Lekas Sembuh        ||"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t======================================"<<endl;
        break;
    case 6 :
        cout<<'\n'<<"Insisi Furunkel/Abses"<<endl;
        biaya[6] = 15000;
        cout<<"Total biayanya yaitu : Rp. "<<biaya[6]<<endl;
        cout<<"DIBAYAR : Rp. "; cin>>bayar[6];
        kembali[6] = bayar[6]-biaya[6];
        cout<<"KEMBALI : Rp. "<<kembali[5]<<endl;
        cout<<"Cetak Struk (Y/T) :";
        cin>>back;
        penanganan6();
        cout<<"\t\t\t\t======================================"<<endl;
        cout<<"\t\t\t\t||        STRUK PEMBAYARAN           ||"<<endl;
        cout<<"\t\t\t\t|| Puskesmas Rawat Inap Kota Karang  ||"<<endl;
        cout<<"\t\t\t\t======================================"<<endl;
        cout<<"\t\t\t\tNama             : "<<nama1<<" "<<nama2<<endl;
        cout<<"\t\t\t\tAlamat           : "<<address<<endl;
        cout<<"\t\t\t\tNomor            : "<<nomor<<endl;
        cout<<"\t\t\t\tPenanganan       : Insisi Furunkel/Abses"<<endl;
        cout<<"\t\t\t\tTotal Biaya      : Rp. "<<biaya[6]<<endl;
        cout<<"\t\t\t\tBayar            : Rp. "<<bayar[6]<<endl;
        cout<<"\t\t\t\tKembali          : Rp. "<<kembali[6]<<endl;
        cout<<"\t\t\t\t======================================"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t|| Terima Kasih Atas Kunjungan Anda ||"<<endl;
        cout<<"\t\t\t\t||       Semoga Lekas Sembuh        ||"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t======================================"<<endl;
        break;
    case 7 :
        cout<<'\n'<<"IVFD"<<endl;
        biaya[7] = 15000;
        cout<<"Total biayanya yaitu : Rp. "<<biaya[7]<<endl;
        cout<<"DIBAYAR : Rp. "; cin>>bayar[7];
        kembali[7] = bayar[7]-biaya[7];
        cout<<"KEMBALI : Rp. "<<kembali[7]<<endl;
        cout<<"Cetak Struk (Y/T) :";
        cin>>back;
        penanganan7();
        cout<<"\t\t\t\t======================================"<<endl;
        cout<<"\t\t\t\t||        STRUK PEMBAYARAN           ||"<<endl;
        cout<<"\t\t\t\t|| Puskesmas Rawat Inap Kota Karang  ||"<<endl;
        cout<<"\t\t\t\t======================================"<<endl;
        cout<<"\t\t\t\tNama             : "<<nama1<<" "<<nama2<<endl;
        cout<<"\t\t\t\tAlamat           : "<<address<<endl;
        cout<<"\t\t\t\tNomor            : "<<nomor<<endl;
        cout<<"\t\t\t\tPenanganan       : IVFD"<<endl;
        cout<<"\t\t\t\tTotal Biaya      : Rp. "<<biaya[7]<<endl;
        cout<<"\t\t\t\tBayar            : Rp. "<<bayar[7]<<endl;
        cout<<"\t\t\t\tKembali          : Rp. "<<kembali[7]<<endl;
        cout<<"\t\t\t\t======================================"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t|| Terima Kasih Atas Kunjungan Anda ||"<<endl;
        cout<<"\t\t\t\t||       Semoga Lekas Sembuh        ||"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t======================================"<<endl;
        break;
    case 8 :
        cout<<'\n'<<"Ekstraksi Kuku"<<endl;
        biaya[8] = 27000;
        cout<<"Total biayanya yaitu : Rp. "<<biaya[8]<<endl;
        cout<<"DIBAYAR : Rp. "; cin>>bayar[8];
        kembali[8] = bayar[8]-biaya[8];
        cout<<"KEMBALI : Rp. "<<kembali[8]<<endl;
        cout<<"Cetak Struk (Y/T) :";
        cin>>back;
        penanganan8();
        cout<<"\t\t\t\t======================================"<<endl;
        cout<<"\t\t\t\t||        STRUK PEMBAYARAN           ||"<<endl;
        cout<<"\t\t\t\t|| Puskesmas Rawat Inap Kota Karang  ||"<<endl;
        cout<<"\t\t\t\t======================================"<<endl;
        cout<<"\t\t\t\tNama             : "<<nama1<<" "<<nama2<<endl;
        cout<<"\t\t\t\tAlamat           : "<<address<<endl;
        cout<<"\t\t\t\tNomor            : "<<nomor<<endl;
        cout<<"\t\t\t\tPenanganan       : Ekstraksi Kuku"<<endl;
        cout<<"\t\t\t\tTotal Biaya      : Rp. "<<biaya[8]<<endl;
        cout<<"\t\t\t\tBayar            : Rp. "<<bayar[8]<<endl;
        cout<<"\t\t\t\tKembali          : Rp. "<<kembali[8]<<endl;
        cout<<"\t\t\t\t======================================"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t|| Terima Kasih Atas Kunjungan Anda ||"<<endl;
        cout<<"\t\t\t\t||       Semoga Lekas Sembuh        ||"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t======================================"<<endl;
        break;
    case 9 :
        cout<<'\n'<<"Ekstraksi Corpus Alienum"<<endl;
        biaya[9] = 27000;
        cout<<"Total biayanya yaitu : Rp. "<<biaya[9]<<endl;
        cout<<"DIBAYAR : Rp. "; cin>>bayar[9];
        kembali[9] = bayar[9]-biaya[9];
        cout<<"KEMBALI : Rp. "<<kembali[9]<<endl;
        cout<<"Cetak Struk (Y/T) :";
        cin>>back;
        penanganan9();
        cout<<"\t\t\t\t======================================"<<endl;
        cout<<"\t\t\t\t||        STRUK PEMBAYARAN           ||"<<endl;
        cout<<"\t\t\t\t|| Puskesmas Rawat Inap Kota Karang  ||"<<endl;
        cout<<"\t\t\t\t======================================"<<endl;
        cout<<"\t\t\t\tNama             : "<<nama1<<" "<<nama2<<endl;
        cout<<"\t\t\t\tAlamat           : "<<address<<endl;
        cout<<"\t\t\t\tNomor            : "<<nomor<<endl;
        cout<<"\t\t\t\tPenanganan       : Eks. Corpus Alenium"<<endl;
        cout<<"\t\t\t\tTotal Biaya      : Rp. "<<biaya[9]<<endl;
        cout<<"\t\t\t\tBayar            : Rp. "<<bayar[9]<<endl;
        cout<<"\t\t\t\tKembali          : Rp. "<<kembali[9]<<endl;
        cout<<"\t\t\t\t======================================"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t|| Terima Kasih Atas Kunjungan Anda ||"<<endl;
        cout<<"\t\t\t\t||       Semoga Lekas Sembuh        ||"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t======================================"<<endl;
        break;
    case 10 :
        cout<<'\n'<<"Nebulizer/Inhalasi"<<endl;
        biaya[10] = 27000;
        cout<<"Total biayanya yaitu : Rp. "<<biaya[10]<<endl;
        cout<<"DIBAYAR : Rp. "; cin>>bayar[10];
        kembali[10] = bayar[10]-biaya[10];
        cout<<"KEMBALI : Rp. "<<kembali[10]<<endl;
        cout<<"Cetak Struk (Y/T) :";
        cin>>back;
        penanganan10();
        cout<<"\t\t\t\t======================================"<<endl;
        cout<<"\t\t\t\t||        STRUK PEMBAYARAN           ||"<<endl;
        cout<<"\t\t\t\t|| Puskesmas Rawat Inap Kota Karang  ||"<<endl;
        cout<<"\t\t\t\t======================================"<<endl;
        cout<<"\t\t\t\tNama             : "<<nama1<<" "<<nama2<<endl;
        cout<<"\t\t\t\tAlamat           : "<<address<<endl;
        cout<<"\t\t\t\tNomor            : "<<nomor<<endl;
        cout<<"\t\t\t\tPenanganan       : Nebulizer/Inhalasi"<<endl;
        cout<<"\t\t\t\tTotal Biaya      : Rp. "<<biaya[10]<<endl;
        cout<<"\t\t\t\tBayar            : Rp. "<<bayar[10]<<endl;
        cout<<"\t\t\t\tKembali          : Rp. "<<kembali[10]<<endl;
        cout<<"\t\t\t\t======================================"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t|| Terima Kasih Atas Kunjungan Anda ||"<<endl;
        cout<<"\t\t\t\t||       Semoga Lekas Sembuh        ||"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t======================================"<<endl;
        break;
    case 11 :
        cout<<'\n'<<"Pengobatan Epistaxis"<<endl;
        biaya[11] = 27000;
        cout<<"Total biayanya yaitu : Rp. "<<biaya[11]<<endl;
        cout<<"DIBAYAR : Rp. "; cin>>bayar[11];
        kembali[11] = bayar[11]-biaya[11];
        cout<<"KEMBALI : Rp. "<<kembali[11]<<endl;
        cout<<"Cetak Struk (Y/T) :";
        cin>>back;
        penanganan11();
        cout<<"\t\t\t\t======================================"<<endl;
        cout<<"\t\t\t\t||        STRUK PEMBAYARAN           ||"<<endl;
        cout<<"\t\t\t\t|| Puskesmas Rawat Inap Kota Karang  ||"<<endl;
        cout<<"\t\t\t\t======================================"<<endl;
        cout<<"\t\t\t\tNama             : "<<nama1<<" "<<nama2<<endl;
        cout<<"\t\t\t\tAlamat           : "<<address<<endl;
        cout<<"\t\t\t\tNomor            : "<<nomor<<endl;
        cout<<"\t\t\t\tPenanganan       : Pengobatan Epistakes"<<endl;
        cout<<"\t\t\t\tTotal Biaya      : Rp. "<<biaya[11]<<endl;
        cout<<"\t\t\t\tBayar            : Rp. "<<bayar[11]<<endl;
        cout<<"\t\t\t\tKembali          : Rp. "<<kembali[11]<<endl;
        cout<<"\t\t\t\t======================================"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t|| Terima Kasih Atas Kunjungan Anda ||"<<endl;
        cout<<"\t\t\t\t||       Semoga Lekas Sembuh        ||"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t======================================"<<endl;
        break;
    case 12 :
        cout<<'\n'<<"Oksigen 1 Jam"<<endl;
        biaya[12] = 9000;
        cout<<"Berapa Jam?"<<endl; cin>>jam;
        jam = biaya[12]*jam;
        cout<<"Total biayanya yaitu : Rp. "<<jam<<endl;
        cout<<"DIBAYAR : Rp. "; cin>>bayar[12];
        kembali[12] = bayar[12]-jam;
        cout<<"KEMBALI : Rp. "<<kembali[12]<<endl;
        cout<<"Cetak Struk (Y/T) :";
        cin>>back;
        penanganan12();
        cout<<"\t\t\t\t======================================"<<endl;
        cout<<"\t\t\t\t||        STRUK PEMBAYARAN           ||"<<endl;
        cout<<"\t\t\t\t|| Puskesmas Rawat Inap Kota Karang  ||"<<endl;
        cout<<"\t\t\t\t======================================"<<endl;
        cout<<"\t\t\t\tNama             : "<<nama1<<" "<<nama2<<endl;
        cout<<"\t\t\t\tNomor            : "<<nomor<<endl;
        cout<<"\t\t\t\tPenanganan       : Oksigen Per-Jam"<<endl;
        cout<<"\t\t\t\tTotal Biaya      : Rp. "<<jam<<endl;
        cout<<"\t\t\t\tBayar            : Rp. "<<bayar[12]<<endl;
        cout<<"\t\t\t\tKembali          : Rp. "<<kembali[12]<<endl;
        cout<<"\t\t\t\t======================================"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t|| Terima Kasih Atas Kunjungan Anda ||"<<endl;
        cout<<"\t\t\t\t||       Semoga Lekas Sembuh        ||"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t||                                  ||"<<endl;
        cout<<"\t\t\t\t======================================"<<endl;
        break;
    default :
        cout<<"Kode yang Anda Masukkan Salah, Silahkan Coba Lagi!"<<endl;
        cout<<"Apakah Anda ingin Keluar? (Y/T) = ";
        cin>>back;
        break;
    }

    }
    while (back=='T'||back=='t');
    return 0;
}
