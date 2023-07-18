#include <iostream>
#include<string>
#include <conio.h>
#include <stdlib.h>
#include<fstream>
using namespace std;
class login
{
protected:
    char Email[100]; char Pass[10];
public:
    virtual void EnterInfo() = 0;//pure virtual fun
};
class PersonInfo
{
protected:
    char Departure[100]; char From[100]; char To[100]; char TArrival[100];
public:
    void GetInfo()
    {
        //cout<<"Please Enter The Info of Trip"<<endl;
        cout << "Enter Arrival Time : "; cin >> TArrival;
        cout << "Enter Departure time : "; cin >> Departure;
        cout << "From : "; cin >> From;
        cout << "To : "; cin >> To;
    }
};
class User :public login
{
protected:
    string ver = "AmNotRobot";
    string Verification;
public:
    User() {
        cout << "                            " << "Welcome To User Mood " << endl;
    }
    void EnterInfo()
    {
        cout << "Enter Your Email : "; cin >> Email;
        cout << "Enter Your Password : "; cin >> Pass;
        system("cls");
        cout << "Login Successfully!" << endl;
    }
    void Ver1()
    {
        cout << "Make Sure you're Not a Robot Write (AmNotRobot)" << endl;
        cin >> Verification;
        if (Verification == ver)
            cout << "Successfull" << endl;
        else {
            cout << "Write It Again Please!" << endl;
            User::Ver1();
        }

    }
};
class Admin :public login
{
private:
    string NickNAME, s1 = "MoMO", s2 = "Konafa", s3 = "Krast", s4 = "Katkoot";
public:
    Admin()
    {
        cout << "                          " << "*Welcom TO Admin Mood**" << endl;
    }
    void EnterInfo()
    {
        cout << "Enter Your Email : "; cin >> Email;
        cout << "Enter Your Password : "; cin >> Pass;
    }
    void verfication()
    {
        cout << "Confirm Your Login " << endl;

        cout << "Enter Your Nick Name : "; cin >> NickNAME;
        if (NickNAME == s1 || NickNAME == s2 || NickNAME == s3 || NickNAME == s4)
            cout << "Login Successfully!" << endl;
        else {
            cout << "WRONG!" << endl;
            Admin::verfication();
        }
    }
};
class BusDriver :public PersonInfo
{
protected:
    char BId[100]; char BDriver[100];
public:
    BusDriver() {
        cout << "BUS DATA :" << endl;
    }
    void GetInfo()
    {

        void open(char* BusDrivers, ios::openmode);
        ofstream fout;
        fout.open("BusDrivers.txt", ios::app);
        cout << "Please Enter The Info of Trip" << endl;
        cout << "Enter Bus ID : "; cin >> BId;
        cout << "Enter Bus DriverName : "; cin >> BDriver;
        PersonInfo::GetInfo();
        fout << "The BUS id is: " << BId << endl;
        fout << "The Driver name is: " << BDriver << endl;
        fout << "The Arrival Time is : " << TArrival << endl;
        fout << "The Departure Time is : " << Departure << endl;
        fout << "The Trip will stat from : " << From << endl;
        fout << "The Trip will end in : " << To << endl;
        fout << "------------------------------------------------------" << endl;
        fout.close();
    }
    void Delete() {
        char c;
        cout << "**DELETE**" << endl;
        cout << "Enter The Id You Want : "; cin >> BId;
        cout << "Enter The Name Of Driver : "; cin >> BDriver; cout << endl;
        cout << "Are YOU Sure" << endl << "Press(Y or y)for YES" << endl << "Press(N or n)for NO" << endl;
        cout << "Enter Your Choice : "; cin >> c;
        if (c == 'y' || c == 'Y') {
            system("cls");
            cout << "Deleted Is Don" << endl;
        }
        else {
            system("cls");
            cout << "OK" << endl;
        }
    }
};
class TrainDriver :public PersonInfo
{
private:
    char TId[10]; char TDriver[10];
public:

