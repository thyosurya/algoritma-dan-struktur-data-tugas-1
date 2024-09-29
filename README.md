Nama: Moh. Radithyo Surya Martuah NIM: 531424113 Mata Kuliah: Algoritma dan Struktur data Dosen Pengampu: Alfian Zakaria, ST., M.T., MCE

# Program Input Biodata

## Deskripsi
Program ini ditulis dalam bahasa C++ dan berfungsi untuk meminta pengguna memasukkan biodata pribadi seperti nama, nomor telepon, NIM, tinggi badan, dan alamat. Setelah semua data dimasukkan, program akan menampilkan kembali biodata yang telah diinputkan.

## Cara Kerja
1. Program menampilkan prompt untuk pengguna mengisi:
   - Nama
   - Nomor Telepon
   - NIM
   - Tinggi Badan
   - Alamat

2. Setelah pengguna memasukkan semua informasi, program akan menampilkan biodata tersebut kembali dalam format yang telah ditentukan.

## Cara Menggunakan
1. **Kompilasi Program**  
   Gunakan compiler C++ seperti `g++` untuk mengkompilasi kode. Perintah berikut digunakan untuk mengkompilasi program:
   ```bash
   g++ -o biodata biodata.cpp
Menjalankan Program
Setelah program berhasil dikompilasi, jalankan dengan perintah:

bash
Copy code
./biodata
Masukkan Data
Masukkan data biodata sesuai yang diminta oleh program.

Contoh Input dan Output
Input:
yaml
Copy code
------masukan biodata anda------
masukan nama anda:
Moh. Radithyo Surya Martuah
masukan Nomor Telepon anda:
081234567890
masukan NIM anda:
531424113
masukan Tinggi Badan anda:
175 cm
masukan nama Alamat:
Jl. Merdeka No. 1
Output:
yaml
Copy code
----biodata anda adalah----
Nama: Moh. Radithyo Surya Martuah
Nomor telpon: 081234567890
NIM: 531424113
Tinggi Badan: 175 cm
Alamat: Jl. Merdeka No. 1
Kesalahan Penulisan
Dalam program terdapat beberapa kesalahan kecil yang dapat diperbaiki:

"masukan nama ALamat" seharusnya menjadi "masukan alamat anda".
"Nomor telpon" seharusnya menjadi "Nomor telepon" pada output.
Teknologi yang Digunakan
Bahasa Pemrograman: C++
Standard Input/Output library (iostream)
Library string untuk menangani masukan teks
Catatan
Program ini menggunakan getline() untuk membaca input dari pengguna, sehingga bisa menerima teks dengan spasi.
