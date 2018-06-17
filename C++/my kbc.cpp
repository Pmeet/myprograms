#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<ctime>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>
#define max 10
using namespace std;


int _kbhit(void)
{
  struct termios oldt, newt;
  int ch;
  int oldf;
 
  tcgetattr(STDIN_FILENO, &oldt);
  newt = oldt;
  newt.c_lflag &= ~(ICANON | ECHO);
  tcsetattr(STDIN_FILENO, TCSANOW, &newt);
  oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
  fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);
 
  ch = getchar();
 
  tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
  fcntl(STDIN_FILENO, F_SETFL, oldf);
 
  if(ch != EOF)
  {
    ungetc(ch, stdin);
    return 1;
  }
 
  return 0;
}


string amnt[]=  {
                "5 thousand rupees",
                "10 thousand rupees",
                "50 thousand rupees",
                "1 lac rupees",
                "10 lacs rupees",
                "25 lacs rupees",
                "50 lacs rupees",
                "75 lacs rupees",
                "1 crore rupees",
                "5 crore rupees"
                };

class Questions{
    bool displayed=false;
  public:
    char options[4][30];
    int ans;
    char que[100];
    void display(){
        cout<<"The question is \n";
        cout<<que;
        cout<<"\nYour options are \n"<<options[0]<<"\n"<<options[1]<<"\n"<<options[2]<<"\n"<<options[3]<<endl;
    }
    bool check_answer(int answer){
        return ans==answer; 
    }
    bool check_if_displayed(){
        return displayed;
    }
    void is_displayed(){
        displayed=true;
    }
};

class Lifeline{
  public:
    int lifeline_left[4]={1,1,1,1};
    void ff(Questions a);
    bool dd(Questions a);
    int  palat(int i);
    void leave(string name);
    bool check_lifeline_left(){
        int i = 4;
        while(i--){ if(lifeline_left[i-1] != 0){
                return true;
            }
        }
        return false;
    }
};

void Lifeline :: ff(Questions a){
    srand(time(0));
    cout<<"\nYour new options are \n";
    int k=0;
    while(1){
        k=rand()%10;
        if(k<4 && k!=a.ans) break;
    }
    cout<<a.options[a.ans]<<"\n"<<a.options[k]<<endl;;
    lifeline_left[0]--;
}

bool Lifeline :: dd(Questions a){
    int ans1,ans2;
    cout<<"\nEnter your 1st answer : ";
    cin>>ans1;
    lifeline_left[1]--;
    if(a.ans==ans1)
        return true;
    cout<<"\nEnter your 2nd answer : ";
    if(a.ans==ans2)
        return true;
    else
        return false;

}

int Lifeline :: palat(int i){
    int k;
    while(1){
        k=rand()%10;
        if(k<max && k!=i)
            lifeline_left[2]--;
            return k;
    }
}

void Lifeline :: leave(string name){
    cout<<"\nUntil next time, Goodbye "<<name;
    exit(1);
}

void start_game(){

    cout<<"Welcome to KBC";
    cout<<"\nThese are the rules of this game\n1. There are 4 lifelines : \n 50-50 \n Double-Dip \n Flip the question \n Exit\n2. There will be total 10 questions with prizes starting from 50000rs to 5 crore rs\n3.There will be a time limit for the first five questions of 1 minute for each question and if you cannot answer the question in that time then you will lose and will not recieve any reward.\n4.If you want to use a lifeline during a question just type 0 when you are asked to enter the answer of a question and then type the number of the lifeline you want to use\n5.While giving answer only type in the option number of the answer which you think is correct.\n6.Most importantly, have fun and learn\n";

}

int main(){
    Lifeline lline;
    string name;
    int lifeline_num;
    int rand_num;
    cout<<"Please enter your first name: ";
    cin>>name;
    Questions questions[50];
    int answer;
    fstream inf;
    inf.open(("ques.txt"), ios::in);
    // for initialising all the 50 questions
    for(int i=0 ; i<50; i++){
        inf.getline(questions[i].que, 100);
        for (int j = 0; j <= 3; j++)
            inf.getline(questions[i].options[j],20);
        inf >> questions[i].ans;
        inf.seekg(2,ios::cur);
    }
    inf.close();
    start_game();
    for(int k=0 ; k<max ; k++){
        //for generating random question number
        while(1){
            rand_num=rand()%100;
            if (rand_num <= 50 && !(questions[rand_num].check_if_displayed()))
                break;
        }
        questions[rand_num].display();
        questions[rand_num].is_displayed();
        question:
        cout<<"\nEnter your answer or enter 0 if you want to use a lifeline ";

        // code for timer
        if(k<5){

            clock_t start = clock();

            while ( ! _kbhit() ) //Check for keyboard hit
            {
                //Check if 15 sec timer expired or not
                if (((clock () - start)/ CLOCKS_PER_SEC ) >= 15) 
                {
                    cout<<"Time expired, you lost the game!";
                    exit(1);                           //Set new timer
                }
            }

        }


        cin>>answer;
        if(questions[k].check_answer(answer)){
            correct:
            cout<<"\nCorrect\n"<<endl;
            cout<<"You won "<<amnt[k]<<"\n";
            if(k!=max)
            {
                cout<<"\nShould we proceed to the next question ? (Y for yes or N for no)";
                char c;
                cin>>c;
                if(c=='Y'||c=='y')
                    system("CLS");
                else
                    break;
            }
            else{
                cout<<"\n Congratulations you have won the game."<<endl;
            }
        }
        else if(answer==0){
            if(!lline.check_lifeline_left()){
                cout<<"\nSorry no life lines left;\n please answer the question";
                goto question;
            }
            cout<<"\nFollowing are the life lines available";
            for (int i = 0; i < 4; i++)
            {
                if(lline.lifeline_left[i]!=0){
                    switch(i){
                        case 0: cout<<i+1<<"50-50\n";
                        case 1: cout<<i+1<<"Double dip\n";
                        case 2: cout<<i+1<<"Flip the question\n";
                        case 3: cout<<i+1<<"Leave\n";
                    }
                }
            }
            cout<<"\nEnter you choice number ";
            cin>>lifeline_num;     
            switch(lifeline_num-1){
                case 1:
                    lline.ff(questions[rand_num]);
                    goto question;
                    break;
                case 2:
                    if(lline.dd(questions[rand_num])){
                        goto correct;
                    }
                    else{
                        goto end;
                    }
                    break;
                case 3:
                    while(1){
                    rand_num=lline.palat(rand_num);
                    if(questions[rand_num].check_if_displayed())
                        rand_num=lline.palat(rand_num);
                    else
                        break;
                    }
                    cout<<"Your new question is \n";
                    questions[rand_num].display();
                    questions[rand_num].is_displayed();
                    break;
                case 4:
                    lline.leave(name);
            }

        }
        else{
            end:
            cout<<"\nIncorrect"<<endl;
            cout<<"\nThe total amount you won is"<<amnt[k];
            break;
        }
    }


    return 0;
}