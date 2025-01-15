#include "User.h"
#include <iostream>
#include <fstream>
#include <sstream>

// functia trim care elimina spatiile suplimentare
std::string trim(const std::string& str) {
    const std::string WHITESPACE = " \t\n\r\f\v"; // caracterele considerate spatii
    size_t first = str.find_first_not_of(WHITESPACE);  // gaseste primul caracter care nu este spatiu
    size_t last = str.find_last_not_of(WHITESPACE);   // gaseste ultimul caracter care nu este spatiu
    return (first == std::string::npos) ? "" : str.substr(first, (last - first + 1)); // returneaza substring-ul fara spatii
}

// salveaza un utilizator intr-un fisier
void User::saveToFile() const {
    std::ofstream file("users.txt", std::ios::app);  // deschidem fisierul in modul append (import / export)
    if (file.is_open()) {
        file << username << " " << password << " " << name << std::endl;
        file.close();
    }
    else {
        std::cerr << "Eroare la deschiderea fisierului pentru salvare." << std::endl;
    }
}

// verifica daca username-ul si parola corespund unui cont existent
bool User::authenticate(const std::string& username, const std::string& password) {
    std::ifstream file("users.txt");
    std::string fileUsername, filePassword, fileName;

    if (file.is_open()) {
        while (file >> fileUsername >> filePassword >> fileName) {
            // curatam username-ul si parola citite din fisier si le comparam cu cele introduse
            if (trim(fileUsername) == trim(username) && trim(filePassword) == trim(password)) {
                file.close();
                return true;
            }
        }
        file.close();
    }
    return false;
}

// functii de validare pentru username si parola
bool User::isUsernameValid() const {
    int letterCount = 0, digitCount = 0;
    for (char c : username) {
        if (isalpha(c)) letterCount++;
        if (isdigit(c)) digitCount++;
    }
    return letterCount >= 4 && digitCount >= 2;  // validare username
}

bool User::isPasswordValid() const {
    int letterCount = 0, digitCount = 0;
    for (char c : password) {
        if (isalpha(c)) letterCount++;
        if (isdigit(c)) digitCount++;
    }
    return letterCount >= 4 && digitCount >= 4;  // validare parola
}
