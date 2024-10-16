# OOP-Online-Grid-Platform

### Problem Statement
> **Online Quiz Platform** - managing questions and evaluating answers (problem number 23) .

## Method Description and Problem-Solving Approach


### 1. Problem Analysis
Our quiz platform needs to allow the creation and management of a set of multiple-choice questions, where each question has multiple answer options. 
Users should be able to answer the questions, and the platform should evaluate the answers and calculate a final score.

We will use an object-oriented programming model to make the code more modular, reusable, and easy to maintain.


### 2. Applied OOP Concepts
**Encapsulation** : We will use classes to encapsulate the questions, quizzes, and optionally, the users. Each class will have private variables, and access to them will be provided through public methods (getters, setters, and other methods).

**Abstraction** : Through the use of classes, we abstract the complexity of a question or a quiz, hiding the implementation details behind clear and simple methods. Thus, the end-user of the code (either another developer or a human user) doesn't need to know exactly how the answer validation works.

**Polymorphism** : If we want to extend the project, we can use polymorphism to add different types of quizzes or questions without modifying the existing structure. For example, questions with only one correct answer or multiple correct answers.

**Inheritance** : If we have different types of quizzes or questions, we can create derived classes from a base class, inheriting common properties and adding specific functionalities.


### 3. Modularity and Responsibility Separation
Our platform will be divided into logical modules, each with well-defined responsibilities:

**Question Module** : Manages each individual question, including the question text, answer options, and the correct answer.

**Quiz Module** : Manages a set of questions and orchestrates the entire testing process, from displaying the questions to evaluating the answers and calculating the score.

**User Module (optional)** : Manages user details and saves scores to provide personalized feedback.


### 4. Program Workflow
The program will follow a clear and easy-to-understand workflow :

**Step 1** : Initialize a set of questions (in the code or read from a file).

**Step 2** : Display each question to the user along with the answer options.

**Step 3** : Read the user's answer and check if it's correct.

**Step 4** : Calculate and display the final score, providing feedback to the user on their performance.


### 5. Ease of Extension
One of the advantages of object-oriented programming is the ease with which we can extend the program:

If we want to add different types of questions (e.g., multiple-choice questions or open-ended questions), we can create new classes that extend the base Question class.

If we want to extend the user functionality (e.g., saving long-term scores), we can add a simple database or files for data persistence.



## Possible Improvement Ideas
### 1. Adding Difficulty Levels for Questions
Questions could be categorized into difficulty levels ***(easy, medium, hard)***, and the user can select the desired level at the start of the quiz.
> **Benefits** : The quiz becomes more flexible, allowing the user to choose questions based on their knowledge level.

### 2. Timed Responses
Adding a timer that limits the time to answer each question. If the time runs out, the user won't be able to answer the question, and the next one will be displayed.
> **Benefits** : Adds an element of pressure and tests the user's speed, increasing the difficulty level.

### 3. Randomizing the Order of Questions and Answers
To make the quiz more unpredictable, both the questions and answer options can be displayed in a random order.
> **Benefits** : The quiz becomes more dynamic and prevents the possibility of memorizing the order of questions.

### 4. Saving Scores and Evaluations to a File
Scores and evaluations for each user can be saved to a file to keep a history of their performance.
> **Benefits** : Users can have a record of their tests and scores, which is useful for tracking progress over time.

### 5. Creating an Interactive Menu in Command Prompt
Instead of directly running the quiz, you can add a menu that allows the user to choose different options: start a quiz, view scores, exit the program, etc.
> **Benefits** : Provides a more user-friendly and clear interface.
