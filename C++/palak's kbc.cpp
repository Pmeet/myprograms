#include<iostream>
#include<string.h>
#include<cstdlib>
#include <ctime>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>
using namespace std;

// keyboard hit function for countdown

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

    if (ch != EOF)
    {
        ungetc(ch, stdin);
        return 1;
    }

    return 0;
}

// keyboard hit function ends

//To handle doubleDip lifeline
bool doubleDipBit=false;
//To handle lifelines in program
bool lifeline_list[4];


class question
{
public:
    question()
    {
        strcpy(que,"Not initialized");
    }
    question(char q[100],char op0[20],char op1[20],char op2[20],char op3[20],int Ans)
    {
        strcpy(que,q);
        strcpy(op[0],op0);
        strcpy(op[1],op1);
        strcpy(op[2],op2);
        strcpy(op[3],op3);
        trueAns=Ans;
    }
    char que[200];
    char op[4][100];
    char c;
    int trueAns;
    int ans;
    int amount;

    //To use lifeline
    int lifeline(bool lifeline_list[4]);
    //To show questions n get ans from user
    int show();

};

bool check(int a[12],int num)
{
   int i=0;
    while(a[i]!=111)
    {
        if (a[i]==num)
            return false;
        i++;
    }
    return true;
}

int stackp[12];

