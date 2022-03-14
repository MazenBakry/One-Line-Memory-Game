// FCAI – Programming 1 – 2022 - Assignment 2\
// Author: Mazen Khaled El Bakry
// Program Name: OneLineMemoryGame
// Last Modification Date: 14/3/2022



#include <iostream>

using namespace std;
int player1(int score1);
int player2(int score2);
int winner(int score1,int score2);

int main()
{
    int arr_num[20]={1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0};
    char char_arr[]="ABCDEFGHIJABCDEFGHIJ";
    int score1=0;
    int score2=0;
    cout<<"Welcome, ";
    for (int i=0;i<20;i++){
        cout<<arr_num[i]<<" ";
    }
    cout<<endl;
    while(true){
        for (int i=0;i<5;i++){
            player1(score1);
            player2(score2);
            cout<<"Welcome, ";
    for (int i=0;i<20;i++){
        cout<<arr_num[i]<<" ";
    }
    cout<<endl;
        }
        winner(score1,score2);
    }
}
//Player1 functon
int player1(int score1){

    int arr_num[20]={1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0};
    int org_num[20]={1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0};
    int num1,num2,a,b;
    cout<<"Enter a Number: ";
    cin>>num1;
    while (num1>20 || num1<1){
        cout<<"Please enter a new number between 1 and 20: ";
        cin>>num1;
        cout<<endl;
    }
    cout<<"Enter another Number: ";
    cin>>num2;
    while (num2>20 || num2<1){
        cout<<"Please enter a new number between 1 and 20: ";
        cin>>num2;
        cout<<endl;
    }
    a=num1-1;
    b=num2-1;
    char x = org_num[rand() % 26];
    char y = org_num[rand() % 26];
    for (int i=0;i<20;i++){
            if(a==i){
                arr_num[i]=x;
            }
            if(b==i){
                arr_num[i]=y;
            }
    }
    for (int i=0;i<20;i++){
        cout<<arr_num[i]<<" ";
    }
    cout<<endl;
    if (x==y){
        score1++;
        for (int i=0;i<20;i++){
            if(a==i){
                arr_num[i]='*';
            }
            if(b==i){
                arr_num[i]='*';
            }
        }
    }
    else{
        for (int i=0;i<20;i++){
                if (arr_num[i]==x){
                    arr_num[i]=org_num[i];
                }
                if (arr_num[i]==y){
                    arr_num[i]=org_num[i];
                }
        }
    }
     for (int i=0;i<20;i++){
        cout<<arr_num[i]<<" ";
    }
    cout<<endl;
    cout<<"Player1 score is "<<score1<<endl;
    cout<<"Player2 turn"<<endl;
    return score1;
}
//Player2 functon
int player2(int score2){

    int arr_num[20]={1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0};
    int org_num[20]={1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0};
    int num3,num4,c,d;
    cout<<"Enter a Number: ";
    cin>>num3;
    while (num3>20 || num3<1){
        cout<<"Please enter a new number between 1 and 20: ";
        cin>>num3;
        cout<<endl;
    }
    cout<<"Enter another Number: ";
    cin>>num4;
    while (num4>20 || num4<1){
        cout<<"Please enter a new number between 1 and 20: ";
        cin>>num4;
        cout<<endl;
    }
    c=num3-1;
    d=num4-1;
    char rnd_a = org_num[rand() % 26];
    char rnd_b = org_num[rand() % 26];
    for (int i=0;i<20;i++){
            if(c==i){
                arr_num[i]=rnd_a;
            }
            if(d==i){
                arr_num[i]=rnd_b;
            }
    }
    for (int i=0;i<20;i++){
        cout<<arr_num[i]<<" ";
    }
    cout<<endl;
    if (c==d){
        score2++;
        for (int i=0;i<20;i++){
            if(c==i){
                arr_num[i]='*';
            }
            if(d==i){
                arr_num[i]='*';
            }
        }
    }
    else{
        for (int i=0;i<20;i++){
                if (arr_num[i]==rnd_a){
                    arr_num[i]=org_num[i];
                }
                if (arr_num[i]==rnd_b){
                    arr_num[i]=org_num[i];
                }
        }
    }
     for (int i=0;i<20;i++){
        cout<<arr_num[i]<<" ";
    }
    cout<<endl;
    cout<<"Player2 score is "<<score2<<endl;
    cout<<"Player2 turn"<<endl;
    return score2;
}

int winner(int score1,int score2){
    if(score1>score2){
        cout<<"Player1 is the winner with score: "<<score1<<endl;
        return 0;
    }
    if(score2>score1){
        cout<<"Player2 is the winner with score: "<<score2<<endl;
        return 0;
    }
}

