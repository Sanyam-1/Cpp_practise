#include<iostream>
using namespace std;

int main(){
    
    char grade;
    cin>>grade;

    switch(grade){
        case 'A':cout<<"Your Grade is :"<<++grade;
        break;
        case 'B':cout<<"Your Grade is :"<<grade+1;
        break;
        case 'C':cout<<"Your Grade is :"<<grade++;
        break;
        case 'D':cout<<"Your Grade is :"<<--grade;
        break;
        default:cout<<"Your Grade is :"<<grade+2;
    }
    

    return 0;
}