    TrainDriver() {
        cout << "TRAIN DATA :" << endl;
    }
    void GetInfo() {
        void open(char* TrainDriver, ios::openmode);
        ofstream fout;
        fout.open("TrainDrivers.txt", ios::app);
        cout << "Please Enter The Info of Trip" << endl;
        cout << "Enter Train ID : "; cin >> TId;
        cout << "Enter Train Driver : "; cin >> TDriver;
        PersonInfo::GetInfo();
        fout << "The Train id is: " << TId << endl;
        fout << "The Driver name is: " << TDriver << endl;
        fout << "The Arrival Time is : " << TArrival << endl;
        fout << "The Departure Time is : " << Departure << endl;
        fout << "The Trip will stat from : " << From << endl;
        fout << "The Trip will end in : " << To << endl;
        fout << "------------------------------------------------------" << endl;
        fout.close();
    }
    void Delete() {
        char c;
        cout << "**DELETE**" << endl;
        cout << "Enter The Id You Want : "; cin >> TId;
        cout << "Enter The Name Of Driver : "; cin >> TDriver; cout << endl;
        cout << "Are YOU Sure" << endl << "Press(Y or y)for YES" << endl << "Press(N or n)for NO" << endl;
        cout << "Enter Your Choice : "; cin >> c;
        if (c == 'y' || c == 'Y')
            cout << "Deleted Is Don" << endl;
        else
            exit(0);
    }
};
class PlaneCaptin :public PersonInfo
{
private:
    char PId[10]; char PPilot[10];
public:
    PlaneCaptin() {
        cout << "PlANE DATA :" << endl;
    }
    void GetInfo() {
        void open(char* PlanesCaptins, ios::openmode);
        ofstream fout;
        fout.open("PlanesCaptins.txt", ios::app);
        cout << "Please Enter The Info of Trip" << endl;
        cout << "Enter Plane ID : "; cin >> PId;
        cout << "Enter Plane Captin : "; cin >> PPilot;
        PersonInfo::GetInfo();
        fout << "Captin name is : " << PPilot << endl;
        fout << "The Arrival Time is : " << TArrival << endl;
        fout << "The Departure Time is : " << Departure << endl;
        fout << "The Trip will stat from : " << From << endl;
        fout << "The Trip will end in : " << To << endl;
        fout << "------------------------------------------------------" << endl;
        fout.close();
    }
    void Delete() {
        char c;
        cout << "**DELETE**" << endl;
        cout << "Enter The Id You Want : "; cin >> PId;
        cout << "Enter The Name Of Driver : "; cin >> PPilot; cout << endl;
        cout << "Are YOU Sure" << endl << "Press(Y or y)for YES" << endl << "Press(N or n)for NO" << endl;
        cout << "Enter Your Choice : "; cin >> c;
        if (c == 'y' || c == 'Y')
            cout << "Deleted Is Don" << endl;
        else
            exit(0);
    }
};
class Reservation
{
protected:
    int age, STno; char PHno[11]; int cost; char NID;
    string  BRpoint, DTpoint, Fname, Lname;
public:
    void GetDetails()
    {
        system("cls");
        cout << "Enter YOUR Details " << endl;
        cout << "First Name : "; cin >> Fname; cout << "Last Name : "; cin >> Lname;
        cout << "Age : "; cin >> age;
        cout << "National ID :"; cin >> NID;
        if (NID !=  15) {
            cout << "National id must be 15 number" << endl;
            cout << "Repeat it again Please!" << endl;
            cin >> NID;
        }
        cout << "Phone number : "; cin >> PHno;
        cout << "Number Of Seats : "; cin >> STno;
        cout << "Boarding Point:"; cin >> BRpoint;
        cout << "destination Point:"; cin >> DTpoint;
    }
    void hotel() {
        string x;
        int y = 1;
        cout << "We are pleased to offer you a new accommodation offer on your trip. Would you like to see?" << endl;
        cin >> x;
        if (x == "Yes"|| x=="yes"||x=="YES")
        {
            cout << "if you traveling to one from this countries" << endl;
            cout << "(Alex,Luxor,Aswan,Sharm-Elshikh,cairo) press 1" << endl;
            cin >> y;
            ifstream in;
            char c;
            string s;
            char z;
            in.open("Hotels offers.txt");
            while (!in.eof()) {
                in.get(c);
                cout << c;
            }
            cout << "choose The Appropriate offer for you : ";
            cin >> s;
            cout << endl;
            cout << "Great Choice!" << endl;
            cout << "for more details call our touriest company on:";
            cout << "01054975688 or 0254896375" << endl;
            cout << "Hotline: 17888" << endl;
        }
        else {
            cout << "Sorry! we don't have offers for your destination" << endl;
            cout << "We hope to help you next time!" << endl;
        }
    }
    virtual void GetCost() = 0;
    virtual void show() = 0;
    ~Reservation() {
        cout << "                                 " << "Reserved*" << endl;
    }
};
class Bus :public Reservation {
public:

