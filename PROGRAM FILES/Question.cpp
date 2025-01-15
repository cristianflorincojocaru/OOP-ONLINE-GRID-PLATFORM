#include "Question.h"

// Constructorul clasei Question
// Initializeaza o intrebare cu toate proprietatile sale
Question::Question(int id, const std::string& type, const std::string& difficulty, const std::string& domain,
    const std::string& questionText, const std::vector<std::string>& options, int correctAnswer)
    : id(id), type(type), difficulty(difficulty), domain(domain), questionText(questionText), options(options), correctAnswer(correctAnswer) {
}

// verifica daca raspunsul dat de utilizator este corect
bool Question::checkAnswer(int answer) const {
    return answer == correctAnswer;
}

std::string Question::getQuestionText() const {
    return questionText;  // Returneaza textul intrebarii
}

std::vector<std::string> Question::getAnswers() const {
    return options;  // Returneaza optiunile de raspuns
}

int Question::getCorrectAnswerIndex() const {
    return correctAnswer;  // Returneaza indexul raspunsului corect
}

void Question::setAnswers(const std::vector<std::string>& newAnswers) {
    options = newAnswers;  // Inlocuieste optiunile vechi cu cele noi
}

void Question::setCorrectAnswerIndex(int newIndex) {
    correctAnswer = newIndex;  // Seteaza un nou index pentru raspunsul corect
}
