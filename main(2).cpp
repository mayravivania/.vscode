#include <iostream>
#include <cmath>

// Rumus energi kinetik
double hitungEnergiKinetik(double massa, double kecepatan) {
    return 0.5 * massa * kecepatan * kecepatan;
}

// Rumus energi potensial gravitasi
double hitungEnergiPotensial(double massa, double gravitasi, double tinggi) {
    return massa * gravitasi * tinggi;
}

int main() {
    double massa, kecepatan, tinggi;
    const double gravitasi = 9.8; // Gravitasi standar (m/s^2)
    
    std::cout << "Masukkan massa (kilogram): ";
    std::cin >> massa;
    
    std::cout << "Masukkan kecepatan (m/s): ";
    std::cin >> kecepatan;
    
    std::cout << "Masukkan tinggi (meter): ";
    std::cin >> tinggi;
    
    // Validasi input
    if (massa <= 0 || kecepatan < 0 || tinggi < 0) {
        std::cerr << "Nilai massa, kecepatan, dan tinggi harus lebih besar dari nol!" << std::endl;
        return 1;
    }

    // Hitung energi kinetik dan energi potensial
    double energiKinetik = hitungEnergiKinetik(massa, kecepatan);
    double energiPotensial = hitungEnergiPotensial(massa, gravitasi, tinggi);
    
    // Tampilkan hasil
    std::cout << "Energi Kinetik: " << energiKinetik << " Joule" << std::endl;
    std::cout << "Energi Potensial Gravitasi: " << energiPotensial << " Joule" << std::endl;
    
    // Conditional Statement
    if (energiKinetik > energiPotensial) {
        std::cout << "Energi Kinetik lebih besar dari Energi Potensial Gravitasi." << std::endl;
    } else if (energiKinetik < energiPotensial) {
        std::cout << "Energi Potensial Gravitasi lebih besar dari Energi Kinetik." << std::endl;
    } else {
        std::cout << "Energi Kinetik sama dengan Energi Potensial Gravitasi." << std::endl;
    }
    
    return 0;
}