    Bus() {
        cout << "BUS RESERVATION :" << endl;
    }
    void GetCost() {
        int c;
        cout << "Choose YOUR Bocket : " << endl;
        cout << "1_Economy(250)" << endl << "2_First_Class(300)" << endl << "3_Business(400)" << endl;
        cout << "Enter Your Choice : "; cin >> c;
        if (c == 1) {
            cost = 250 * STno; cout << "Cost : " << cost;
        }
        else if (c == 2) {
            cost = 300 * STno; cout << "Cost : " << cost;
        }
        else {
            cost = 400 * STno; cout << "Cost : " << cost;
        }
    }
    void show()
    {
        system("cls");
        cout << "*" << Fname << Lname << endl;
        cout << "*" << NID << endl;
        cout << "*" << cost << endl;
        cout << "*" << BRpoint << endl;
        cout << "*" << DTpoint << endl;
        cout << "*" << STno << endl;
    }
    void Data() {
        void open(char* Breserve, ios::openmode);
        ofstream out;
        out.open("Breserve.txt", ios::app);
        out << "Name : " << Fname << " " << Lname << endl;
        out << "AGE : " << age << endl;
        out << "National ID : " << NID << endl;
        out << "Phone number : " << PHno << endl;
        //out << "Class : " << STclass << endl;
        out << "Number Of Seats : " << STno << endl;
        out << "The Total Cost : " << cost << endl;
        out << "The Boarding point : " << BRpoint << endl;
        out << "The Destination : " << DTpoint << endl;
        out << "------------------------------------------------------" << endl;
        out.close();
    }
};
class Train : public Reservation {
public:
    Train() {
        cout << "                               " << "RAILWAY RESERVATION :" << endl;
    }
    void show()
    {
        system("cls");
        cout << "*" << Fname << Lname << endl;
        cout << "*" << NID << endl;
        cout << "*" << cost << endl;
        cout << "*" << BRpoint << endl;
        cout << "*" << DTpoint << endl;
        cout << "*" << STno << endl;
    }
    void GetCost() {
        int c;
        cout << "Choose YOUR Bocket : " << endl;
        cout << "1_Economy(60)" << endl << "2_First_Class(150)" << endl << "3_Business(250)" << endl;
        cout << "Enter Your Choice : "; cin >> c;
        if (c == 1) {
            cost = 60 * STno; cout << "Cost : " << cost;
        }
        else if (c == 2) {
            cost = 150 * STno; cout << "Cost : " << cost;
        }
        else {
            cost = 250 * STno; cout << "Cost : " << cost;
        }

    }
    void Data() {
        void open(char* TrainReserve, ios::openmode);
        ofstream out;
        out.open("TrainReserve.txt", ios::app);
        out << "Name : " << Fname << " " << Lname << endl;
        out << "AGE : " << age << endl;
        out << "National ID : " << NID << endl;
        out << "Phone number : " << PHno << endl;
        //out << "Class : " << STclass << endl;
        out << "Number Of Seats : " << STno << endl;
        out << "The Total Cost : " << cost << endl;
        out << "The Boarding point : " << BRpoint << endl;
        out << "The Destination : " << DTpoint << endl;
        out << "------------------------------------------------------" << endl;
        out.close();

    }

};
class Plane :public Reservation {
public:
    Plane() {
        cout << "AirLine Reservation :" << endl;
    }
    void GetDetails()
    {
        system("cls");
        cout << "Enter YOUR Details " << endl;
        cout << "First Name : "; cin >> Fname; cout << "Last Name : "; cin >> Lname;
        cout << "Age : "; cin >> age;
        cout << "National ID :"; cin >> NID;
        cout << "Phone number : "; cin >> PHno;
        cout << "Number Of Seats :  "; cin >> STno;
        cout << "Boarding Point:"; cin >> BRpoint;
        cout << "destination Point:"; cin >> DTpoint;
    }
    void GetCost() {
        int h;
        cout << "Choose Indoor Or Outdoor :" << endl; cout << "1_Indoor" << endl << "2_Outdoor" << endl; cout << "Enter Your Choice : "; cin >> h;
        if (h == 1) {
            int c;
            cout << "Choose YOUR Bocket : " << endl;
            cout << "1_Economy(1000)" << endl << "2_First_Class(2000)" << endl << "3_Business(3000)" << endl;
            cout << "Enter Your Choice : "; cin >> c; cout << endl;
            if (c == 1) {
                cost = 1000 * STno;
                cout << "Cost : " << cost;
            }
            else if (c == 2) {
                cost = 2000 * STno; cout << "Cost : " << cost;
            }
            else {
                cost = 3000 * STno;
                cout << "Cost : " << cost;
            }
        }
        else {
            int c;
            cout << "Choose YOUR Bocket : " << endl;
            cout << "1_Economy(5000)" << endl << "2_First_Class(15000)" << endl << "3_Business(25000)" << endl;
            cout << "Enter Your Choice : "; cin >> c;
            if (c == 1) {
                cost = 5000 * STno; cout << "Cost : " << cost;
            }
            else if (c == 2) {
                cost = 15000 * STno; cout << "Cost : " << cost;
            }
            else {
                cost = 25000 * STno; cout << "Cost : " << cost;
            }
        }
    }
    void show()
    {
        system("cls");
        cout << "*" << Fname << Lname << endl;
        cout << "*" << NID << endl;
        cout << "*" << cost << endl;
        cout << "*" << BRpoint << endl;
        cout << "*" << DTpoint << endl;
        cout << "*" << STno << endl;
    }
    void Data() {
        void open(char* PlaneReserve, ios::openmode);
        ofstream out;
        out.open("PlaneReserve.txt", ios::app);
        out << "Name : " << Fname << " " << Lname << endl;
        out << "AGE : " << age << endl;
        out << "National ID : " << NID << endl;
        out << "Phone number : " << PHno << endl;
        //out << "Class : " << STclass << endl;
        out << "Number Of Seats : " << STno << endl;
        out << "The Total Cost : " << cost << endl;
        out << "The Boarding point : " << BRpoint << endl;
        out << "The Destination : " << DTpoint << endl;
        out << "------------------------------------------------------" << endl;
        out.close();
    }
};
class cancelReservationPlane
{
protected: char PID[30]; string Name; char Date[50];
public:
    cancelReservationPlane() {
        cout << "                            " << "* (Plane Cancellation) **" << endl;
    }
    void cancel() {
        system("cls");
        cout << "Enter Your ID :"; cin >> PID;
        cout << "Enter Your Name :"; getline(cin, Name);
        cout << "Enter The Reserved Date :"; cin >> Date;
        cout << "If YOU Are Sure Press Enter";
    }

