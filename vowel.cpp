#include<iostream>
#include<string>
using namespace std ;
int main(){
    string text="Hello world";
    int count = 0;
    for(char c : text){
            char lower=tolower(c);
            if(lower=='a'||lower=='e'||lower=='i'||lower=='o'|| lower=='u'){
                count++;
            }





    }
    cout<<"Number of vowels"<<count<<endl;
    return 0;













}

