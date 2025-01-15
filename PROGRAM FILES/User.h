#ifndef USER_H
#define USER_H

#include <string>
#include <fstream>

// clasa User reprezinta un utilizator al platformei
class User {
private:
    std::string name;
    std::string username;
    std::string password;

public:
    // constructorul clasei User
    // initializeaza un obiect de tip User cu numele, username-ul si parola
    User(std::string name, std::string username, std::string password)
        : name(name), username(username), password(password) {
    }

    // getter pentru numele utilizatorului
    std::string getName() const { return name; }

    // getter pentru username-ul utilizatorului
    std::string getUsername() const { return username; }

    // salveaza informatiile utilizatorului intr-un fisier
    void saveToFile() const;

    // functie statica pentru autentificare
    // verifica daca username-ul si parola corespund unui cont existent
    static bool authenticate(const std::string& username, const std::string& password);

    // verifica daca username-ul este valid (de exemplu, daca respecta anumite reguli)
    bool isUsernameValid() const;

    // verifica daca parola este valida (de exemplu, daca are lungimea corecta sau contine caractere permise)
    bool isPasswordValid() const;
};

#endif // USER_H
