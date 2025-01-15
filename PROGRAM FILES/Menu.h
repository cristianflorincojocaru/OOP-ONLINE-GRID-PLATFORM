#ifndef MENU_H
#define MENU_H

#include <string>

// Clasa Menu gestioneaza meniurile aplicatiei
class Menu {
private:
    std::string loggedInUser;  // adaugam un atribut pentru utilizatorul logat

public:
    // Meniu de intampinare, care este afisat la inceputul programului
    void welcomeMenu();

    // Meniu principal, unde utilizatorul poate alege optiuni
    void mainMenu();

    // Crearea unui cont nou
    void createAccount();

    // Logarea unui cont existent
    void login();

    // Verifica daca username-ul este deja folosit de un alt utilizator
    bool isUsernameTaken(const std::string& username);

    // Permite stergerea unui cont pe baza username-ului
    void deleteAccount(const std::string& username);

    // Meniu secundar, care apare dupa ce utilizatorul se logheaza
    void secondaryMenu();

    // Meniu pentru optiunile testului
    void testOptionsMenu();

    // Incepe testul
    void startTest();

    // Seteaza utilizatorul logat
    void setLoggedInUser(const std::string& username) {
        loggedInUser = username;  // Aloca username-ul pentru utilizatorul logat
    }

    // Obține utilizatorul logat
    std::string getLoggedInUser() const {
        return loggedInUser;  // Returneaza username-ul utilizatorului logat
    }
};

#endif // MENU_H
