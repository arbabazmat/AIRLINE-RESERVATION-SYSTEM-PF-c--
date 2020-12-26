#include<iostream>
#include<iomanip>
#include<windows.h>
#include<conio.h>
#include<fstream>
using namespace std;


 char dest[7][30]={"LAHORE","ISLAMABAD","KARACHI","PESHAWAR","QUETTA","GAWADAR","CHITRAL"};
 
 

class ariline{
public:
    int choose,ch;
int  pport;



//Function Of Reservation
int reservation(){
	system("cls");
    int option;
      cout<<"\t\t\t\tLoading...\n"<<endl;
for(int i=0;i<=78;i++)
{
Sleep(100);
cout<<"@";
}
system("cls");


    cout<<"In which AIRLINE you want to travel"<<endl<<endl;
  cout<<"1)PIA"<<endl;
  cout<<"2)AIR BLUE"<<endl;
  cout<<"3)ARAB EMIRATES"<<endl;
  cout<<"4)QATAR AIRWAYS"<<endl;
  cout<<"enter your choice"<<endl;;
  cin>>option;
  system ("cls");
  switch(option)
  {
  case 1:
   if (option==1)
    cout<<setw(40)<<"\n\n\n                                WELCOME TO PIA"<<endl;
   break;
  case 2:
   if(option==2)
    cout<<setw(40)<<"\n\n\n                                WELCOME TO AIRBLUE"<<endl;
   break;
  case 3:
   if(option==3)
    cout<<setw(40)<<"\n\n\n                                WELCOME TO ARAB EMIRATES"<<endl;
   break;
  case 4:
   if(option==4)
    cout<<setw(40)<<"\n\n\n                                WELCOME TO QATAR AIRWAYS"<<endl;
   break;
  }
    cout<<setw(40)<<"\nTHESE ARE THE LOCAL PLACES AVAILABLE\n\n\n"<<endl;
    for(int i=0;i<6;i++)
  {
   cout<<dest[i]<<endl;
  }

    cout<<"ON WHICH TIME YOU WANT TO TRAVEL"<<endl;
  cout<<"PRESS 1 FOR 11 AM"<<endl;
  cout<<"PRESS 2 FOR 10 AM"<<endl;
  cout<<"PRESS 3 FOR 9 AM"<<endl;
  cin>>choose;
  system("cls");
  if(choose==1)
  {
    cout<<"|                                                                         "<<endl;
    cout<<"|flight airline 11 AM                                                        "<<endl;
    cout<<"|_________________________________________________________________________"<<endl;
    cout<<"                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;

  }
  if(choose==2)
  {
    cout<<"|                                                                         "<<endl;
    cout<<"|flight airline 10 AM                                                        "<<endl;
    cout<<"|_________________________________________________________________________"<<endl;
    cout<<"                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;

  }
  if(choose==3)
  {
    cout<<"|                                                                         "<<endl;
    cout<<"|flight airline 9 AM                                                        "<<endl;
    cout<<"|_________________________________________________________________________"<<endl;
    cout<<"                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;


  }
  cout<<"In which class you want to travel?"<<endl;

   cout<<"Make your choice"<<endl<<endl;

   cout<<"\n\n\n\n\n\n";

  cout<<setw(60)<<"*************************************"<<endl;
        cout<<setw(60)<<"*     Press 1 for buisness class    *"<<endl;
  cout<<setw(60)<<"*     Press 2 for economy class     *"<<endl;
  cout<<setw(60)<<"*************************************"<<endl<<endl<<endl<<endl;

   cout<<"Enter your choice"<<endl;

   cin>>ch;

   cout<<endl;
      int b_seat=2;
   int e_seat=2;
   switch(ch)

{
    case 1:

    b_seat--;

    if(b_seat<=0)

     cout<<"SORRY NO SEAT AVAILABLE"<<endl;

    else

     cout<<"SEAT AVAILABLE"<<endl;

    break;
    case 2:

    e_seat--;

    if(e_seat<=0)

     cout<<"SORRY NO SEAT AVAILABLE"<<endl;

    else

     cout<<"SEAT AVAILABLE"<<endl;

    break;

}





 char firstname[20];
 int t_no;
 char lastname[20];
 string address;
 char c_loc[25];
 char dest[25];

 cout<<"\n\n\t\t\t\tData Checking\n\n";
    stoppport:
    	
    	
//passport checking
 cout<<"\n\n\t\t\t\tPassport Checking\n\n";
 cout<<"Enter Passport Number:";
 cin>>pport;





    cout<<"\n\nPlease enter the required information for passenger\n"<<endl;
    cout<<"\nEnter Your First Name.:";
    cin>>firstname;
    cout<<"\nEnter Your Last Name.:";
    cin>>lastname;
    cout<<"\nEnter Your Address.:";
    cin>>address;
    cout<<"\nEnter your ticket number<WRITE ONLY DIGITS>";
    cin>>t_no;
    cout<<"\nEnter Your location From which you are Departing<WRITE ONLY CAPITAL LETTER> ";
    cin>>c_loc;
    cout<<"\nEnter Your destination<WRITE ONLY CAPITAL LETTER> ";
    cin>>dest;
    Sleep(2000);
    system("cls");
      cout<<"\t\t\t\tLoading...\n"<<endl;
for(int i=0;i<=78;i++)
{
Sleep(100);
cout<<"@";
}
    cout<<"\n\n\t\t\tYour Airline Ticket\n\n";
    cout<<"                           AIRLINE TICKET                                 "<<endl;
    cout<<"|Ticket No."<<t_no<<"                                Passport No."<<pport<<"\t  "<<endl;
    Sleep(500);
    cout<<"|_________________________________________________________________________"<<endl;
    cout<<"|Passport No. :"<<pport<<"                                                 "<<endl;
    cout<<"|__________________________________________________________________________"<<endl;
    Sleep(500);
    cout<<"|Passenger Information :                                                  "<<endl;
    cout<<"|Name :"<<lastname<<"/"<<firstname<<"                                     "<<endl;
    cout<<"|                                                                         "<<endl;
    Sleep(500);
    cout<<"|Address :"<<address<<"                                                   "<<endl;
    cout<<"|_________________________________________________________________________"<<endl;
    cout<<"|flight Information :                                                     "<<endl;
    cout<<"|28 july 2019                                                              "<<endl;
    Sleep(500);
    cout<<"|BOING 747                                                                "<<endl;
    cout<<"|_________________________________________________________________________"<<endl;
    Sleep(500);
    cout<<"|Depart :"<<c_loc<<"                                                      "<<endl;
    cout<<"|Arrive :"<<dest<<"                                                       "<<endl;
    cout<<"|*BAGGAGE allowed 40 Kilos                                                "<<endl;
    Sleep(500);
    
    
    
  //Saving Ticket
    ofstream ticket("airline.txt");


 if(ticket.is_open()){
 ticket<<"\n\n                           AIRLINE TICKET                                 "<<endl<<
        "|Ticket No."<<t_no<<"                                       Passport No."<<pport<<"\t  "<<endl<<
        "|_________________________________________________________________________"<<endl<<
        "|Passport No. :"<<pport<<"                                                 "<<endl<<
        "|__________________________________________________________________________"<<endl<<
        "|Passenger Information :                                                  "<<endl<<
        "|Name :"<<lastname<<"/"<<firstname<<"                                     "<<endl<<
        "|                                                                         "<<endl<<
        "|Address :"<<address<<"                                                   "<<endl<<
        "|_________________________________________________________________________"<<endl<<
        "|flight Information :                                                     "<<endl<<
        "|28 July 2019                                                              "<<endl<<
        "|BOING 747                                                                "<<endl<<
        "|_________________________________________________________________________"<<endl<<
        "|Depart :"<<c_loc<<"                                                      "<<endl<<
        "|Arrive :"<<dest<<"                                                       "<<endl<<
        "|*BAGGAGE allowed 40 Kilos                                                "<<endl;
 ticket.close();
 }
 
 
 
 
 
 else{
    cout<<"\n\nFile is closed.\n";
 }
 
 
 
 //Going Main Menu
 int n;
cout<<"\n\nTo go to main menu press 1";
cin>>n;
if(n==1){
        return (1);
        
}
}







//Function Of cancellation
int cancellation(){
	
    system("color E5");
    system("cls");
      cout<<"\t\t\t\tLoading...\n"<<endl;
for(int i=0;i<=78;i++)
{
Sleep(100);
cout<<"@";
}
    int a;
    string first,last;
cout<<"\n\n\t\t\tcancellation\n";
cout<<"\nTo cancel the reservation enter your Passsport number\n";
cout<<"\nPassport number Should be less than 10 digits\n";
cout<<"\nEnter Passport No.:\n";
cin>>a;
cout<<"\nEnter Your First Name.:\n";
cin>>first;
cout<<"\nEnter Your Last Name.:\n";
cin>>last;
cout<<"\n\nDo you want to cancel it or not ?\n\n";
cout<<"\n\n\t1).Yes\t\t2).No\n";
int c;
cin>>c;




if(c==1){
	if(a==pport)
{

	  cout<<"\t\t\t\tLoading...\n"<<endl;
for(int i=0;i<=78;i++)
{
Sleep(100);
cout<<"@";
}
system("cls");
cout<<"\n\n\t\t\tThis Is Your Ticket\n\n";
cout<<"\n\t\t\tIt ticket has been canceled\n\n";
//showing ticket
string line;
ifstream ticket("airline.txt");
if(ticket.is_open()){





while(ticket.eof()!=1){
	getline(ticket,line);
       cout<<line<<'\n';
}

ticket.close();
}

else{
cout<<"\n\nEither Your ticket is not reserved or your passport no is incorrect.\n\n";
int m;
cout<<"\n\nTo go to main menu press 1:";
cin>>m;
if(m==1){
        return 3;
}
}



}


else{
	cout<<"wrong pasport number or invalid ticket";
    if(c==2){
        return 3;
    }
}
}
//Going Main Menu
int n;
cout<<"\n\nTo go to main menu press 1:";
cin>>n;
if(n==1){
        return 3;
}
}
//Function Of Hotel Booking
int hbooking(){
system("cls");
system("color B2");
  cout<<"\t\t\t\tLoading...\n"<<endl;
for(int i=0;i<=78;i++)
{
Sleep(100);
cout<<"@";
}
cout<<"\n\n\t\t\t\tHotel Booking\n\n\n";



bool found=false;
string checkindate;
string checkoutdate;
int roomno;
int type;
int index;



cout<<"Enter your in date:xx-xx-xxxx\n";
cin>>checkindate;
cout<<"Enter your out date:xx-xx-xxxx\n";
cin>>checkoutdate;
cout<<"(1)standard\n";
cout<<"(2)superior\n";
cout<<"(3)luxury\n";
cout<<"(4)deluxe\n";
cout<<"Enter room type:\n";
cin>>type;
if(type==1){
    int standard[]={101,102,103,104,105,106,107,108,109,110};
        cout<<"These are the rooms available.\n";
    for(int i=0;i<=10;i++){
cout<<standard[i]<<endl;
    }

    bool found=false;
cout<<"Enter room no:";
cin>>roomno;
for ( index =0;index<=10;index++){
    if(roomno==standard[index]){
        found=true;
        cout<<"CONGRATS YOUR ROOM BOOKING IS DONE";
break;
    }
}
if(!found){

    cout<<"Sorry!THIS ROOM IS NOT AWAILABLE"<<endl;
}




}
if(type==2){
    int superior[10]={111,112,113,114,115,116,117,118,119,120};
        cout<<"These are the rooms available.\n";
    for(int i=0;i<=10;i++){
cout<<superior[i]<<endl;
    }

    bool found=false;
cout<<"Enter room no:";
cin>>roomno;
for ( index =0;index<=10;index++){
    if(roomno==superior[index]){
        found=true;
        cout<<"CONGRATS YOUR ROOM BOOKING IS DONE";
break;
    }
}
if(!found){

    cout<<"Sorry!THIS ROOM IS NOT AWAILABLE"<<endl;
}




}
if(type==3){
    int deluxe[10]={121,122,123,124,125,126,127,128,129,130};
        cout<<"These are the rooms available.\n";
    for(int i=0;i<=10;i++){
cout<<deluxe[i]<<endl;
    }

    bool found=false;
cout<<"Enter room no:";
cin>>roomno;
for ( index =0;index<=10;index++){
    if(roomno==deluxe[index]){
        found=true;
        cout<<"CONGRATS YOUR ROOM BOOKING IS DONE";
break;
    }
}
if(!found){

    cout<<"Sorry!THIS ROOM IS NOT AWAILABLE"<<endl;
}




}
if(type==4){
    int luxury[10]={121,122,123,124,125,126,127,128,129,130};
        cout<<"These are the rooms available.\n";
    for(int i=0;i<=10;i++){
cout<<luxury[i]<<endl;
    }

    bool found=false;
cout<<"Enter room no:";
cin>>roomno;
for ( index =0;index<=10;index++){
    if(roomno==luxury[index]){
        found=true;
        cout<<"CONGRATS YOUR ROOM BOOKING IS DONE";
break;
    }
}
if(!found){

    cout<<"Sorry!THIS ROOM IS NOT AWAILABLE"<<endl;
}

}





//going main menu
     int n;
     cout<<"\n\nTo go to main menu press 1";
     cin>>n;
if(n==1){
        return 4;
}

}
};