int main()
{
    int cnt=0,Amnt=5000;
    int i=0;
    int random;
    question obj[25];

    //Initialize array to have difference in filled values and not filled values(Due to this the question will be random but not repeated)
    for (int j=0;j<12;j++)
    {
        stackp[j]=111;
    }
    //Initialize lifeline for the first time lifeline_list as user have not used any lifeline
    for (int j=0;j<4;j++)
    {
            lifeline_list[j]=true;
    }
    //Initialization of objectc start here
   strcpy(obj[0].que,"Que. Hitler party which came into power in 1933 is known as");
    strcpy(obj[0].op[0],"1. Labour Party");
    strcpy(obj[0].op[1],"2. Nazi Party");
    strcpy(obj[0].op[2],"3. Ku-Klux-Klan");
    strcpy(obj[0].op[3],"4. Democratic Party");
    obj[0].trueAns=2;

    strcpy(obj[1].que,"Que. FFC stands for");
    strcpy(obj[1].op[0],"1. Foreign Finance Corporation");
    strcpy(obj[1].op[1],"2. Film Finance Corporation");
    strcpy(obj[1].op[2],"3. Federation of Football Council");
    strcpy(obj[1].op[3],"4. None of the above");
    obj[1].trueAns=2;

    strcpy(obj[2].que,"Que. Exposure to sunlight helps a person improve his health because");
    strcpy(obj[2].op[0],"1. the infrared light kills bacteria in the body");
    strcpy(obj[2].op[1],"2. resistance power increases");
    strcpy(obj[2].op[2],"3. the pigment cells in the skin get stimulated and produce a healthy tan");
    strcpy(obj[2].op[3],"4. the ultraviolet rays convert skin oil into Vitamin D");
    obj[2].trueAns=4;

    strcpy(obj[3].que,"Que. First China War was fought between");
    strcpy(obj[3].op[0],"1. China and Britain");
    strcpy(obj[3].op[1],"2. China and Britain");
    strcpy(obj[3].op[2],"3. China and Egypt");
    strcpy(obj[3].op[3],"4. China and Greek");
    obj[3].trueAns=1;

    strcpy(obj[4].que,"Que. Friction can be reduced by changing from");
    strcpy(obj[4].op[0],"1. nsliding to rolling");
    strcpy(obj[4].op[1],"2. rolling to sliding");
    strcpy(obj[4].op[2],"3. potential energy to kinetic energy");
    strcpy(obj[4].op[3],"4. dynamic to static");
    obj[4].trueAns=1;

    strcpy(obj[5].que,"Que. Film and TV institute of India is located at");
    strcpy(obj[5].op[0],"1. Pune (Maharashtra)");
    strcpy(obj[5].op[1],"2. Rajkot (Gujarat)");
    strcpy(obj[5].op[2],"3. Pimpri (Maharashtra)");
    strcpy(obj[5].op[3],"4. Perambur (Tamilnadu)");
    obj[5].trueAns=1;

    strcpy(obj[6].que,"Que. Federation Cup, World Cup, Allywyn International Trophy and Challenge Cup are awarded to winners of");
    strcpy(obj[6].op[0],"1. Tennis");
    strcpy(obj[6].op[1],"2. Volleyball");
    strcpy(obj[6].op[2],"3. Basketball");
    strcpy(obj[6].op[3],"4. Cricket");
    obj[6].trueAns=2;

    strcpy(obj[7].que,"Que. Each year World Red Cross and Red Crescent Day is celebrated on");
    strcpy(obj[7].op[0],"1. May 8");
    strcpy(obj[7].op[1],"2. May 18");
    strcpy(obj[7].op[2],"3. June 8");
    strcpy(obj[7].op[3],"4. June 18");
    obj[7].trueAns=1;

    strcpy(obj[8].que,"Que. Famous sculptures depicting art of love built some time in 950 AD � 1050 AD are");
    strcpy(obj[8].op[0],"1. Khajuraho temples");
    strcpy(obj[8].op[1],"2. Jama Masjid");
    strcpy(obj[8].op[2],"3. Sun temple");
    strcpy(obj[8].op[3],"4. Mahabalipuram temples");
    obj[8].trueAns=1;

    strcpy(obj[9].que,"Que. Gravity setting chambers are used in industries to remove");
    strcpy(obj[9].op[0],"1. SOx");
    strcpy(obj[9].op[1],"2. NOx");
    strcpy(obj[9].op[2],"3. suspended particulate matter");
    strcpy(obj[9].op[3],"4. CO");
    obj[9].trueAns=3;

    strcpy(obj[10].que,"Que. Guru Gobind Singh was");
    strcpy(obj[10].op[0],"1. the 10th Guru of the Sikhs");
    strcpy(obj[10].op[1],"2. founder of Khalsa");
    strcpy(obj[10].op[2],"3. author of Dasam Granth");
    strcpy(obj[10].op[3],"4. All of above");
    obj[10].trueAns=4;

    strcpy(obj[11].que,"Que. The ozone layer restricts");
    strcpy(obj[11].op[0],"1. Visible light");
    strcpy(obj[11].op[1],"2. Infrared radiation");
    strcpy(obj[11].op[2],"3. X-rays and gamma rays");
    strcpy(obj[11].op[3],"4. Ultraviolet radiation");
    obj[11].trueAns=4;

    strcpy(obj[12].que,"Que. Euclid was");
    strcpy(obj[12].op[0],"1. Greek mathematician");
    strcpy(obj[12].op[1],"2. Contributer of principles of logic as the basis of geometry");
    strcpy(obj[12].op[2],"3. Propounded the geometrical theorems");
    strcpy(obj[12].op[3],"4. All of the above");
    obj[12].trueAns=4;

    strcpy(obj[13].que,"Que. Ecology deals with");
    strcpy(obj[13].op[0],"1. Birds");
    strcpy(obj[13].op[1],"2. Cell formation");
    strcpy(obj[13].op[2],"3. Relation between organisms and their environment");
    strcpy(obj[13].op[3],"4. Tissues");
    obj[13].trueAns=3;

    strcpy(obj[14].que,"Who was the first Indian Chief of Army Staff of the Indian Army ?");
    strcpy(obj[14].op[0],"1. Gen. K.M. Cariappa");
    strcpy(obj[14].op[1],"2. Vice-Admiral R.D. Katari");
    strcpy(obj[14].op[2],"3. Gen. Maharaja Rajendra Singhji");
    strcpy(obj[14].op[3],"4. None of the above");
    obj[14].trueAns=1;

    strcpy(obj[15].que,"Que. Coral reefs in India can be found in");
    strcpy(obj[15].op[0],"1. the coast of Orissa");
    strcpy(obj[15].op[1],"2. Waltair");
    strcpy(obj[15].op[2],"3. Rameshwaram");
    strcpy(obj[15].op[3],"4. Trivandrum");
    obj[15].trueAns=3;

    strcpy(obj[16].que,"Que. FRS stands for");
    strcpy(obj[16].op[0],"1. Fellow Research System");
    strcpy(obj[16].op[1],"2. Federation of Regulation Society");
    strcpy(obj[16].op[2],"3. Fellow of Royal Society");
    strcpy(obj[16].op[3],"4. None of the above");
    obj[16].trueAns=3;

    strcpy(obj[17].que,"Que. The Biggest island in the world is");
    strcpy(obj[17].op[0],"1. Netherland");
    strcpy(obj[17].op[1],"2. Iceland");
    strcpy(obj[17].op[2],"3. Norve");
    strcpy(obj[17].op[3],"4. Greenland");
    obj[17].trueAns=4;

    strcpy(obj[18].que,"Que. The country called rising Sun is");
    strcpy(obj[18].op[0],"1. Chin");
    strcpy(obj[18].op[1],"2. Japan");
    strcpy(obj[18].op[2],"3. Norwe");
    strcpy(obj[18].op[3],"4. USA");
    obj[18].trueAns=2;

    strcpy(obj[19].que,"Que. The river Jordan flows out into the");
    strcpy(obj[19].op[0],"1. Dead Sea");
    strcpy(obj[19].op[1],"2. white Sea");
    strcpy(obj[19].op[2],"3. Pink Sea");
    strcpy(obj[19].op[3],"4. Live Sea");
    obj[19].trueAns=1;

    strcpy(obj[20].que,"Que. The largest coffee growing country is");
    strcpy(obj[20].op[0],"1. India");
    strcpy(obj[20].op[1],"2. USA");
    strcpy(obj[20].op[2],"3. Brazil");
    strcpy(obj[20].op[3],"4. chine");
    obj[20].trueAns=3;

    strcpy(obj[21].que,"Que. The longest river in the world is");
    strcpy(obj[21].op[0],"1. Nile");
    strcpy(obj[21].op[1],"2. Ganga");
    strcpy(obj[21].op[2],"3. kaveri");
    strcpy(obj[21].op[3],"4. Sindhu");
    obj[21].trueAns=2;

    strcpy(obj[22].que,"Que. The biggest dessert in the world");
    strcpy(obj[22].op[0],"1. Sahara");
    strcpy(obj[22].op[1],"2. kuch");
    strcpy(obj[22].op[2],"3. south Africa");
    strcpy(obj[22].op[3],"4. None of the Above");
    obj[22].trueAns=1;

    strcpy(obj[23].que,"Que. DRDL stands for");
    strcpy(obj[23].op[0],"1. Defence Research and Development Laboratary");
    strcpy(obj[23].op[1],"2. Department of Research and Development Laboratory");
    strcpy(obj[23].op[2],"3. Differential Research and Documentation Laboratary");
    strcpy(obj[23].op[3],"4. None of the above");
    obj[23].trueAns=1;

    strcpy(obj[24].que,"Que. Golf player Vijay Singh belongs to which country?");
    strcpy(obj[24].op[0],"1. USA");
    strcpy(obj[24].op[1],"2. Fiji");
    strcpy(obj[24].op[2],"3. India");
    strcpy(obj[24].op[3],"4. UK");
    obj[24].trueAns=2;

    cout<<"Welcome to KBC\n";
    cout<<"KAUN BANEGA COROR PATI\n";
    cout<<"The rules you already know!\n";
    cout<<"The life lies are\n";
    cout<<"1. 50-50\n";
    cout<<"2. expert advise\n";
    cout<<"3. Flip the Question\n";
    cout<<"4. Double Dip\n";


    while(true)
    {
        if (cnt==12)
        {
            cout<<"\n\nMany many Congratulations\n";
            cout<<"You win the game\n";
            break;
        }

        flip_que:
        random=((rand()%100)/4);
        //This code is to check either random question already asked ago or not and handle it
        if (check(stackp,random)==false)
            goto flip_que;
        stackp[i++]=random;
        obj[random].amount=Amnt;
        int result=obj[random].show();
        /* The show function Returns
            Returns 0 if Ans is True
            Returns 1 if Ans is False
            Returns 2 to handle flip question lifeline*/
        if (result==0)
        {
            cout<<"\n\nCongratulations\n";
            cout<<"You Won Rs "<<Amnt<<"\n";
            cout<<"----------------------------------\n\n\n";
            Amnt=Amnt*2;
            cnt++;
        }
        else if (result==1)
        {
            cout<<"\n\nSorry\n";
            cout<<"Correct Ans is "<<obj[random].op[obj[random].trueAns-1];
            cout<<"\nYou loose game\n";
            cout<<"Better luck next time.";
            break;
        }
        // For lifeline flip the question
        else if(result==2)
        {
            goto flip_que;
        }
    }

    return 0;
}

