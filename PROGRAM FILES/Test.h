#ifndef TEST_H
#define TEST_H

#include <vector>
#include <string>
#include "Question.h"

// clasa Test gestioneaza un test cu intrebari si scorul utilizatorului
class Test {
private:
    std::vector<Question> questions;       // lista de intrebari
    int score;                             // scorul obtinut de utilizator
    std::string selectedDifficulty;        // dificultatea selectata pentru test
    std::string selectedDomain;            // domeniul selectat pentru test
    int numQuestions;                      // numarul de intrebari dorit de utilizator
    std::string username;                  // username-ul utilizatorului

    void randomizeQuestions();             // Functie privata, randomizeaza ordinea intrebarilor
    void randomizeOptions(Question& q);    // Functie privata, randomizeaza optiunile unei intrebari

public:

    Test();  // Constructorul clasei Test, initializeaza un obiect de tip Test

    void loadQuestions(const std::string& fileName);   // incarca intrebarile din fisier

    void startTest();                      // incepe testul

    void displayQuestion(const Question& question, int index); // afiseaza o intrebare

    void displayScore();                   // afiseaza scorul final

    void saveUserScore();                  // salveaza scorul utilizatorului in fisier

    void displayLeaderboard();             // afiseaza clasamentul

    void setDifficulty(const std::string& difficulty); // seteaza dificultatea

    void setDomain(const std::string& domain);         // seteaza domeniul

    void setNumQuestions(int numQuestions);            // seteaza numarul de intrebari

    const std::vector<Question>& getQuestions() const; // returneaza intrebarile

    int getScore() const;                              // returneaza scorul
};

#endif // TEST_H
