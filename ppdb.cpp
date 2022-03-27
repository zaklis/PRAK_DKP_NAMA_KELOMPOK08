#include <iostream>
#include <string>
#include <limits>
#include <ctime>
#include <stdlib.h>
#include <conio.h>

using namespace std;

struct Siswa{
	int nomor;
	string nama;
	string NIM;
	string jurusan;
	string asal;
};

Siswa batas[100];
int a,b,c,d;

int menu();
void profil();
void kompetensi();
void informasi();
void kontak();
void addDataSiswa();
void displayDataSiswa();
void updateDataSiswa();
void deleteDataSiswa();

int main(){

	int pilihan = menu();
	char lanjut,re;
	int pil,choose;
	string name,pass;

	enum{PROFIL=1,KOMPETENSI,INFORMASI,DAFTAR,KONTAK,FINISH,ADMIN=13};

	while(pilihan != FINISH){

		switch(pilihan){


		case PROFIL: profil();
					break;


		case KOMPETENSI: kompetensi();
							break;


		case INFORMASI: informasi();
							break;


		case DAFTAR: 
					 tabel:
					 system("cls");
					 cout<<"\n\n"<<endl;
					 cout<<"|============Daftar============|"<<endl;
					 cout<<"|==============================|"<<endl;
					 cout<<"|1. Daftar Online              |"<<endl;
					 cout<<"|2. List siswa/i yang daftar   |"<<endl;
					 cout<<"|3. Kembali                    |"<<endl;
					 cout<<"|==============================|"<<endl;
					 cout<<"Pilih : ";cin>>pil;
					 cin.ignore(numeric_limits<streamsize>::max(),'\n');
					 switch(pil){
					 	case 1:
					 	addDataSiswa();
					 	cout<<"Ingin Kembali?(y/n) : ";cin>>re;
					 		if(re=='Y'||re=='y'){
					 			goto tabel;
					 		}
					 		else{
					 			break;
					 		}
					 		break;
					 
					 case 2:
					 		cout<<"Daftar Calon Siswa/i"<<endl;
					 	displayDataSiswa();
					 	cout<<"Ingin Kembali?(y/n) : ";cin>>re;
					 		if(re=='Y'||re=='y'){
					 			goto tabel;
					 		}
					 		else{	
					 			break;
					 		}
					 		break;
					 
					 default:
					 		return main();
					 		break;
					 }
					 cout<<endl;
					 cout<<"Terima Kasih telah mendaftar"<<endl;
					 break;

		case KONTAK: kontak();
					break;

		case ADMIN: char re;
					login:
					system("cls");
					system("color 3");
					cout<<"\n\n"<<endl;
					cout<<"Anda memasuki Hak Admin"<<endl;
					cout<<"========================"<<endl;
					cout<<"silahkan masukan:"<<endl;
					cout<<"Username : ";cin>>name;
					cout<<"Password : ";cin>>pass;
						if(name=="daffa" && pass=="1234"){
							menus:
							system("cls");
							cout<<"\n\n"<<endl;
							cout<<"Hak admin dapat melakukan :"<<endl;
							cout<<"1. Update Data Siswa/i"<<endl;
							cout<<"2. Hapus Data Siswa/i"<<endl;
							cout<<"3. Kembali Ke Beranda"<<endl;
							cout<<"=========================="<<endl;
							cout<<"Pilih : ";cin>>choose;
								if(choose == 1){
									cout<<"Update Data Siswa/i"<<endl;
									displayDataSiswa();
									updateDataSiswa();
									cout<<"Data seletah di Update"<<endl;
									displayDataSiswa();

									cout<<endl<<endl;

									cout<<"Kembali Ke Menu Hak Admin? [y/n] : ";cin>>re;
									if(re=='Y'||re=='y'){
										goto menus;
									}
									else{
										system("cls");
										cout<<endl<<endl;
										cout<<"Semoga hari mu indah Admin"<<endl;
									}
							}
							else if(choose==2){
									cout<<"Hapus Data Siswa/i"<<endl;
									displayDataSiswa();
									deleteDataSiswa();
									displayDataSiswa();

									cout<<endl<<endl;

									cout<<"Kembali Ke Menu Hak Admin? [y/n] : ";cin>>re;
									if(re=='Y'||re=='y'){
										goto menus;
									}
									else{
										system("cls");
										cout<<endl<<endl;
										cout<<"Semoga hari mu indah Admin"<<endl;
									}
							}
							else if(choose==3){
									return main();
							}
							else{
								cout<<"Code Error"<<endl;
							}
						}

						else{
							cout<<"Password atau username salah"<<endl;
							cout<<endl;
							cout<<"Ingin Coba lagi ? [y/n] : ";cin>>re;
							if(re=='Y'||re=='y'){
								goto login;
							}
							else{
								system("cls");
								cout<<endl<<endl;
								cout<<"Anda bukanlah seorang Admin aplikasi ini_-#"<<endl;
							}
			
						}
								break;


		default: cout<<"Pilihan tidak ditemukan"<<endl;
					break;
		}
			cout<<endl<<endl;
		label:
		cout<<"Kembali ke Beranda?(y/n) : ";cin>>lanjut;
		if((lanjut=='Y')|(lanjut=='y')){
			// menu dideklarasikan ulang agar data
			// dapat diperbarui dari looping tadi
			pilihan=menu();
		}
		else if((lanjut=='N')|(lanjut=='n')){
			break;
		}
		else{
			goto label;
		}
	}

	cout<<endl;
	cout<<"Akhir dari program"<<endl;

	cout<<endl;
	time_t waktu;
	time(&waktu);
	cout<<ctime(&waktu)<<endl;
	cin.get();
	return 0;
}