    ~cancelReservationPlane() {
        system("cls");
        cout << "                           " << "^^^^^^^^^^^^Cancelled^^^^^^^^^^^^^^^^" << endl;
    }
};
class cancelReservationBus
{
protected: char PID[30]; string Name; char Date[50];
public:
    cancelReservationBus() {
        cout << "                           " << "(Bus Cancellation)" << endl;
    }
    void cancel() {
        system("cls");
        cout << "Enter Your ID :"; cin >> PID;
        cout << "Enter Your Name :"; cin >> Name;
        cout << "Enter The Reserved Date :"; cin >> Date; cin.ignore();
        cout << "If YOU Are Sure Press Enter";
    }
    ~cancelReservationBus() {
        system("cls");
        cout << "                          " << "^^^^^^^^^^^^^Cancelled^^^^^^^^^^^^^^^^" << endl;
    }
};
class cancelReservationTrain
{
protected: char PID[30]; string Name; char Date[50];
public:
    cancelReservationTrain() {
        cout << "                          " << "(Bus Cancellation)" << endl;
    }
    void cancel() {
        system("cls");
        cout << "Enter Your ID :"; cin >> PID;
        cout << "Enter Your Name :"; getline(cin, Name);
        cout << "Enter The Reserved Date :"; cin >> Date;
        cout << "If YOU Are Sure Press Enter";
    }
    ~cancelReservationTrain() {
        system("cls");
        cout << "                          " << "^^^^^^^^^^Cancelled^^^^^^^^^^" << endl;
    }
};

