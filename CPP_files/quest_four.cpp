#include <iostream>
#include <conio.h>
#include <windows.h>
#include <fstream>
#include "quest_class.hpp"
#include "quest_four.hpp"

using namespace std;



void run_quest_four(){
    system("cls");

    QuestAnswer q_ans("delet c:/windows/system32");

    int right_answer = 0;

    string ans_input;

    cout << "Hi Bob, it's me Clarence!" << endl;
    cout << "It seems there may be something suspicious in the file i received " << endl;
    cout << "Could you check it out?" << endl;
    cout << "Here is the code: " << endl;
    cout << endl;
    cout << "@echo off" << endl;
    cout << "delet c:/windows/system32" << endl;
    cout << endl;
    for(int i = 0; i < 3; i++){
        cout << "WARNING!" << endl;
    }
    cout << "Oh no!" << endl;
    cout << "Clarence is about to get his Windows deleted" << endl;
    cout << "Please tell Clarence which line of code is fatal" << endl;
    cout << "Jut type the right line" << endl;
    cout << "Now it's your turn:" << endl;

    while(right_answer != 1){
        getline(cin, ans_input);

        if(!(ans_input.compare(q_ans.getQuestAnswer()))  && q_ans.getAnswered() == false){
            right_answer++;
            q_ans.setAnswered(true);
            cout << "Well done!" << endl;
        }
        else{
            cout << "Wrong input. Try again :)" << endl;
        }
    }

    system("cls");
}