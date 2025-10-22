// Liam Kuznar 10.22.25
#include <iostream>
using namespace std;

// Function prototypes
double getScore();
void displayLetterGrade(double);
double calcAverage(double, double, double); // optional extra credit

int main() {
    double score1, score2, score3;

    // Get three test scores
    score1 = getScore();
    score2 = getScore();
    score3 = getScore();

    // Display letter grades for each score
    cout << "\nLetter Grades:" << endl;
    displayLetterGrade(score1);
    displayLetterGrade(score2);
    displayLetterGrade(score3);

    // Optional: average grade
    double average = calcAverage(score1, score2, score3);
    cout << "\nAverage Score: " << average << endl;
    cout << "Average Letter Grade: ";
    displayLetterGrade(average);

    return 0;
}

// getScore asks user for a score, validates it, and returns it
double getScore() {
    double score;
    cout << "Enter test score (0-100): ";
    cin >> score;

    while (score < 0 || score > 100) {
        cout << "Invalid score. Enter a value between 0 and 100: ";
        cin >> score;
    }

    return score;
}

// displayLetterGrade displays the letter grade for a given score
void displayLetterGrade(double score) {
    char grade;

    if (score >= 90)
        grade = 'A';
    else if (score >= 80)
        grade = 'B';
    else if (score >= 70)
        grade = 'C';
    else if (score >= 60)
        grade = 'D';
    else
        grade = 'F';

    cout << "Score: " << score << " → Grade: " << grade << endl;
}

// calcAverage (optional) computes and returns the average of 3 scores
double calcAverage(double s1, double s2, double s3) {
    return (s1 + s2 + s3) / 3.0;
}
