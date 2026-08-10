#include <iostream>
#include <string>

#define STUDENTS 5

using namespace std;

int main()
{
    int i;
    float average[STUDENTS], sum = 0, score[STUDENTS][5], totalAverage=0, classAverage=0;
    char grade[STUDENTS];
    string name[STUDENTS];

    for (int i = 0; i < STUDENTS; i++)
    {
        cout << "Enter the Name :  ";
        cin.ignore();
        getline(cin, name[i]);
        for (int j = 0; j < 5; j++)
        {
            cout << "Enter the " << j + 1 << " score : ";
            cin >> score[i][j];
            sum += score[i][j];
        } 

        average[i] = sum / 5;

        if (average[i] >= 90)
            grade[i] = 'A';
        else if (average[i] >= 80)
            grade[i] = 'B';
        else if (average[i] >= 70)
            grade[i] = 'C';
        else if (average[i] >= 60)
            grade[i] = 'D';
        else
            grade[i] = 'F';
    }
    for (int i = 0; i < STUDENTS; i++)
    {
        totalAverage +=average[i];
    }
    
    classAverage = totalAverage / STUDENTS;

    cout << "So the class average is " << classAverage << endl;

    return 0;
}