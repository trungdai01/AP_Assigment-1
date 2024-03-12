#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <limits>

#define MAX_STUDENTS 100
int main()
{
    // std::vector<char> students(100);
    // std::vector<double> scores(100);
    std::string student;
    double score;
    int N = 0;
    std::string students[MAX_STUDENTS];
    double scores[MAX_STUDENTS];
    std::string evaluation[MAX_STUDENTS];
    while (N < MAX_STUDENTS)
    {
        std::cout << "Enter student name: ";
        getline(std::cin, student);
        if (student == "-1")
            break;
        students[N] = student;

        while (1)
        {
            std::cout << "Enter student score: ";
            std::cin >> score;
            std::cin.ignore();

            if (score == -1 || score >= 0 && score <= 100)
                break;
            else
            {
                std::cout << "Invalid input!!!\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }
        if (score == -1)
            break;
        scores[N] = score;
        printf("score %0.2f\n", scores[N]);
        // if (scores[N] >= 50)
        //     evaluation[N] = true;
        // else
        //     evaluation[N] = false;
        evaluation[N] = (scores[N] >= 50) ? "Passed" : "Failed";
        N++;
    }
    if (N)
    {
        std::cout << "\nStudents\tScores\t\tStatus\n";
        for (int i = 0; i < N; ++i)
        {
            std::cout << students[i] << "\t\t" << scores[i] << "\t\t" << evaluation[i] << "\n";
        }
    }

    return 0;
}