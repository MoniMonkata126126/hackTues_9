#include <iostream>
#include <conio.h>
#include <windows.h>
#include <fstream>
#include "quest_class.hpp"
#include "quest_one.hpp"

using namespace std;



void run_quest_one(){
    system("cls");

    QuestAnswer q_ans_one("sudo ufw allow 22/tcp");
    QuestAnswer q_ans_two("sudo ufw allow 443/tcp");
    QuestAnswer q_ans_three("sudo ufw allow 22/tcp");

    int right_answer = 0;

    string ans_input;

    cout << "sudo ufw allow 7777/tcp" << endl;
    cout << "sudo ufw allow 80/tcp" << endl;
    cout << "sudo ufw allow 143/tcp" << endl;
    for(int i = 0; i < 3; i++){
        cout << "WARNING!" << endl;
    }
    cout << "Connections dropped" << endl;
    cout << "Please raise the needed connections" << endl;
    cout << "Our company uses SSH(Secure Shell), HTTPS(Hypertext Transfer Protocol with SSL), SFTP(Secure File Transfer Protocol)" << endl;
    cout << "Their port numbers are 22; 443; 22" << endl;
    cout << "Now it's your turn:" << endl;

    while(right_answer != 3){
        getline(cin, ans_input);

        if(!(ans_input.compare(q_ans_one.getQuestAnswer()))  && q_ans_one.getAnswered() == false){
            right_answer++;
            q_ans_one.setAnswered(true);
            cout << "Well done!" << endl;
        }
        else if(!(ans_input.compare(q_ans_two.getQuestAnswer())) && q_ans_two.getAnswered() == false){
            right_answer++;
            q_ans_two.setAnswered(true);
            cout << "Well done!" << endl;
        }
        else if(!(ans_input.compare(q_ans_three.getQuestAnswer())) && q_ans_three.getAnswered() == false){
            right_answer++;
            q_ans_three.setAnswered(true);
            cout << "Well done!" << endl;
        }
        else{
            cout << "Wrong input. Try again :)" << endl;
        }
    }

    system("cls");
}