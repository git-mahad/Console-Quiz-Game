#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    string name,menu,ans;
    int start,score=0;
     cout<<"______________________________________________________________"<<endl;
     cout<<"                      welcome to game quiz                    "<<endl;
     cout<<"______________________________________________________________"<<endl;
     cout<<"enter your name = ";
     cin>>name;
     
     system("CLS");
     do
     {
         cout<<"**********************************************************"<<endl;
         cout<<"            Menu of the game                             "<<endl;
         cout<<"**********************************************************"<<endl;
         cout<<"> Press S to start the game."<<endl;
         cout<<"> Press V to view the score."<<endl;
         cout<<"> Press R to restart game score"<<endl;
         cout<<"> Press H for help."<<endl;
         cout<<"> Press Q to quit the game."<<endl;
         cin>>menu;
         system("CLS");
         if(menu=="q"|| menu=="Q")
         break;
         else if(menu=="h"||menu=="H")
         {
             cout<<"Here are some of the rules and the regulations of the game."<<endl;
             getch();
             cout<<"Firstly, there will be no houting and shouting while playing the game"<<endl;
             getch();
             cout<<"there are 4 categories in the game"<<endl;
             getch();
             cout<<"you can choose any one of them."<<endl;
             getch();
             cout<<"each categury consists of 5 question"<<endl;
             getch();
             cout<<"each qoustion carrys 100 marks"<<endl;
             getch();
             cout<<"correct answer will gave you +100 marks while wrong question will gave you -50 marks"<<endl;
             cout<<"press any key to continou"<<endl;
             getch();

         }
        else if(menu=="s"||menu=="S")
         {
             cout<<name<<" ,select a option from the following categories:"<<endl;
             cout<<"1.Sports            2.programming"<<endl;
             cout<<"3.science           4.pakistan studies"<<endl;
             cin>>start;
             system("CLS");
             if(start==1)
             {
                 cout<<"q1: who won psl match in 2016?"<<endl;
                 cout<<"1=multan                  2=islamabad"<<endl;
                 cout<<"3=peshawar                4=quetta"<<endl;
                 cout<<"enter your option number"<<endl;
                 cin>>ans;
                 if(ans=="2")
                 {
                     cout<<"hurray!!! your answer is corret!!!!"<<endl;
                 score=score+100;
                 cout<<"press any key to move next question...";
                 getch();
                 system("CLS");
                    
                   }
                 else
                 {
                     cout<<"sorry!!your answer is not correct"<<endl;
                     score=score-50;
                      cout<<"press any key to move next question...";
                     getch();
                      system("CLS");
                     
                  }
                cout<<"q2: how many world cups pakistan won ?"<<endl;
                cout<<"1=one                2=three"<<endl;
                cout<<"3=none               4=five"<<endl;
                cout<<"enter your option number"<<endl;
                cin>>ans;
                if(ans=="1")
                {
                    {cout<<"hurray your answer is corret!!!!"<<endl;
                    score=score+100;
                     cout<<"press any key to move next question...";
                 getch();
                 system("CLS");}

                }
                else
                {
                  cout<<"sorry!!your answer is not correct"<<endl;
                     score=score-50;  
                      cout<<"press any key to move next question...";
                 getch();
                 system("CLS");

                }
                cout<<"q3: how many players plays a cricket match ?"<<endl;
                cout<<"1=eleven             2=ten"<<endl;
                cout<<"3=tweleve            4=fifteen"<<endl;
                cout<<"enter your option number"<<endl;
                cin>>ans;
                if(ans=="1")
                {
                    cout<<"hurray your answer is corret!!!!"<<endl;
                    score=score+100;
                     cout<<"press any key to move next question...";
                 getch();
                 system("CLS");

                }
                else
                {
                     cout<<"sorry!!your answer is not correct"<<endl;
                     score=score-50;
                      cout<<"press any key to move next question...";
                 getch();
                 system("CLS");

                }
                cout<<"q4: how many days a test match is played ?"<<endl;
                cout<<"1=ten                2=five"<<endl;
                cout<<"3=seven              4=nine"<<endl;
                cout<<"enter your option number"<<endl;
                cin>>ans;
                if(ans=="2")
                {
                     cout<<"hurray your answer is corret!!!!"<<endl;
                    score=score+100;
                     cout<<"press any key to move next question...";
                 getch();
                 system("CLS");

                }
                else
                {
                    
                     cout<<"sorry!!your answer is not correct"<<endl;
                     score=score-50;
                      cout<<"press any key to move next question...";
                 getch();
                 system("CLS");

                }
                cout<<"q5: how many overs are played in one day in a test match ?"<<endl;
                cout<<"1=fifty              2=ninety"<<endl;
                cout<<"3=twenty five        4=twenty"<<endl;
                cout<<"enter your option number"<<endl;
                cin>>ans;
                if(ans=="2")
                {
                     cout<<"hurray your answer is corret!!!!"<<endl;
                    score=score+100;
                     cout<<"press any key to move next question...";
                 getch();
                 system("CLS");

                }
                else
                {
                     cout<<"sorry!!your answer is not correct"<<endl;
                     score=score-50;
                      cout<<"press any key to move next question...";
                 getch();
                 system("CLS");

                }
                 
                 
             } 
                 
             else if(start==2)
             {
                 cout<<"q1: how many types of loops are ther in c++ ?"<<endl;
                 cout<<"1:four              2:five"<<endl;
                 cout<<"3:tow               4:three"<<endl;
                 cout<<"enter your option number"<<endl;
                cin>>ans;
                if(ans=="3")
                {
                     cout<<"hurray your answer is corret!!!!"<<endl;
                    score=score+100;
                     cout<<"press any key to move next question...";
                 getch();
                 system("CLS");
                }
                else
                
                      
                {
                     cout<<"sorry!!your answer is not correct"<<endl;
                     score=score-50;
                      cout<<"press any key to move next question...";
                 getch();
                 system("CLS");

                }
                     cout<<"q2: how many tyes of languages of computer science ?"<<endl;
                     cout<<"1:three             2:two"<<endl;
                     cout<<"3:five              4:one"<<endl;
                      cout<<"enter your option number"<<endl;
                      cin>>ans;
                      if(ans=="1")
                      {
                           cout<<"hurray your answer is corret!!!!"<<endl;
                    score=score+100;
                     cout<<"press any key to move next question...";
                 getch();
                 system("CLS");
                      }
                      else
                      {
                           cout<<"sorry!!your answer is not correct"<<endl;
                     score=score-50;
                      cout<<"press any key to move next question...";
                 getch();
                 system("CLS");
                      }
                      cout<<"q3: how many types of errors are there in c++ ?"<<endl;
                      cout<<"1:two              2:three"<<endl;
                      cout<<"3:five             4:seven"<<endl;
                      cout<<"enter your option number"<<endl;
                      cin>>ans;
                      if(ans=="2")
                      {
                            cout<<"hurray your answer is corret!!!!"<<endl;
                    score=score+100;
                     cout<<"press any key to move next question...";
                 getch();
                 system("CLS");
                      }
                      else
                      {
                          cout<<"sorry!!your answer is not correct"<<endl;
                     score=score-50;
                      cout<<"press any key to move next question...";
                 getch();
                 system("CLS");
                      }
                      cout<<"q4: how many types of language translator are there ?"<<endl;
                      cout<<"1=three                2=five"<<endl;
                      cout<<"3=nine                 4=seven"<<endl;
                       cout<<"enter your option number"<<endl;
                      cin>>ans;
                      if(ans=="1")
                      {
                       cout<<"hurray your answer is corret!!!!"<<endl;
                       score=score+100;
                       cout<<"press any key to move next question...";
                       getch();
                     system("CLS");   
                      }
                      else
                      {
                          cout<<"sorry!!your answer is not correct"<<endl;
                     score=score-50;
                      cout<<"press any key to move next question...";
                 getch();
                 system("CLS");
                      }
                      cout<<"q5: how many types of logical operators are ther ?"<<endl;
                      cout<<"1=five                 2=two"<<endl;
                      cout<<"3=nine                 4=three"<<endl;
                        cout<<"enter your option number"<<endl;
                      cin>>ans;
                      if(ans=="4")
                      {
                         cout<<"hurray your answer is corret!!!!"<<endl;
                       score=score+100;
                       cout<<"press any key to move next question...";
                       getch();
                     system("CLS"); 
                      }
                      else
                      {
                           cout<<"sorry!!your answer is not correct"<<endl;
                     score=score-50;
                      cout<<"press any key to move next question...";
                 getch();
                 system("CLS");
                      }
             }
             else if(start==3)
             {
                 cout<<"q1: how many days are there in one leap year ? "<<endl;
                 cout<<"1=365                   2=360"<<endl;
                 cout<<"3=366                   4=380"<<endl;
                  cout<<"enter your option number"<<endl;
                      cin>>ans;
                      if(ans=="3")
                      {
                        cout<<"hurray your answer is corret!!!!"<<endl;
                       score=score+100;
                       cout<<"press any key to move next question...";
                       getch();
                     system("CLS");  
                      }
                      else
                      {
                           cout<<"sorry!!your answer is not correct"<<endl;
                     score=score-50;
                      cout<<"press any key to move next question...";
                 getch();
                 system("CLS");
                      }
                  cout<<"q2: how many seasons are there ?"<<endl;
                  cout<<"1=five                 2=nine"<<endl;
                  cout<<"3=seven                4=four"<<endl;   
                  cout<<"enter your option number"<<endl;
                      cin>>ans;
                      if(ans=="4")
                      {
                           cout<<"hurray your answer is corret!!!!"<<endl;
                       score=score+100;
                       cout<<"press any key to move next question...";
                       getch();
                     system("CLS");
                      } 
                      else
                      {
                          cout<<"sorry!!your answer is not correct"<<endl;
                     score=score-50;
                      cout<<"press any key to move next question...";
                 getch();
                 system("CLS");
                      }
                      cout<<"q3: how many years are ther in one century ?"<<endl;
                      cout<<"1=twenty           2=hundrad"<<endl;
                      cout<<"3=ninety           4=fifty"<<endl;
                       cout<<"enter your option number"<<endl;
                      cin>>ans;
                      if(ans=="2")
                      {
                       cout<<"hurray your answer is corret!!!!"<<endl;
                       score=score+100;
                       cout<<"press any key to move next question...";
                       getch();
                     system("CLS");
                      }
                      else
                      {
                          cout<<"sorry!!your answer is not correct"<<endl;
                     score=score-50;
                      cout<<"press any key to move next question...";
                 getch();
                 system("CLS");
                      }
                       cout<<"q4: formula of water ?"<<endl;
                      cout<<"1=H2O           2=KMNO4"<<endl;
                      cout<<"3=CO2           4=O2"<<endl;
                       cout<<"enter your option number"<<endl;
                      cin>>ans;
                      if(ans=="1")
                      {
                       cout<<"hurray your answer is corret!!!!"<<endl;
                       score=score+100;
                       cout<<"press any key to move next question...";
                       getch();
                     system("CLS");
                      }
                      else
                      {
                          cout<<"sorry!!your answer is not correct"<<endl;
                     score=score-50;
                      cout<<"press any key to move next question...";
                 getch();
                 system("CLS");
                      }
                       cout<<"q5: how many layers of atmosphere are there ?"<<endl;
                      cout<<"1=five         2=nine"<<endl;
                      cout<<"3=two          4=no"<<endl;
                       cout<<"enter your option number"<<endl;
                      cin>>ans;
                      if(ans=="1")
                      {
                       cout<<"hurray your answer is corret!!!!"<<endl;
                       score=score+100;
                       cout<<"press any key to move next question...";
                       getch();
                     system("CLS");
                      }
                      else
                      {
                          cout<<"sorry!!your answer is not correct"<<endl;
                     score=score-50;
                      cout<<"press any key to move next question...";
                 getch();
                 system("CLS");
                      }

                      

             }
             else if(start==4)
             {
                  cout<<"q1: how many provences pakistan have ?"<<endl;
                      cout<<"1=five           2=four"<<endl;
                      cout<<"3=ten           4=six"<<endl;
                       cout<<"enter your option number"<<endl;
                      cin>>ans;
                      if(ans=="2")
                      {
                       cout<<"hurray your answer is corret!!!!"<<endl;
                       score=score+100;
                       cout<<"press any key to move next question...";
                       getch();
                     system("CLS");
                      }
                      else
                      {
                          cout<<"sorry!!your answer is not correct"<<endl;
                     score=score-50;
                      cout<<"press any key to move next question...";
                 getch();
                 system("CLS");
                      }
                      cout<<"q2: how many stars are there in pakistan flag ?"<<endl;
                      cout<<"1=nine           2=five"<<endl;
                      cout<<"3=one           4=two"<<endl;
                       cout<<"enter your option number"<<endl;
                      cin>>ans;
                      if(ans=="3")
                      {
                       cout<<"hurray your answer is corret!!!!"<<endl;
                       score=score+100;
                       cout<<"press any key to move next question...";
                       getch();
                     system("CLS");
                      }
                      else
                      {
                          cout<<"sorry!!your answer is not correct"<<endl;
                     score=score-50;
                      cout<<"press any key to move next question...";
                 getch();
                 system("CLS");
                      }
                      cout<<"q3: when does pakistan came into being ?"<<endl;
                      cout<<"1=1940           2=1947"<<endl;
                      cout<<"3=1999           4=1944"<<endl;
                       cout<<"enter your option number"<<endl;
                      cin>>ans;
                      if(ans=="2")
                      {
                       cout<<"hurray your answer is corret!!!!"<<endl;
                       score=score+100;
                       cout<<"press any key to move next question...";
                       getch();
                     system("CLS");
                      }
                      else
                      {
                          cout<<"sorry!!your answer is not correct"<<endl;
                     score=score-50;
                      cout<<"press any key to move next question...";
                 getch();
                 system("CLS");
                      }
                      cout<<"q4: who is founder of pakistan ?"<<endl;
                      cout<<"1=quaid azam           2=allama iqbal"<<endl;
                      cout<<"3=ayoub khan           4=ali khan"<<endl;
                       cout<<"enter your option number"<<endl;
                      cin>>ans;
                      if(ans=="1")
                      {
                       cout<<"hurray your answer is corret!!!!"<<endl;
                       score=score+100;
                       cout<<"press any key to move next question...";
                       getch();
                     system("CLS");
                      }
                      else
                      {
                          cout<<"sorry!!your answer is not correct"<<endl;
                     score=score-50;
                      cout<<"press any key to move next question...";
                 getch();
                 system("CLS");
                      }
                      cout<<"q5: which city is capital of pakistan ?"<<endl;
                      cout<<"1=lahore           2=karachi"<<endl;
                      cout<<"3=islamabad           4=pishawar"<<endl;
                       cout<<"enter your option number"<<endl;
                      cin>>ans;
                      if(ans=="3")
                      {
                       cout<<"hurray your answer is corret!!!!"<<endl;
                       score=score+100;
                       cout<<"press any key to move next question...";
                       getch();
                     system("CLS");
                      }
                      else
                      {
                          cout<<"sorry!!your answer is not correct"<<endl;
                     score=score-50;
                      cout<<"press any key to move next question...";
                 getch();
                 system("CLS");
                      }


             }
         
             else
             {
                 {cout<<"invalid input";}
             }
             
         }
         else if(menu=="r"||menu=="R")
         {
             score=0;
             cout<<"score is reset!"<<endl;
             cout<<"press any key to contineou...";
             getch();
             system("CLS");
         }
         else if(menu=="v"||menu=="V")
         {
             cout<<name<<" has scored "<<score<< " marks"<<endl;
             cout<<"press any key to contineou..."<<endl;
             getch();
             system("CLS");
         }

         
     } while (menu!="q"&&menu!="Q");
 cout<<"game over!!";   
  
return 0;
}
