#include <iostream>
#include<string>
using namespace std;
string numConv(char s[100]){
    if(s=="A"){
        return "2";
    }
    else if(s=="B"){
        for(int i =0;i<3;i++){
            return "2";
        }
    }
    else if(s=="C"){
        for(int i =0;i<4;i++){
            return "2";
        }
    }
    else if(s=="D"){
       return "3";
    }
    else if(s=="E"){
        for(int i =0;i<3;i++){
            return "3";
        }
    }
    else if(s=="F"){
        for(int i =0;i<4;i++){
            return "3";
        }
    }
   else if(s=="G"){
        return "4";
    }
    else if(s=="H"){
        for(int i =0;i<3;i++){
            return "4";
        }
    }
    else if(s=="I"){
        for(int i =0;i<4;i++){
            return "4";
        }
    }
    else if(s=="J"){
            return "5";
        
    }
    else if(s=="K"){
        for(int i =0;i<3;i++){
            return "5";
        }
    }
    else if(s=="L"){
        for(int i =0;i<4;i++){
            return "5";
        }
    }
    else if(s=="M"){
      
            return "6";

    }
    else if(s=="N"){
        for(int i =0;i<3;i++){
            return "6";
        }
    }
    else if(s=="O"){
        for(int i =0;i<4;i++){
            return "6";
        }
    }
    else if(s=="P"){
    
            return "7";
        
    }
    else if(s=="Q"){
        for(int i =0;i<3;i++){
            return "7";
        }
    }
    else if(s=="R"){
        for(int i =0;i<4;i++){
            return "7";
        }
    }
    else if(s=="S"){
        for(int i =0;i<5;i++){
            return "7";
        }
    }
    else if(s=="T"){
       
            return "8";
        
    }
    else if(s=="U"){
        for(int i =0;i<3;i++){
            return "8";
        }
    }
    else if(s=="V"){
        for(int i =0;i<3;i++){
            return "8";
        }
    }
    else if(s=="W"){
       
            return "9";
        
    }
    else if(s=="X"){
        for(int i =0;i<3;i++){
            return "9";
        }
    }
    else if(s=="Y"){
        for(int i =0;i<4;i++){
            return "9";
        }
    }
    else if(s=="Z"){
        for(int i =0;i<4;i++){
            return "9";
        }
    }
    else{
    return "0";
    }
    return " ";
}
int main() {
   char arr[100];
   for(int i =65; i<91; i++){
    cin >> int(arr[i]);
   }
    cout << numConv(arr)<< endl;;
    return 0;
}