# Bus Ticket Reservation

## 🇹🇷 Türkçe

### Proje Hakkında
Konsol üzerinden otobüs bileti satışı ve iptali yapan bir C uygulamasıdır. Üç otobüsün (A, B, C) her biri 20 koltukludur. Koltuk durumları metin dosyalarında tutulduğu için program kapatılıp açıldığında bilgiler korunur.

### Özellikler
- Kullanıcı adı ve şifre ile giriş ekranı (demo bilgileri: `afra` / `1234`)
- Bilet satın alma (ad, soyad, otobüs ve koltuk numarası); dolu koltuk kontrolü
- Bilet iptali
- Otobüslerin koltuk durumunu görüntüleme
- Koltuk durumlarının dosyada saklanması (`0` = boş, `1` = dolu)

### Kullanılan Teknolojiler
C, standart kütüphane, dosya giriş/çıkış işlemleri

### Kurulum
```bash
git clone https://github.com/afranurbasak/bus-ticket-reservation-c.git
cd bus-ticket-reservation-c
gcc main.c -o bus
```
Windows'ta Dev-C++, Code::Blocks veya MinGW ile de derlenebilir.

### Kullanım
```bash
./bus
```
Program, koltuk dosyalarını (`denemea.txt`, `denemeb.txt`, `denemec.txt`) bulunduğu klasörde aradığı için bu klasörden çalıştırılmalıdır. Girişten sonra menüden işlem numarasını seçin.

Arayüz metinleri Türkçedir.

## 🇬🇧 English

### About the Project
A console application in C for selling and cancelling bus tickets. Each of the three buses (A, B, C) has 20 seats. Seat states are stored in text files, so the data persists when the program is closed and reopened.

### Features
- Login screen with username and password (demo credentials: `afra` / `1234`)
- Buying a ticket (name, surname, bus and seat number) with an occupied-seat check
- Ticket cancellation
- Viewing the seat status of each bus
- Seat states stored in files (`0` = free, `1` = taken)

### Technologies
C, standard library, file input/output

### Installation
```bash
git clone https://github.com/afranurbasak/bus-ticket-reservation-c.git
cd bus-ticket-reservation-c
gcc main.c -o bus
```
On Windows it can also be compiled with Dev-C++, Code::Blocks or MinGW.

### Usage
```bash
./bus
```
Run the program from this folder, because it looks for the seat files (`denemea.txt`, `denemeb.txt`, `denemec.txt`) in the working directory. After logging in, choose an option number from the menu.

The user interface is in Turkish.
