#include <iostream>
#include <string>
using namespace std;

int main(){
    //init
    int temp;
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

    
    do{
        //get input
        cout<<endl<<"enter the number to fill O:";
        cin>>temp;
        arr[temp/3][temp%3-1]="O";
        
        cout<<"---------";
        for(int i=0;i<3;i++){
            cout<<endl;
            for(int j=0;j<3;j++){
                cout<<arr[i][j]<<"   ";
            }
        }
        cout<<"\n---------";

        cout<<endl<<"enter the number to fill X:";
        cin>>temp;
        arr[temp/3][temp%3-1]="X";

        cout<<"---------";
        for(int i=0;i<3;i++){
            cout<<endl;
            for(int j=0;j<3;j++){
                cout<<arr[i][j]<<"   ";
            }
        }
        cout<<"\n---------";

        
        
    }while(1);

    return 0;
}