int main() {
    cout << "WELCOME" << endl; int ch; char c;
    do {
        cout << "1_Admin" << endl << "2_User" << endl << "0_Exite" << endl;
        cout << "please enter your choice : ";
        cin >> ch;
        switch (ch)//switch for choose admin or user        #1
        {
        case 1: //case one for admin
        {
            system("cls");
            Admin* a = new Admin();
            a->EnterInfo();
            a->verfication();
            int p; int c; char j; char l;
            {
                cout << "1_Insert" << endl << "2_Delete" << endl << "0_Exite" << endl;
                cout << "Enter Your Choice : "; cin >> c;
                switch (c)         //#2
                {
                    do {
                case 1://for adding
                    system("cls");
                    cout << "1_BusDrive" << endl << "2_TrainDrive" << endl << "3_PlanePilote" << endl << "0_Exite" << endl;
                    cout << "enter your chose : "; cin >> p;
                    switch (p)//choose the transport   #3
                    {
                    case 1://bus driver add
                    { system("cls");
                    BusDriver* per = new BusDriver();
                    per->GetInfo();
                    }
                    break;
                    case 2://train driver add
                    {system("cls");
                    TrainDriver* pr2 = new TrainDriver();
                    pr2->GetInfo();
                    }
                    break;
                    case 3://plane driver add
                    {system("cls");
                    PlaneCaptin* pr3 = new PlaneCaptin();
                    pr3->GetInfo();
                    }
                    break;
                    case 0://if user want exit
                    {
                        exit(0);
                    }
                    break;
                    //end of choose transpor
                    }
                    //**********
                    cout << "If U Want Add Again Enter YOUR Choice(y/n) :"; cin >> j;
                    } while (j == 'y');
                    break;
                    //#############
                    do {
                case 2://case for delete
                    system("cls");
                    int f;
                    cout << "**DELETION***" << endl;
                    cout << "1_BusDrive" << endl << "2_TrainDrive" << endl << "3_PlanePilote" << "0_Exite" << endl;
                    cout << "Enter Ur Choice : "; cin >> f;
                    switch (f)
                    {
                    case 1://bus driver delete
                    {system("cls");
                    BusDriver* B = new BusDriver();
                    B->Delete();
                    delete B;
                    }
                    break;
                    case 2://train driver delete
                    {system("cls");
                    TrainDriver* T = new TrainDriver();
                    T->Delete();
                    delete T;
                    }
                    break;
                    case 3://plane driver delate
                    {system("cls");
                    PlaneCaptin* P = new PlaneCaptin();
                    P->Delete();
                    delete P;
                    }
                    break;
                    //end of choose transpor
                    case 0://if user want exit
                    {
                    }
                    break;
                    default:
                        break;
                    }
                    //*********
                    cout << "If U Want Delete Again Enter YOUR Choice(y/n) :"; cin >> l;
                    } while (l == 'y');

                    break;//the break of the case delete
                    // break;
                }//end of the second switch after choose admin or user
                break;
            }
        }
        break;
        // #######################################################################
        //***
        case 2://case for user 
        { system("cls");
        User* u = new User();
        u->EnterInfo();
        u->Ver1();
        int k; char o;
        cout << "1_Reservation" << endl << "2_Cancellation" << endl << "0_Exit" << endl;
        cout << "Enter Ur Choice : "; cin >> k;
        switch (k)
        {
            do {
        case 1://case for reservation
            int m; system("cls");
            cout << "1_Bus" << endl << "2_Train" << endl << "3_Plane" << endl << "0_Exite" << endl;
            cout << "Enter Ur Choice : "; cin >> m;
            switch (m)
            {
            case 1://for reserve bus
            {
                system("cls");
                Bus* b = new Bus();
                b->GetDetails();
                b->GetCost();
                b->Data();
            }
            break;
            case 2://for reserve train
            {system("cls");
            Train* t = new Train();
            t->GetDetails();
            t->GetCost();
            t->Data();
            }
            break;
            case 3://for reserve plane
            {system("cls");
            Plane* p = new Plane();
            p->GetDetails();
            p->GetCost();
            p->Data();
            }
            break;
            case 0:
            {
                exit(0);
            }
            break;
            }
            //*********
            cout << endl << "Do U Want Reseve Again(y/n) :"; cin >> o;
            } while (o == 'y');
            break;
            char u;
            do {
        case 2://case cancel
            system("cls");
            int l;
            cout << "1_Bus" << endl << "2_Train" << endl << "3_Plane" << endl << "0_Exite" << endl;
            cout << "Enter Ur Choice : "; cin >> l;
            switch (l)
            {
            case 1://for cancel bus
            {system("cls");
            cancelReservationBus* b1 = new cancelReservationBus();
            b1->cancel();
            delete b1;
            }
            break;
            case 2://for cancel train
            {system("cls");
            cancelReservationTrain* t1 = new cancelReservationTrain();
            t1->cancel();
            delete t1;
            }
            break;
            case 3://for cancel plane
            {system("cls");
            cancelReservationPlane* p1 = new cancelReservationPlane();
            p1->cancel();
            delete p1;
            }
            //cout << "Cncelation Is Done*" << endl;
            break;
            case 0:
            {
                exit(0);
            }
            break;
            }
            //*********
            cout << "Do U Want Cancel Again(y/n) :"; cin >> u;
            } while (u == 'y');
            break;
        }
        }
        break;
        }//end of the main switch for admin and user
        //*******
        cout << endl << "THE BIGGEST CYCLE" << endl;
        cout << "Enter YOUR Choice(y/n) :"; cin >> c;
    } while (c == 'y');
    return 0;
}//end of main
