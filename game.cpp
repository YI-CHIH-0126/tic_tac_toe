#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
int judge(string[3][3],int);

int main(){
    //init
    int temp;
    int tie =9;
    string state="O";
    string arr[3][3]={
        {"1","2","3"},
        {"4","5","6"},
        {"7","8","9"}
    };
    //output field
    cout<<"---------";
    for(int i=0;i<3;i++){
        cout<<endl;
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<"   ";
        }
    }
    cout<<"\n---------";

    
    while(judge(arr,tie)){
        if(state=="O"){
            cout<<endl<<"enter the number to fill O:";
            cin>>temp;
            tie--;
            arr[temp/3][temp%3-1]="O";
            system("cls");
            cout<<"---------";
            for(int i=0;i<3;i++){
                cout<<endl;
                for(int j=0;j<3;j++){
                    cout<<arr[i][j]<<"   ";
                }
            }
            cout<<"\n---------";
            state="X";
        }else{
            cout<<endl<<"enter the number to fill X:";
            cin>>temp;
            tie--;
            arr[temp/3][temp%3-1]="X";
            system("cls");
            cout<<"---------";
            for(int i=0;i<3;i++){
                cout<<endl;
                for(int j=0;j<3;j++){
                    cout<<arr[i][j]<<"   ";
                }
            }
            cout<<"\n---------";
            state="O";
        }
        
        
    }
    system("pause");
    return 0;
}

int judge(string board[3][3],int tie){
    //first row
    if(board[0][0]==board[0][1]&&board[0][0]==board[0][2]){
        cout<<board[0][0]<<" win\n";
        return 0;
    }
    //second row
    if(board[1][0]==board[1][1]&&board[1][0]==board[1][2]){
        cout<<board[1][0]<<" win\n";
        return 0;
    }
    //third row
    if(board[2][0]==board[2][1]&&board[2][0]==board[2][2]){
        cout<<board[2][0]<<" win\n";
        return 0;
    }
    //first column
    if(board[0][0]==board[1][0]&&board[0][0]==board[2][0]){
        cout<<board[0][0]<<" win\n";
        return 0;
    }
    //second column
    if(board[0][1]==board[1][1]&&board[0][1]==board[2][1]){
        cout<<board[0][1]<<" win\n";
        return 0;
    }
    //third column
    if(board[0][2]==board[1][2]&&board[0][2]==board[2][2]){
        cout<<board[0][2]<<" win\n";
        return 0;
    }
    //left-up to right-down
    if(board[0][0]==board[1][1]&&board[0][0]==board[2][2]){
        cout<<board[0][0]<<" win\n";
        return 0;
    }
    //left-down to right-up
    if(board[2][0]==board[1][1]&&board[2][0]==board[0][2]){
        cout<<board[2][0]<<" win\n";
        return 0;
    }
    //tie
    if(tie==0){
        cout<<"tie\n";
        return 0;
    }
    return 1;
}