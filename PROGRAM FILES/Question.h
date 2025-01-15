#ifndef QUESTION_H
#define QUESTION_H

#include <string>
#include <vector>

// clasa Question reprezinta o intrebare cu multiple optiuni de raspuns
class Question {
private:
    int id;                           // ID-ul intrebarii
    std::string type;                 // Tipul intrebarii (ex: Single, Multiple)
    std::string difficulty;           // Dificultatea intrebarii (ex: usor, mediu, greu)
    std::string domain;               // Domeniul intrebarii (ex: Matematica, Istorie)
    std::string questionText;         // Textul intrebarii
    std::vector<std::string> options; // Optiunile de raspuns disponibile
    int correctAnswer;                // Indexul raspunsului corect (1-based)

public:
    // Constructorul clasei Question
    Question(int id, const std::string& type, const std::string& difficulty, const std::string& domain,
        const std::string& questionText, const std::vector<std::string>& options, int correctAnswer);

    bool checkAnswer(int answer) const;                   // verifica raspunsul dat de utilizator este corect

    std::string getQuestionText() const;                  // obtine textul intrebarii

    std::vector<std::string> getAnswers() const;          // obtine optiunile de raspuns

    int getCorrectAnswerIndex() const;                    // obtine indexul raspunsului corect

    void setAnswers(const std::vector<std::string>& newAnswers); // seteaza noile optiuni

    void setCorrectAnswerIndex(int newIndex);             // seteaza indexul raspunsului corect
};

#endif // QUESTION_H
