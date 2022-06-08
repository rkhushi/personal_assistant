#include <bits/stdc++.h>
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

void greetings(string s){
    time_t now=time(0);
    tm *time = localtime(&now);

    if(time->tm_hour<12){
        cout<<"Good Morning "<<s<<endl;
        string phrase = "Good Morning";
        string command = "espeak -ven-us+f3 -s130 \""+phrase+"\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }else if(time->tm_hour>=12 && time->tm_hour<=16){
        cout<<"Good Afternoon "<<s<<endl;
        string phrase = "Good Afternoon";
        string command = "espeak -ven-us+f3 -s130 \""+phrase+"\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }else if(time->tm_hour>16 && time->tm_hour<=24){
        cout<<"Good Evening "<<s<<endl;
        string phrase = "Good Evening";
        string command = "espeak -ven-us+f3 -s130 \""+phrase+"\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
}

void datetime(){
    time_t now = time(0);
    char *dt = ctime(&now);
    cout<<"Date and Time is "<<dt<<endl;
}

void pass(int n){
    
    string ch1="password";
    string ch;
    cout << "\n\t\tEnter Password : ";
    string phrase = "Enter Password";
    string command = "espeak -ven-us+f3 -s130 \""+phrase+"\"";
    const char *charCommand = command.c_str();
    system(charCommand);    
    cin>>ch;
    int flag=0;
   for(int i=0;i<ch1.size();i++){
       if(ch1[i]!=ch[i]){
           flag=1;
           break;
       }
    }
    if(flag==1){
        cout<<"Wrong Password"<<endl;
        string phrase = "Wrong Password";
        string command = "espeak -ven-us+f3 -s130 \""+phrase+"\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }else{
        return;
    }
}

int main(){
    system("cls");
    string username;
    string password;
    string command;

    do{
        
        cout<<"Enter Username: ";
        string phrase = "Enter Username";
        string command = "espeak -ven-us+f3 -s130 \""+phrase+"\"";
        const char *charCommand = command.c_str();
        system(charCommand);
        getline(cin,username);
        pass(1);

        //greetings page
        greetings(username);
        do{
            cout<<"Enter your command: "<<endl;
            string phrase = "How can I help you?";
            string command = "espeak -ven-us+f3 -s130 \""+phrase+"\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            getchar();
            getline(cin,command);
            cout<<endl;
            STARTUPINFO startInfo = {0};
            PROCESS_INFORMATION processInfo = {0};
            if(command=="hello"||command=="hi"){
                cout<<"Hello "<<username<<endl;
                string phrase = "Hello";
                string command = "espeak -ven-us+f3 -s130 \""+phrase+"\"";
                const char *charCommand = command.c_str();
                system(charCommand);
                string phrase1 = username;
                string command1 = "espeak -ven-us+f3 -s130 \""+phrase1+"\"";
                const char *charCommand1 = command1.c_str();
                system(charCommand1);
                getchar();
               
            }else if(command=="what is the time"){
                datetime();
                getchar();
            }else if(command=="open notepad"){
                cout<<"Opening notepad"<<endl;
                string phrase = "Opening notepad";
                string command = "espeak -ven-us+f3 -s130 \""+phrase+"\"";
                const char *charCommand = command.c_str();
                system(charCommand);
                CreateProcess(TEXT("C:\\Windows\\notepad.exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
                getchar();
            }else if(command=="open paint"){
                cout<<"Opening paint"<<endl;
                string phrase = "Opening paint";
                string command = "espeak -ven-us+f3 -s130 \""+phrase+"\"";
                const char *charCommand = command.c_str();
                system(charCommand);
                CreateProcess(TEXT("C:\\Program Files\\WindowsApps\\Microsoft.Paint_11.2204.2.0_x64__8wekyb3d8bbwe\\PaintApp\\mspaint.exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
                getchar();
            }else if(command=="open word"){
                cout<<"Opening word"<<endl;
                string phrase = "Opening word";
                string command = "espeak -ven-us+f3 -s130 \""+phrase+"\"";
                const char *charCommand = command.c_str();
                system(charCommand);
                CreateProcess(TEXT("C:\\Program Files\\Microsoft Office\\root\\Office16\\WINWORD.EXE"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
                getchar();
            }else if(command=="open excel"){
                cout<<"Opening excel"<<endl;
                string phrase = "Opening excel";
                string command = "espeak -ven-us+f3 -s130 \""+phrase+"\"";
                const char *charCommand = command.c_str();
                system(charCommand);
                CreateProcess(TEXT("C:\\Program Files\\Microsoft Office\\root\\Office16\\EXCEL.EXE"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
                getchar();
            }else if(command=="open power point"){
                cout<<"Opening power point"<<endl;
                string phrase = "Opening power point";
                string command = "espeak -ven-us+f3 -s130 \""+phrase+"\"";
                const char *charCommand = command.c_str();
                system(charCommand);
                CreateProcess(TEXT("C:\\Program Files\\Microsoft Office\\root\\Office16\\POWERPNT.EXE"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
                getchar();
            }else if(command=="open google"){
                cout<<"Opening Google"<<endl;
                string phrase = "Opening Google";
                string command = "espeak -ven-us+f3 -s130 \""+phrase+"\"";
                const char *charCommand = command.c_str();
                system(charCommand);
                char url[100]="http://google.com/";
                ShellExecute(NULL,"open",url,NULL,NULL,SW_SHOWDEFAULT);
                getchar();
            }else if(command=="close google"){
                cout<<"Closing Google"<<endl;
                string phrase = "Closing Google";
                string command = "espeak -ven-us+f3 -s130 \""+phrase+"\"";
                const char *charCommand = command.c_str();
                system(charCommand);
                system("TASKKILL /IM chrome.exe /F");
                getchar();
            }else if(command=="open youtube"){
                cout<<"Opening youtube"<<endl;
                string phrase = "Opening youtube";
                string command = "espeak -ven-us+f3 -s130 \""+phrase+"\"";
                const char *charCommand = command.c_str();
                system(charCommand);
                char url[100]="https://www.youtube.com/";
                ShellExecute(NULL,"open",url,NULL,NULL,SW_SHOWDEFAULT);
                getchar();
            }else if(command=="bye"|| command=="exit"){
                cout<<"Good Bye, see you soon!"<<endl;
                string phrase = "Good Bye, see you soon";
                string command = "espeak -ven-us+f3 -s130 \""+phrase+"\"";
                const char *charCommand = command.c_str();
                system(charCommand);
                exit(0);
            }else{
                cout<<"Sorry could not understand the commad."<<endl;
                string phrase = "Sorry could not understand the commad.";
                string command = "espeak -ven-us+f3 -s130 \""+phrase+"\"";
                const char *charCommand = command.c_str();
                system(charCommand);
            }
        }while(1);
    }while(1);
    
}