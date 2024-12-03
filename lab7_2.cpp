//Dialog of the first example is given below.

/*
Fahsai: Sawadee ka...Can you tell me your name?
?????: Luke Skywalker
Fahsai: Wow!!! Luke Skywalker is a really cool name.
Fahsai: I think you are an Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47. I have a free movie ticket for you.
Fahsai: Let's go to the cinema together!!!
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watching Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/
*/

#include<iostream>
#include<string>
using namespace std;
int main(){
    string yaname;
    string yanum1;
    string twonum = "";
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    getline(cin,yaname);
    cout << "Fahsai: Wow!!! " << yaname << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << yaname << ": ";
    cin >> yanum1;
    twonum += yanum1[0];
    twonum += yanum1[1];
    int gear = stoi(twonum)-12;
    string mov;
    cout << "Fahsai: I think you may be GEAR " << gear << ". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\nFahsai: What movie do you want to watch?\n";
    cout << yaname << ": ";
    getline(cin,mov);
    getline(cin,mov);
    cout << "Fahsai: So....which day are you free to go with me?\n";
    string day;
    cout << yaname << ": ";
    getline(cin,day);
    cout << "Fahsai: " <<day<< "....that is OK!!! I'm looking forward to watching "<<mov<< " with you.\n";
    string ans;
    cout << yaname << ": ";
    cin >> ans;
    cout << "Fahsai: 555+ see you "<<day<< ". Bye Bye " << "\\" << "(^ ^)/";

}