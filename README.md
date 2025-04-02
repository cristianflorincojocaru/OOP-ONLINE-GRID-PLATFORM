# OOP - ONLINE GRID PLATFORM

### PROBLEM STATEMENT :
> **Online Quiz Platform** - managing questions and evaluating answers (problem number 23) .


## METHOD DESCRIPTION & PROBLEM-SOLVING APPROACH

### 1. Problem analysis
Our quiz platform needs to allow the creation and management of a set of multiple-choice questions, where each question has multiple answer options. 
Users should be able to answer the questions, and the platform should evaluate the answers and calculate a final score.

We will use an object-oriented programming model to make the code more modular, reusable, and easy to maintain.


### 2. Applied OOP concepts :
**Encapsulation** : We will use classes to encapsulate the questions, quizzes, and optionally, the users. Each class will have private variables, and access to them will be provided through public methods (getters, setters, and other methods).

**Abstraction** : Through the use of classes, we abstract the complexity of a question or a quiz, hiding the implementation details behind clear and simple methods. Thus, the end-user of the code (either another developer or a human user) doesn't need to know exactly how the answer validation works.

**Polymorphism** : If we want to extend the project, we can use polymorphism to add different types of quizzes or questions without modifying the existing structure. For example, questions with only one correct answer or multiple correct answers.

**Inheritance** : If we have different types of quizzes or questions, we can create derived classes from a base class, inheriting common properties and adding specific functionalities.


### 3. Modularity and responsibility separation
Our platform will be divided into logical modules, each with well-defined responsibilities:

**Question Module** : Manages each individual question, including the question text, answer options, and the correct answer.

**Quiz Module** : Manages a set of questions and orchestrates the entire testing process, from displaying the questions to evaluating the answers and calculating the score.

**User Module (optional)** : Manages user details and saves scores to provide personalized feedback.


### 4. Program workflow : 
The program will follow a clear and easy-to-understand workflow :

**Step 1** : Initialize a set of questions (in the code or read from a file).

**Step 2** : Display each question to the user along with the answer options.

**Step 3** : Read the user's answer and check if it's correct.

**Step 4** : Calculate and display the final score, providing feedback to the user on their performance.


### 5. Ease of extension
One of the advantages of object-oriented programming is the ease with which we can extend the program:

If we want to add different types of questions (e.g., multiple-choice questions or open-ended questions), we can create new classes that extend the base 'Question' class.

If we want to extend the user functionality (e.g., saving long-term scores), we can add a simple database or files for data persistence.




## MAIN IDEAS FOR THE FINAL DEVELOPMENT OF THE PROGRAM
### 1. Adding difficulty levels for questions
Questions could be categorized into difficulty levels ***(easy, medium, hard)***, and the user can select the desired level at the start of the quiz.
> **Benefits** : The quiz becomes more flexible, allowing the user to choose questions based on their knowledge level.

### 2. Timed responses - NOT IMPLEMENTED YET
Adding a timer that limits the time to answer each question. If the time runs out, the user won't be able to answer the question, and the next one will be displayed.
> **Benefits** : Adds an element of pressure and tests the user's speed, increasing the difficulty level.

### 3. Randomizing the order of questions and answers
To make the quiz more unpredictable, both the questions and answer options can be displayed in a random order.
> **Benefits** : The quiz becomes more dynamic and prevents the possibility of memorizing the order of questions.

### 4. Saving scores and evaluations to a file
Scores and evaluations for each user can be saved to a file to keep a history of their performance.
> **Benefits** : Users can have a record of their tests and scores, which is useful for tracking progress over time.

### 5. Creating an interactive menu in 'Command Prompt'
Instead of directly running the quiz, you can add a menu that allows the user to choose different options: start a quiz, view scores, exit the program, etc.
> **Benefits** : Provides a more user-friendly and clear interface.

### 6. Creating domains
Domains allow questions to be organized by theme, enabling the user to choose one at the beginning of the test.
> **Benefits** : Gives users control over the test content, letting them select questions only from a domain of interest.

### 7. Selecting a number of questions
The platform will automatically pick the chosen number of questions from the specified domain.
> **Benefits** : Provides flexibility, allowing users to opt for short or long tests according to their time and interest.

### 8. Multiple correct answers - NOT IMPLEMENTED YET
The user can select multiple options as answers, and correctness will be evaluated based on all correct responses.
> **Benefits** : Adds complexity and realism to the tests, making assessments more comprehensive.

### 9. Reviewing answers from a completed test (from a file) - NOT IMPLEMENTED YET
The platform saves the answers and score to a file; later, the user can see the questions and correct answers along with their own responses.
> **Benefits** : Allows users to learn from mistakes, providing access to a detailed test history and answer accuracy.



## CONTRIBUTIONS 
Project created by **Cristian Florin Cojocaru** (**CSE.2** - **University of Craiova / Faculty of Automatics, Computer Science and Electronics**). Contributions are welcome ! If you have suggestions for improving the code or documentation, please submit a pull request.




## LICENSE
This project is licensed under the [MIT License](LICENSE).