int question::show()
    {
        int var;
        cout<<"\nQuestion is for Amount "<<amount<<"\n";
        cout<<que<<"\n";
        cout<<op[0]<<"\n";
        cout<<op[1]<<"\n";
        cout<<op[2]<<"\n";
        cout<<op[3]<<"\n";
        revers:
        cout<<"Do you want to use lifeline?(y/n)";
        cin>>c;
        /* lifeline function
            Returns 3 to handle flip question lifeline
            Returns 4 to handle double Dip lifeline
            Returns 0 otherwise (It means the lifeline already handled in lifeline function)*/
        if (c=='y')
            var=lifeline(lifeline_list);
        else if (c!='n')
        {
            cout<<"Enter right choice again";
             goto revers;
        }
        if (var==3)
        {
                return var;
        }
        else if (var==4)
        {
            doubleDipBit=true;
        }
        doubleDip:
        cout<<"Enter your ans (15 seconds time limit) :";
        //For countdown
        if(doubleDipBit==false){
            clock_t start = clock();

            while (!_kbhit()) //Check for keyboard hit
            {
                //Check if 15 sec timer expired or not
                if (((clock() - start) / CLOCKS_PER_SEC) >= 15)
                {
                    cout << "Time expired, you lost the game!";
                    exit(1);
                }
            }
        }
        // ends
        
        cin>>ans;

        //check the ans
        if (ans==trueAns)
        {
            //for handle doubleDip lifeline
            if (doubleDipBit == true)
            {
                doubleDipBit=false;
                lifeline_list[3]=false;
            }
            //Return 0 for right ans
            return 0;
        }
        else
        {
            if (doubleDipBit == true)
            {
                cout<<"wrong Ans\n";
                cout<<"Try again\n";
                doubleDipBit=false;
                goto doubleDip;
            }
            //Return 1 for wrong ans
            return 1;
        }

    }

