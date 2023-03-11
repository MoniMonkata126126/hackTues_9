#include <iostream>
#include <conio.h>
#include <windows.h>
#include <fstream>
#include "quest_class.hpp"
#include "quest_three.hpp"

using namespace std;



void run_quest_three(){
    system("cls");

    QuestAnswer q_ans("megadatess.com");

    int right_answer = 0;

    string ans_input;

    cout << "Hi Bob, it's me Jerome" << endl;
    cout << "This domain name has been troubling me with spam for a few days" << endl;
    cout << "Could you help me get rid of it" << endl;
    cout << "Resent spam message list:" << endl;
    cout << "quora.com(15); twitch.tv(8); megadatess.com(45)" << endl;
    for(int i = 0; i < 3; i++){
        cout << "WARNING!" << endl;
    }
    cout << "Help Jerome blacklist the domain" << endl;
    cout << "Write the right domain name to blacklist" << endl;
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