int menu(){
	int input;
	system("color a");
	system("cls");
	cout<<"\n\n"<<endl;
	cout<<"=========Program PPDB========="<<endl;
	cout<<"==   SMK NEGERI KELOMPOK 8   =="<<endl;
	cout<<"|==========BERANDA===========|"<<endl;
	cout<<"Anissa Soraya Fujimoto(21120121140104)"<<end1;
	cout<<"|============================|"<<endl;
	cout<<"|1. Profil                   |"<<endl;
	cout<<"|2. Kempetensi Keahlian      |"<<endl;
	cout<<"|3. Informasi                |"<<endl;
	cout<<"|4. Daftar                   |"<<endl;
	cout<<"|5. Kontak                   |"<<endl;
	cout<<"|6. Keluar                   |"<<endl;
	cout<<"|============================|"<<endl;
	cout<<"|Due Administrator is Hidden |"<<endl;
	cout<<"|============================|"<<endl;
	cout<<"Pilih[1-6] : ";cin>>input;
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	return input;
}

void informasi(){
	system("cls");
	system("color E");
	cout<<"\n\n==========Informasi============="<<endl;
	cout<<"Sekolah ini belum memiliki prestasi"<<endl;
	cout<<"Karena sekolah ini baru saja berdiri"<<endl;
}

void kontak(){
	system("color 4");
	system("cls");
	cout<<"\n\n=========Kontak============"<<endl;
	cout<<"zaklis = +62081319493786"<<endl;
	cout<<"Email = zakilistian2@gmail.com"<<endl;
	cout<<"Website = None..."<<endl;
}

void kompetensi(){
	system("color b");
	system("cls");
	cout<<"\n\n===Kompetensi Keahlian==="<<endl;
	cout<<"=> Rekayasa Perangkat Lunak"<<endl;
	cout<<"\tRPL akan belajar seperti yang saya lakukan"<<endl;
	cout<<"\tsekarang ini yaitu ngoding"<<endl;
	cout<<endl;
	cout<<"=> Multimedia"<<endl;
	cout<<"\tMM akan belajar gambar, mengedit, "<<endl;
	cout<<"\tMembuat objek 3D dan 2D"<<endl;
	cout<<endl;
	cout<<"=> Networking"<<endl;
	cout<<"\tNWK akan belajar tentang masalah koneksi"<<endl;
	cout<<"\thebat dan kreatif"<<endl;
}

void profil(){
	system("color 9");
	system("cls");
	cout<<"\n\n======Profil======"<<endl;
	cout<<"SMK KELOMPOK 8"<<endl;
	cout<<"SMK ini merupakan tugas laporan praktikum 5 "<<endl;
	cout<<"Ya intinya SMK ini adalah SMK IT dengan akreditasi yang tinggi, tetapi sekolah ini"<<endl;
	cout<<"hanya untuk jalum dalam masuk UNDIP"<<endl;
	cout<<"Sekian Terima Kasih"<<endl;
}

void addDataSiswa(){

	cout<<endl<<endl;
	cout<<"\nJumlah siswa yang ingin di daftarkan :  ";cin>>b;
	 cin.ignore(numeric_limits<streamsize>::max(),'\n');
	d=0;

	cout<<endl;

	for(c=0; c<b; c++){
		d = d+1;
		cout<<"\nPendaftar  ke "<<d<<endl;
		cout<<"Nama         : ";
		getline(cin,batas[a].nama);
		cout<<"Jurusan      : ";
		getline(cin,batas[a].jurusan);
		cout<<"NIM          : ";
		getline(cin,batas[a].NIM);
		cout<<"Sekolah Asal : ";
		getline(cin,batas[a].asal);

		a++;
	}
	cout<<endl<<endl;
}

void displayDataSiswa(){
	int i,j;

	cout<<endl;

	cout<<"||\tNo.\t||\tNIM.\t||\tNama.\t||\tJurusan.\t||\tAsal Sekolah\t||"<<endl;

	j=0;
	for(i=0; i<a; i++){
		j = j+1;
		cout<<"\t"<<j<<"\t";
		cout<<"\t"<<batas[i].NIM<<"\t";
		cout<<"\t"<<batas[i].nama<<"\t";
		cout<<"\t"<<batas[i].jurusan<<"\t\t";
		cout<<"\t"<<batas[i].asal<<"\t";
		cout<<endl;
	}
	cout<<endl<<endl;
}

void updateDataSiswa(){
	int k,l;

	cout<<endl;

	cout<<"Masukan No urut yang akan di edit : ";cin>>k;
	 cin.ignore(numeric_limits<streamsize>::max(),'\n');
	l = k-1;

	cout<<endl;

	cout<<"Nama          : ";
	getline(cin,batas[l].nama);
	cout<<"Jurusan       : ";
	getline(cin,batas[l].jurusan);
	cout<<"NIM           : ";
	getline(cin,batas[l].NIM);
	cout<<"Asal Sekolah  : ";
	getline(cin,batas[l].asal);

	cout<<endl<<endl;
}

void deleteDataSiswa(){
	int x,y;

	cout<<endl;

	cout<<"Hapus Nomor : ";cin>>x;
	y= x-1;
	a--;

	for(int i=y; i<a; i+1){
		batas[i] = batas[i+1];
	}
	cout<<"\n\n===== Calon Siswa Ke "<<x<<" TerDropOut ============"<<endl;

	cout<<endl<<endl;
}
