#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama, noTelp, nim, tinggiBadan, alamat;

    cout << "------masukan biodata anda------" << endl;

    cout << "masukan nama anda: " << endl;
    getline(cin,nama);
    cout << "masukan Nomor Telepon anda: " << endl;
    getline(cin,noTelp);
    cout << "masukan NIM anda: " << endl;
    getline(cin, nim);
    cout << "masukan Tinggi Badan anda: " << endl;
    getline(cin,tinggiBadan);
    cout << "masukan nama ALamat: " << endl;
    getline(cin, alamat);


    cout << "----biodata anda adalah----" << endl;
    cout << "Nama: "<< nama << endl;
    cout << "Nomot telpon: "<< noTelp<<endl;
    cout << "NIM: "<< nim << endl;
    cout << "Tinggi Badan: "<< tinggiBadan<< endl;
    cout << "Alamat: "<< alamat;


    return 0;
}