int question::lifeline(bool lifeline_list[4])
    {
        int n,rnd;

        choice:
        cout<<"\nlifelines are:\n";
        cout<<"1. 50-50\n";
        cout<<"2. expert advise\n";
        cout<<"3. Flip the Question\n";
        cout<<"4. Double Dip\n";
        cout<<"Enter your choice:";
        cin>>n;
        switch(n)
        {
            case 1: if (lifeline_list[0]==true)
                    {
                        cout<<"\nThe new options are...\n";
                        again_try:
                        rnd=(rand()%4);
                        if (rnd==(trueAns-1))
                            goto again_try;
                        else if (rnd>trueAns)
                        {
                            cout<<op[trueAns-1]<<"\n";
                            cout<<op[rnd]<<"\n";
                        }
                        else
                        {
                            cout<<op[rnd]<<"\n";
                            cout<<op[trueAns-1]<<"\n";
                        }
                        lifeline_list[0]=false;
                    }
                    else
                    {
                        cout<<"This lifeline is not available!";
                        goto choice;
                    }
                    break;

            case 2: if (lifeline_list[1]==true)
                    {
                        cout<<"\nThe Expert is Thinking......\n";
                        cout<<"The expert is suggesting \n\n";
                        cout<<op[trueAns-1];
                        lifeline_list[1]=false;
                    }

                    else
                    {
                        cout<<"This lifeline is not available!";
                        goto choice;
                    }
                    break;

            case 3: if (lifeline_list[n-1]==true)
                    {
                            lifeline_list[n-1]=false;
                            //Return 3 to handle flip the question lifeline in show function
                            return n;
                    }
                    else
                    {
                        cout<<"This lifeline is not available!";
                        goto choice;
                    }
                    break;

            case 4: if (lifeline_list[n-1]==true)
                    {
                        //Returns 4 to handle doubleDip lifeline in show function
                        return n;
                    }
                    else
                    {
                        cout<<"This lifeline is not available!";
                        goto choice;
                    }
                    break;

            default: cout<<"Enter right choice again!";
                        goto choice;
                        break;
        }
        return 0;
    }