int main(){
    SetConsoleTitle("Airline Reservation System.");
    
    
    
    
//main page
 system("color F6");
  cout<<"\n\n\n\n\n\n\n\n\n\n\t\t     WELCOME TO AIRLINE RESERVATION SYSTEM";
 Sleep(1500);
 system ("cls");
 cout<<"\n\n\n\n\n\n\n\t\tDEVELOPED BY\a :";
 Sleep(1500);
 cout<<"  arbab\a";
 Sleep(1900);
 cout<<"\n\n\t\t\t\tazmat\a";
 Sleep(1500);

 system("cls");
 cout<<"\n\n\n\n\n\n\n\t\tSUBMITTED TO :\a";
 Sleep(1500);
 cout<<"\n\t\t\t\t Saqib Ali\a";
 Sleep(1500);
 
 
 
 
 
 
 
 
 //Variable To access the function
 ariline b;
 system ("cls");
 string name,pass;
 int counter;
 stop1:
 cout<<"\n\n\t\t\t  \3\3\3\3\3\3\3\3LOGIN\3\3\3\3\3\3\3\n\n"<<endl;
 cout<<"Enter Name:";
 cin>>name;
 cout<<"Enter password:";
 cin>>pass;
if(name=="xxndeer" && pass=="crypt();"){
	system("cls");
	  cout<<"\t\t\t\tLoading...\n"<<endl;
for(int i=0;i<=78;i++)
{
Sleep(50);
cout<<"@";
}
        int entry;
        int main;
        stopmenu:
        system("cls");
        cout<<"\n\n\t\t|*|*|*|* Welcome To Airline Reservation System *|*|*|*|\n\n\n";
        cout<<"Main Menu:\n\n\n";
        Sleep(300);
        cout<<"(1.) Reservation\n\n\a";
        Sleep(00);
        cout<<"(2.) Cancellation\n\n\a";
        Sleep(200);
        cout<<"(3.) Hotel Booking\n\n\a";
        Sleep(200);
        cout<<"(4.) Exit\n\n";
        Sleep(200);


        cout<<"Enter No:";
        cin>>entry;

        if(entry==1){
        int a=b.reservation();
            if(a==1){
            goto stopmenu;
            }
        }
         if(entry==2){
        int a=b.cancellation();
           if(a==3){
            goto stopmenu;
            }
        }
    if(entry==3){
        int a=b.hbooking();
            if(a==4){
            goto stopmenu;
            }
        }
        if(entry==4){
        	system("color A1");
                system("cls");
           cout<<"\t\t\t\n\nThank You For Your Time.";
           cout<<"\t\t\t\n\n\nClosed.\n";
        }
            }
            
            
            
            
            
            
            


else{
    cout<<"\n(Invalid Password or Name)\n"<<endl;
    cout<<"Try Again"<<endl;
    string username,password;
    int counter=1;
    system("cls");
while(counter<=1&&username!="xxndeer"&&password!="crypt();"){
        //cout<<conter;
    cout<<"\n\nUsername:";
    cin>>username;
    cout<<"\nPassword:";
    cin>>password;

if(username=="xxndeer"&&password=="crypt();"){
    cout<<"Logged In";
    system("cls");
  if(username=="arbab"&&password=="noob"){
            goto stopmenu;
  }
}
counter++;
}
system("cls");
for(int i=1;i<=10;i++){
    cout<<"\n\nWait 10 seconds To try Again.\n\n";
    cout<<i;
    Sleep(1000);
    system("cls");
}
goto stop1;
}




}
