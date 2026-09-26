# Sensor Buzzer Parkir Mobil (Ultrasonic Rear Bumper Sensor)

Proyek mikrokontroler untuk sistem peringatan parkir pada bumper belakang mobil. Sistem ini menggunakan sensor ultrasonic untuk mendeteksi jarak antara mobil dan objek (misalnya tembok), lalu mengaktifkan buzzer sebagai peringatan suara ketika mobil semakin mendekat.

# Deskripsi

Sensor ultrasonic akan terus membaca jarak antara bumper belakang mobil dengan objek di sekitarnya. Semakin dekat jarak yang terdeteksi, semakin cepat/sering bunyi buzzer berbunyi, sehingga pengemudi dapat memperkirakan seberapa dekat mobil dengan tembok atau penghalang lainnya saat parkir mundur.

# Fitur
Deteksi jarak menggunakan sensor ultrasonic (HC-SR04 atau sejenisnya)
Peringatan suara melalui buzzer dengan pola bunyi yang berubah sesuai jarak
Dapat dipasang langsung pada bumper belakang mobil
# Komponen yang Digunakan
Mikrokontroler  
Sensor Ultrasonic HC-SR04
Buzzer aktif/pasif
Kabel jumper

# Cara Kerja
Sensor ultrasonic memancarkan gelombang suara dan mengukur waktu pantul untuk menghitung jarak ke objek terdekat.
Mikrokontroler membaca data jarak dari sensor secara berkala.
Berdasarkan jarak yang terbaca, mikrokontroler mengatur pola bunyi buzzer:
Jarak jauh → buzzer diam atau bunyi lambat
Jarak dekat → buzzer bunyi cepat/terus-menerus

# Instalasi
Rangkai komponen sesuai skematik yang disediakan.
Upload kode program ke mikrokontroler bisa dengan PIO atau Arduino IDE.


# Link Kode

[[Link Kode]](https://github.com/pengode-handal/Ruby_MikonTLS/blob/main/main.ino)

# Link Skematik

[[Link Schematic]](https://github.com/attarsam/Ruby_mikrokontroler_TLS/blob/main/WiringMikonTLSRubyRevisi.pdf)
