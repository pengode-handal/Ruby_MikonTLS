// Konfigurasi Pin Utama
const int trigPin = 5;
const int echoPin = 18;
const int buzzerPin = 19;

// Laju Gelombang Suara (cm/us)
#define SOUND_SPEED 0.034

long duration;
float distanceCentimeters;

void setup() {
  Serial.begin(115200);
  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // Inisiasi Pemancaran Gelombang Trig 10 Mikrosekon
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Perhitungan Durasi Pantulan Sinyal Echo
  duration = pulseIn(echoPin, HIGH);

  // Kalkulasi Besaran Jarak Objek (cm)
  distanceCentimeters = duration * SOUND_SPEED / 2;

  // Output Nilai Pengukuran ke Serial Monitor
  Serial.print("Jarak: ");
  Serial.print(distanceCentimeters);
  Serial.println(" cm");

  // Pemrosesan Logika Peringatan Buzzer Berdasarkan Jarak
  if (distanceCentimeters < 10) {
    // Zona Kritis: Sinyal Bip Rapat / Kontinu
    digitalWrite(buzzerPin, HIGH);
    delay(50);
    digitalWrite(buzzerPin, LOW);
    delay(50);
  } else if (distanceCentimeters >= 10 && distanceCentimeters < 30) {
    // Zona Waspada: Sinyal Bip Frekuensi Menengah
    digitalWrite(buzzerPin, HIGH);
    delay(200);
    digitalWrite(buzzerPin, LOW);
    delay(200);
  } else if (distanceCentimeters >= 30 && distanceCentimeters < 60) {
    // Zona Peringatan Dini: Sinyal Bip Frekuensi Rendah
    digitalWrite(buzzerPin, HIGH);
    delay(500);
    digitalWrite(buzzerPin, LOW);
    delay(500);
  } else {
    // Zona Aman: Buzzer Nonaktif
    digitalWrite(buzzerPin, LOW);
  }

  delay(100);
}
