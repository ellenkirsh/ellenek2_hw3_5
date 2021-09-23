//
//  main.cpp
//  ellenek2_hw3_5
//
//  Created by Ellen Kirsh on 9/22/21.
//

#include <iostream>
#include<fstream>
using namespace std;

int main() {
    int n = 20;
    char c[n];
    char s[n];
    int key[n];
    ifstream correct;
    correct.open("CorrectAnswers.txt");
    for(int i=0; i <20; i++){
        correct >> c[i];
    }
    ifstream student;
    student.open("StudentAnswers.txt");
    for(int i=0; i <20; i++){
        correct >> s[i];
    }
    for(int i = 0; i<20; i++){
        if(c[i] == s[i]){
            key[i] = 1;
        }else{
            key[i] = 0;
        }
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + key[i];
    }
    cout << "Number of questions answered correctly: " << sum << endl;
    double percent = (double(sum)/n)*100.00;
    cout << "Percent of questions answered correctly: "<< percent << "%\n";
    if(percent >= 75.00){
        cout << "Student passed the exam\n";
    }else{
        cout << "Student failed the exam\n";
    }
    return 0;
}
