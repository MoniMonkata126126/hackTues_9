#include <iostream>
#include <conio.h>
#include <windows.h>
#include <fstream>
#include "quest_class.hpp"
#include "quest_two.hpp"

using namespace std;



void run_quest_two(){
    system("cls");

    QuestAnswer q_ans("karen.smith@yahoo.com");

    int right_answer = 0;

    string ans_input;

    cout << "Hi Bob, it's me Dave!" << endl;
    cout << "I just received an e-mail from totalyBankofAmerica@gsail.co " << endl;
    cout << "I also received e-mails from JotoAleksandrov@my-topola.net" << endl;
    cout << "And from karen.smith@yahoo.com" << endl;
    for(int i = 0; i < 3; i++){
        cout << "WARNING!" << endl;
    }
    cout << "Oh no!" << endl;
    cout << "Dave is about to get phished" << endl;
    cout << "Please tell Dave which e-mail is real because he is ignorant" << endl;
    cout << "Jut type the right e-mail!" << endl;
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