#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
int main() {
while (1) {
system("Color 0A");
cout<<" ____         __?.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,.,?.,.,.,.,.,.,.,_"<<endl<<"\\\\    \\//\\     -o    ===       ------  ;;;;;;;;;;;;;;;;;;;;______    "<<endl<<"//-----   //___//(//)??? ¦¦/?? {//?     " " (_-___}----------------------------------------------------"<<endl<<"           /__/            {¦¦}  ";
cout<<endl<<"                                     -URL shooter, By Karlo-"<<endl<<"                            The perfect tool for researching domains"<<endl;
cout<<"What tool do you want to open:"<<endl<<"[1] Multi URL loader            [2] Connectivity check"<<endl;
int tul;
cin>>tul;
if (tul==1) {
int a;
string b;
cout<<endl<<"How many URLs do you want to open:"<<endl;
cin>>a;
cout<<"Enter domain name:"<<endl;
cin>>b;
for (int i=0; i<a; i++) {
ShellExecute(NULL, "open", ("https://"+b+"/").c_str(), NULL, NULL, SW_SHOWNORMAL);
}
}
if (tul==2) {
string ip;
cout<<"Enter the IP you want to test a connection with:"<<endl;
cin>>ip;
int x = system(("ping "+ip).c_str());
if (x==0){
    cout<<"success";
}else{
    cout<<"failed";
}
cout<<endl<<endl;
system("pause");
}
system("cls");
}
return 0;
}
