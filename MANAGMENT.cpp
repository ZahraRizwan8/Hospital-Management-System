#include <iostream>
#include<fstream>
#include<iomanip>
#include<cstring>
#include <conio.h>
#include <windows.h>
using namespace std;

//used for file handling
const char* fileName = "User.bin";

//functions prototypes
void Dr_info();
void p_menu();
void d_menu();
void a_menu();

class demo1
{
public:
    virtual void MainMenu() = 0;

};


class User {

protected:
    char Username[30];
    string email;
    char Password[30];
    string CNIC;


public:

    void Register()
    {

        cout << "Enter your Cnic:\t ";
        cin >> CNIC;

        cout << "Enter password:\t\t ";
        cin >> Password;

    }

    void login()
    {
        cout << "Enter Username:\t ";
        cin >> Username;
        cout << "Enter Password:\t ";
        cin >> Password;
    }


    void FH_insertObject()
    {
        ofstream myFile(fileName, ios::binary | ios::app);
        if (myFile.write((char*)this, sizeof(User))) {
            cout << "Success! Object Updated." << endl;
            myFile.close();
        }
        else {
            cout << "Failed! Object Not Updated." << endl;
        }
    }

    void Verify_password()
    {
        system("pause");
        int len = 0;

        for (int i = 0; Password[i] != '\0'; i++)
        {
            len++;
        }

        if (len > 8 || len < 8)
        {
            cout << "INVALID.... Enter again:\t ";
            cin >> Password;
        }

        else
        {
            cout << "VALID LENGTH: " << endl;
        }

        char ch1;
        char ch2;
        char ch3;



        for (int i = 0; Password[i] != '\0'; i++)
        {


            for (ch1 = 'A'; ch1 <= 'Z'; ch1++)

                if (Password[i] == ch1)
                    cout << "valid " << endl << endl;
            //else
             // cout << "Enter again";


            for (ch2 = ' '; ch2 <= '/'; ch2++)

                if (Password[i] == ch2)
                    cout << "valid" << endl;
            // else
                // cout << "Enter again";
                //cin >> password;
        }
    }

    void Verify_CNIC()
    {
        system("pause");
        int len = 0;

        for (int j = 0; CNIC[j] != '\0'; j++)
        {
            len++;
        }

        if (len == 13)
        {
            cout << " CNIC is Valid " << endl << endl;
            cin.ignore();
        }
        else
        {
            cout << "CNIC is Invalid " << endl << endl;
            cin.ignore();
        }
    }

    //1st case senario
    void time_Slot1()
    {
        int num, n;
        cout << endl << endl << endl;
        cout << "\t\t\t\t\t-----  SLOTS  -----\n";
        cout << "\t\t\t\t1.MON to FRI:  3:00 pm to 5:00 pm\n";
        cout << "\t\t\t\t2.SAT:   6: 30 pm\n";
        cout << "\t\t\t\t3.SUN:     OFF\n";
        cin >> num;


        if (num == 1 || num == 2)
        {
            system("cls");
            cout << "1.\t\t\t\tIN-PERSON: RS. 1050\n";
            cout << "2.\t\t\t\tVIDEO-CALL: RS. 3500\n";
            cin >> n;

            if (n == 1)
            {
                float sum = 0.0;
                sum = 1050 + 3500;
                cout << "YOU HAVE TO PAY: " << sum << endl;

            }

            if (n == 2)
            {
            //    obj.setprice(3500);
            //    obj.getprice();
            //    obj.gettotal();
                float sum = 0.0;
                sum = 3500 + 3500;
                cout << "YOU HAVE TO PAY: " << sum << endl;
            }


        }



    }

    //2nd case senario
    void time_Slot2()
    {
        int num,n;

        cout << endl << endl << endl;
        cout << "\t\t\t\t\t-----  SLOTS  -----\n";
        cout << "\t\t\t\tMON to FRI:  8:00 am to 7:00 pm\n";
        cout << "\t\t\t\tSAT:    8:00 am to 12:00 pm\n";
        cout << "\t\t\t\tSUN:     OFF\n";
        cin >> num;

        if (num == 1 || num == 2)
        {
            system("cls");
            cout << "\t\t\t\t1. IN-PERSON: RS. 1200\n";
            cout << "\t\t\t\t2. VIDEO-CALL: RS. 4000\n";
            cin >> n;


            if (n == 1)
            {
                float sum = 0.0;
                sum = 1200 + 3500;
                cout << "YOU HAVE TO PAY: " << sum << endl;
            }

            if (n == 2)
            {
                float sum = 0.0;
                sum = 4000 + 3500;
                cout << "YOU HAVE TO PAY: " << sum << endl;
            }

        }


    }

};



const char* fileName2 = "User2.bin";

void doctorMenu();



class demo
{
public:
    virtual void showdata() = 0;
    virtual void getdata() = 0;

};

class Datetime {

protected :
    char date[30];

};


class Payment {

protected:
    float principle;
    int balance;
    int id;

public:

    Payment()
    {
        principle = 0.0;
        balance = 3500;
        id = 0;
    }

    void setdata()
    {
        cout << "principle: ";
        cin  >> principle;
    }

    void getData()
    {
        cout << "Principle: " << principle << endl;
        cout << "balance: " << balance << endl;
    }

    virtual void pay()
    {
        cout << "pay now: ";
    }

    virtual void cancel_day1()
    {
        cout << "full amount returned: ";
    }

    virtual void cancel_day2(float p)
    {
        float sum = 0.0;
        cout << "AMOUNT BEFORE:\t\t " << (p + 3500) << endl;
        cout << "AMOUNT RETURNED:\t" << 0.6 * (p + 3500) << endl;
    }

    virtual void cancel_day3(float p)
    {
        float sum = 0.0;
        cout << "AMOUNT BEFORE:\t\t " << (p + 3500) << endl;
        cout << "AMOUNT RETURNED:\t" << 0.3 * (p + 3500) << endl;
    }

    virtual void cancel_day4()
    {
        cout << "NO AMOUNT RETURNED:\t" << endl;
    }


    virtual void late1(float p)
    {
        cout << "AMOUNT RETURNED:\t" << (p*0.7) /100 << endl;
    }

    virtual void late2(float p)
    {
        cout << "AMOUNT RETURNED:\t" << (p * 0.4) / 100 << endl;

    }

    virtual void late3(float p)
    {
        cout << "RESCEDULE THE APPOINTMENT" << endl;
    }

    void FH_getObject(unsigned short uniqueIndex) {
         Payment temp;
        ifstream myFile(fileName, ios::binary);
        while (myFile.read((char*)&temp, sizeof(temp))) {
            if (temp.id == uniqueIndex) {
                //temp.getData();
                myFile.close();
                *this = temp;
            }
        }
    }
    void FH_getObjects() {
        Payment temp;
        ifstream myFile(fileName, ios::binary);
        while (myFile.read((char*)&temp, sizeof(temp))) {
            temp.getData();
            cout << "..." << endl << endl;
        }
        myFile.close();
    }


};

// inherted from payment
class BankTransfer : public Payment {

protected:
    int principle;
    int id;

public:

    void setdata(int p, int i)
    {
        principle = p;
        id = i;
    }

    void getData()
    {
        cout << "princple " << principle << endl;
        cout << "id " << id << endl;
    }

    void pay()
    {
        cout << "pay through banktransfer: ";
    }

     void cancel_day1()
    {
        cout << "full amount returned: ";
    }

    void cancel_day2(float p)
    {
        float sum = 0.0;
        cout << "AMOUNT RETURNED:\t" << 0.6 * (p + 3500) << endl;
    }

     void cancel_day3(float p)
    {
        float sum = 0.0;
        cout << "AMOUNT RETURNED:\t" << 0.3 * (p + 3500) << endl;
    }

    void cancel_day4()
    {
        cout << "NO AMOUNT RETURNED:\t" << endl;
    }

    void late1(float p)
    {
        cout << "AMOUNT RETURNED:\t" << (p * 0.7) / 100 << endl;
    }

    void late2(float p)
    {
        cout << "AMOUNT RETURNED:\t" << (p * 0.4) / 100 << endl;

    }

    void late3(float p)
    {
        cout << "RESCEDULE THE APPOINTMENT" << endl;
    }

    void FH_getObject(unsigned short uniqueIndex) {
        BankTransfer temp;
        ifstream myFile(fileName, ios::binary);
        while (myFile.read((char*)&temp, sizeof(temp))) {
            if (temp.id == uniqueIndex) {
                //temp.getData();
                myFile.close();
                *this = temp;
            }
        }
    }
    void FH_getObjects() {
        BankTransfer temp;
        ifstream myFile(fileName, ios::binary);
        while (myFile.read((char*)&temp, sizeof(temp))) {
            temp.getData();
            cout << "..." << endl << endl;
        }
        myFile.close();
    }


};

class Unionpay : public BankTransfer {

public:
    void pay()
    {
        cout << "paid through Unionpay: " << endl;
    }



};


class PayPak : public BankTransfer {

public:
    void pay()
    {
        cout << "paid through paypak: " << endl;
    }


};

class E_transaction : public Payment {

public:
    void pay()
    {
        cout << "paid through paypak: " << endl;
    }

    void cancel_day1()
    {
        cout << "full amount returned: ";
    }

    void cancel_day2(float p)
    {
        float sum = 0.0;
        cout << "AMOUNT RETURNED:\t" << 0.6 * (p + 3500) << endl;
    }

    void cancel_day3(float p)
    {
        float sum = 0.0;
        cout << "AMOUNT RETURNED:\t" << 0.3 * (p + 3500) << endl;
    }

    void cancel_day4()
    {
        cout << "NO AMOUNT RETURNED:\t" << endl;
    }
    void late1(float p)
    {
        cout << "AMOUNT RETURNED:\t" << (p * 0.7) / 100 << endl;
    }

    void late2(float p)
    {
        cout << "AMOUNT RETURNED:\t" << (p * 0.4) / 100 << endl;

    }

    void late3(float p)
    {
        cout << "RESCEDULE THE APPOINTMENT" << endl;
    }


};

//Polymorphism is implemented
class Jazzcash : public E_transaction {

public:
    void pay()
    {
        cout << "paid through Jazzcash: " << endl;
    }

};

class Easypaisa : public E_transaction {

public:
    void pay()
    {
        cout << "paid through Easypaisa: " << endl;
    }

};


const char* fileName5 = "User5.bin";

//Base class 
class Appointment {

protected:
    Datetime datetime;
    Payment payment;
    char hospital_name[20];
    char city[20];
    char appointment_mode[20];
    char day[20];
    char time[20];
    int userID;

public:

    Appointment(string hn = "", string c = "", string am = "", string d = "", string t = "")
    {
        strcpy_s(hospital_name, hn.c_str());
        strcpy_s(city, c.c_str());
        strcpy_s(appointment_mode, am.c_str());
        strcpy_s(day, d.c_str());
        strcpy_s(time, t.c_str());
    }

    void setappointment()
    {
        cout << "Hospital name:\t";
        cin.getline(hospital_name, 30);
        cin.ignore();
        cout << "City:\t";
        cin.getline(city, 30);
        cin.ignore();
        cout << "Appointment mode: ";
        cin.getline(appointment_mode, 30);
        cin.ignore();
        cout << "Appointment time:\t";
        cin.getline(time, 30);
        cin.ignore();
        cout << "Day:\t";
        cin.getline(day, 30);
        cin.ignore();
    }
    
    float price;
    int balance = 3500;

    virtual void setprice(float p)
    {
       price = p;
    }

    virtual float getprice()
    {
        return price;
    }
    
    virtual void gettotal()
    {
        float p = getprice();
        cout << "Your payment: " << balance + p << endl;

    }

    void getappointment()
    {
        cout << "Hosptital name:\t" << hospital_name << endl;
        cout << "City:\t\t" << city << endl;
        cout << "Appointment mode:\t" << appointment_mode << endl;
        cout << "Appointment time:\t" << time << endl;
    }


    void FH_insertObject()
    {
        ofstream myFile5(fileName5, ios::binary | ios::app);
        if (myFile5.write((char*)this, sizeof(User))) {
            cout << "Success! Object Updated." << endl;
            myFile5.close();
        }
        else {
            cout << "Failed! Object Not Updated." << endl;
        }
    }

    void FH_getObjects()
    {
        Appointment temp;
        ifstream myFile5(fileName5, ios::binary);
        while (myFile5.read((char*)&temp, sizeof(temp))) {
            temp.getappointment();
            cout << "..." << endl << endl;
        }
        myFile5.close();
    }
    void FH_updateObject(unsigned short uniqueIndex, string t) {
        Appointment temp;
        fstream myFile5(fileName5, ios::in | ios::out | ios::binary);
        while (myFile5.read((char*)&temp, sizeof(temp))) {
            if (temp.userID == uniqueIndex)
            {
                strcpy_s(temp.time, t.c_str());
                int current = myFile5.tellg();
                int oneblock = sizeof(temp);
                myFile5.seekg(current - oneblock);
                myFile5.write((char*)&temp, sizeof(temp));
                cout << "Success! Name Updated." << endl;
                myFile5.close();
            }
        }
    }
    void FH_deleteObject(int uniqueIndex) {
        Appointment temp;
        fstream myFile5(fileName5, ios::in | ios::out | ios::binary);
        ofstream myFile_temp("temp.bin", ios::app | ios::binary);
        while (myFile5.read((char*)&temp, sizeof(temp))) {
            if (temp.userID != uniqueIndex) {
                myFile_temp.write((char*)&temp, sizeof(temp));
            }
            else {
                cout << "Success! Object Deleted." << endl;
            }
        }
        myFile5.close();
        myFile_temp.close();
        remove(fileName);
        rename("temp.bin", fileName);
    }
};




// Isa relationship
class video_consulttion : public Appointment {

protected:
    
    float balance;
    float price;

public:

    video_consulttion()
    {
        balance = 3500;
        price = 0.0;
    }

    void setprice(float p)
    {
        price = p;
    }

    float getprice()
    {
        return price;
    }

    void gettotal()
    {
        float p = getprice();
        cout << "Your payment: " << balance + p << endl;

    }

};

// this includes the appointment process
class In_person : public Appointment {

protected:

    float balance;
    float price;

public:
    In_person()
    {
        balance = 3500;
        price = 0.0;
    }

    void setprice(float p)      //getter setters
    {
        price = p;
    }

    float getprice()
    {
        return price;
    }

    void gettotal()
    {
        float p = getprice();
        cout << "Your payment: " << balance + p << endl;

    }

};

const char* fileName3 = "User3.bin";


// base class of user
class Patient : public User {


protected:
    char Username[20];
    char CNIC[20];
    char Password[20];
    unsigned short userID;
    Appointment app;

public:
    Patient(string Username = "", string Password = "", string CNIC = "")
    {
        strcpy_s(this->Username, Username.c_str());
        strcpy_s(this->Password, Password.c_str());
        strcpy_s(this->CNIC, CNIC.c_str());
    }
    void setdata()
    {
        cout << "Name ";
        cin >> Username;
        cout << "Password ";
        cin >> Password;
        cout << "CNIC ";
        cin >> CNIC;
    }
    void getData()
    {
        cout << "Name " << Username << endl;
        cout << "Password  " << Password << endl;
        cout << "Id  " << endl;
        cout << "CNIC " << endl;
    }

    void FH_insertObject()
    {
        ofstream myFile3(fileName3, ios::binary | ios::app);
        if (myFile3.write((char*)this, sizeof(Patient))) {
            cout << "Success! Object Updated." << endl;
            myFile3.close();
        }
        else {
            cout << "Failed! Object Not Updated." << endl;
        }
    }

    void FH_getObjects() {
        Patient temp;
        ifstream myFile3(fileName3, ios::binary);
        while (myFile3.read((char*)&temp, sizeof(temp))) {
            temp.getData();
            cout << "..." << endl << endl;
        }
        myFile3.close();
    }

    void FH_updateObject(unsigned short uniqueIndex, string name) {
        Patient temp;
        fstream myFile3(fileName3, ios::in | ios::out | ios::binary);
        while (myFile3.read((char*)&temp, sizeof(temp))) {
            if (temp.userID == uniqueIndex) {
                strcpy_s(temp.Username, name.c_str());
                int current = myFile3.tellg();
                int oneblock = sizeof(temp);
                myFile3.seekg(current - oneblock);
                myFile3.write((char*)&temp, sizeof(temp));
                cout << "Success! Name Updated." << endl;
                myFile3.close();
            }
        }
    }

    void FH_deleteObject(int uniqueIndex)
    {
        Patient temp;
        fstream myFile(fileName, ios::in | ios::out | ios::binary);
        ofstream myFile_temp("temp.bin", ios::app | ios::binary);
        while (myFile.read((char*)&temp, sizeof(temp))) {
            if (temp.userID != uniqueIndex) {
                myFile_temp.write((char*)&temp, sizeof(temp));
            }
            else {
                cout << "Success! Object Deleted." << endl;
            }
        }
        myFile.close();
        myFile_temp.close();
        remove(fileName);
        rename("temp.bin", fileName);
    }

};


const char* fileName4 = "User4.bin";

class Doctor : public User {

protected:
    string Username;
    string email;
    string Password;
    string CNIC;
    int id;
    Appointment app;


public:

    Doctor(string Username = "", string email = "", string Password = "", string CNIC = "", int id = 0)
    {
        this->Username = Username;
        this->email = email;
        this->Password = Password;
        this->CNIC = CNIC;
        this->id = id;
    }

    void specialty()
    {
        int num;
        cout << "\t\t\t\t1. Gynacologist   (Dr. Samina)\n ";
        cout << "\t\t\t\t2. Determotlogist (Dr Zahid)\n";
        cout << "\t\t\t\t3. Oncologist     (Dr. Ahmad)\n";
        cout << "\t\t\t\t4. Orthopedic     (Dr.Ayesha)\n";

        cin >> num;


        if (num == 1 || num == 2 )
        {
            system("cls");
            //this is for searching the doctor by location time
            //app.setappointment();
            //app.getappointment();
            //app.FH_getObjects();

            time_Slot1();

        }

        if ( num == 3 || num == 4)
        {
            system("cls");
             //this is for searching the doctor by location time
            // app.setappointment();
            //app.getappointment();
            //app.FH_getObjects();
            //p_menu();

            time_Slot2();
 
        }
    }

    void setdoctor()
    {
        cout << "Username: ";
        cin >> Username;
        cout << "Email: ";
        cin >> email;
        cout << "Password: ";
        cin >> Password;
        cout << "CNIC: ";
        cin >> CNIC;
        cout << "ID: ";
        cin >> id;
    }

    void getDoctor()
    {
        cout << "Username: " << Username << endl;
        cout << "Email: " << email << endl;
        cout << "Password: " << Password << endl;
        cout << "CNIC: " << CNIC << endl;
        cout << "ID: " << id << endl;
    }

    virtual void Patient_details()
    {
        Patient p;
        p.setdata();
        p.getData();
    }


    void FH_insertObject()
    {
        ofstream myFile4(fileName4, ios::binary | ios::app);
        if (myFile4.write((char*)this, sizeof(Doctor))) {
            cout << "Success! Object Updated." << endl;
            myFile4.close();
        }
        else {
            cout << "Failed! Object Not Updated." << endl;
        }
    }

    void FH_getObjects() {
        Doctor temp;
        ifstream myFile4(fileName4, ios::binary);
        while (myFile4.read((char*)&temp, sizeof(temp))) {
            temp.getDoctor();
            cout << "..." << endl << endl;
        }
        myFile4.close();
    }


};

//we can call this derived class
class Gynecologist : public Doctor {

protected:
    char info[500];
    char name[30];
    char wait_time[30];
    char location[30];
    char experience[30];

public:

    Gynecologist(string name = "", string wait_time = "", string location = "", string experience = "")
    {
        strcpy_s(this->name, name.c_str());
        strcpy_s(this->wait_time, wait_time.c_str());
        strcpy_s(this->location, location.c_str());
        strcpy_s(this->experience, experience.c_str());
    }

    void getdata()
    {
        ofstream out1("Gynecologist.txt", ios::app | ios::binary);
        {
            system("cls");
            cout << "Enter the name ";
            cin.getline(name, 30);
            cout << "Enter the age ";
            cin.getline(wait_time, 30);
            cout << "Enter the salary ";
            cin.getline(location, 30);
            cout << "Enter the post ";
            cin.getline(experience, 30);

        }
        out1 << "Name " << name << endl;
        out1 << "Age " << wait_time << endl;
        out1 << "Salary " << location << endl;
        out1 << "post " << experience << endl;
        out1.close();
        cout << "Your information was saved " << endl;
        doctorMenu();

    }
    void showdata()
    {
        ifstream in1("Gynecologist.txt");
        if (!in1)
        {
            cout << "File open eror ";
        }
        while (!(in1.eof()))
        {
            in1.getline(info, 500);
            cout << info << endl;
        }
        in1.close();
        cout << "press any key to continue " << endl;
        //getch();
        doctorMenu();
    }

    void Patient_details()
    {
        Patient p;
        p.setdata();
        p.getData();
    }

};

class Dermotologist : public Doctor {

protected:
    char info[500];
    char name[30];
    char wait_time[30];
    char location[30];
    char experience[30];

public:

    Dermotologist(string name = "", string wait_time = "", string location = "", string experience = "")
    {
        strcpy_s(this->name, name.c_str());
        strcpy_s(this->wait_time, wait_time.c_str());
        strcpy_s(this->location, location.c_str());
        strcpy_s(this->experience, experience.c_str());
    }


    void getdata()
    {
        ofstream out2("Dermotologist.txt", ios::app | ios::binary);
        {
            system("cls");
            cout << "Enter the name ";
            cin.getline(name, 30);
            cout << "Enter the age ";
            cin.getline(wait_time, 30);
            cout << "Enter the salary ";
            cin.getline(location, 30);
            cout << "Enter the post ";
            cin.getline(experience, 30);

        }
        out2 << "Name " << name << endl;
        out2 << "Age " << wait_time << endl;
        out2 << "Salary " << location << endl;
        out2 << "post " << experience << endl;
        out2.close();
        cout << "Your information was saved " << endl;
        doctorMenu();

    }
    void showdata()
    {
        ifstream in2("Dermotologist.txt");
        if (!in2)
        {
            cout << "File open eror ";
        }
        while (!(in2.eof()))
        {
            in2.getline(info, 500);
            cout << info << endl;
        }
        in2.close();
        cout << "press any key to continue " << endl;
        //getch();
        doctorMenu();
    }

    void Patient_details()
    {
        Patient p;
        p.setdata();
        p.getData();
    }

};


class Oncologist : public Doctor {

protected:
    char info[500];
    char name[30];
    char wait_time[30];
    char location[30];
    char experience[30];

public:

    Oncologist(string name = "", string wait_time = "", string location = "", string experience = "")
    {
        strcpy_s(this->name, name.c_str());
        strcpy_s(this->wait_time, wait_time.c_str());
        strcpy_s(this->location, location.c_str());
        strcpy_s(this->experience, experience.c_str());
    }

    void getdata()
    {
        ofstream out3("Oncologist.txt", ios::app | ios::binary);
        {
            system("cls");
            cout << "Enter the name ";
            cin.getline(name, 30);
            cout << "Enter the age ";
            cin.getline(wait_time, 30);
            cout << "Enter the salary ";
            cin.getline(location, 30);
            cout << "Enter the post ";
            cin.getline(experience, 30);

        }
        out3 << "Name " << name << endl;
        out3 << "Age " << wait_time << endl;
        out3 << "Salary " << location << endl;
        out3 << "post " << experience << endl;
        out3.close();
        cout << "Your information was saved " << endl;
        doctorMenu();

    }
    void showdata()
    {
        ifstream in3("Oncologist.txt");
        if (!in3)
        {
            cout << "File open eror ";
        }
        while (!(in3.eof()))
        {
            in3.getline(info, 500);
            cout << info << endl;
        }
        in3.close();
        cout << "press any key to continue " << endl;
        //getch();
        doctorMenu();
    }

    void Patient_details()
    {
        Patient p;
        p.setdata();
        p.getData();
    }

};


class Orthopedic :public Doctor {

protected:
    char info[500];
    char name[30];
    char wait_time[30];
    char location[30];
    char experience[30];

public:

    Orthopedic(string name = "", string wait_time = "", string location = "", string experience = "")
    {
        strcpy_s(this->name, name.c_str());
        strcpy_s(this->wait_time, wait_time.c_str());
        strcpy_s(this->location, location.c_str());
        strcpy_s(this->experience, experience.c_str());
    }

    void getdata()
    {
        ofstream out3("Orthopedic.txt", ios::app | ios::binary);
        {
            system("cls");
            cout << "Enter the name ";
            cin.getline(name, 30);
            cout << "Enter the age ";
            cin.getline(wait_time, 30);
            cout << "Enter the salary ";
            cin.getline(location, 30);
            cout << "Enter the post ";
            cin.getline(experience, 30);

        }
        out3 << "Name " << name << endl;
        out3 << "Age " << wait_time << endl;
        out3 << "Salary " << location << endl;
        out3 << "post " << experience << endl;
        out3.close();
        cout << "Your information was saved " << endl;
        doctorMenu();

    }
    void showdata()
    {
        ifstream in4("Orthopedic.txt");
        if (!in4)
        {
            cout << "File open eror ";
        }
        while (!(in4.eof()))
        {
            in4.getline(info, 500);
            cout << info << endl;
        }
        in4.close();
        cout << "press any key to continue " << endl;
        //getch();
        doctorMenu();
    }

    void Patient_details()
    {
        Patient p;
        p.setdata();
        p.getData();
    }


};





//Inheritance or Isa relation
class Admin : public User {


protected:
    char Username[20];
    char Password[20];
    Appointment app;
    int id;

public:
    Admin(string Username = "", string Password = "")
    {
        strcpy_s(this->Username, Username.c_str());
        strcpy_s(this->Password, Password.c_str());
    }
    void setdata()
    {
        cout << "Name ";
        cin >> Username;
        cout << "Password ";
        cin >> Password;

    }
    void getData()
    {
        cout << "Name " << Username << endl;
        cout << "Password  " << Password << endl;
        cout << "Id  " << endl;
        cout << "CNIC " << endl;
    }


    void FH_getObject(unsigned short uniqueIndex) {
        Admin temp;
        ifstream myFile(fileName, ios::binary);
        while (myFile.read((char*)&temp, sizeof(temp))) {
            if (temp.id == uniqueIndex) {
                //temp.getData();
                myFile.close();
                *this = temp;
            }
        }
    }
    void FH_getObjects() {
        Admin temp;
        ifstream myFile(fileName, ios::binary);
        while (myFile.read((char*)&temp, sizeof(temp))) {
            temp.getData();
            cout << "..." << endl << endl;
        }
        myFile.close();
    }
};

//for feedback of patients
class Feedback {

protected:

    Patient patient[50];
    Doctor doctor;
    Datetime datetime;
    char review[100];

public:

    void f_menu()
    {
        int num;
        system("cls");

        cout << endl << endl << endl << endl;
        cout << endl << endl << endl << endl;

        cout << "\t\t\t\t|=================================================|\n";
        cout << "\t\t\t\t\t Give a chance to improve Ourselfs :)\n";
        cout << "\t\t\t\t|=================================================|\n";

        cout << endl << endl << endl << endl;

        cout << " Write a review about your expience: " << endl;
        cin >> review;
        

        cout << endl << endl << endl << endl;

        cout << "\t\t\t\t---------  RATING  -------------\n";
        cout << "\t\t\t\t1. *****         :) " << endl;
        cout << "\t\t\t\t2. ****         :0 " << endl;
        cout << "\t\t\t\t3. ***         :| " << endl;
        cout << "\t\t\t\t4. **         :\ " << endl;
        cout << "\t\t\t\t5. *         :( " << endl;
        cin >> num;

        cout << endl;

        if (num >= 1 && num <= 5)
        {
            cout << "Thank you for your response. we reply to you shortly\n ";
        }

    }


};





/*//////////////////  function definations    \\\\\\\\\\\\\\\\\\\\\\\\*/
void p_Menu()
{
    system("cls");
    system("color FD");

    cout << "\t\t\t\t***************************************************" << endl;
    cout << "\t\t\t\t\t\t WELCOME TO OLADOC " << endl;
    cout << "\t\t\t\t***************************************************" << endl;

    int choice;


    cout << endl << endl << endl;

    cout << "\t\t\t\t ********************************************\n";
    cout << "\t\t\t\t\t Find best docotrs near you \n";
    cout << "\t\t\t\t ********************************************\n";

    cout << endl << endl << endl;

    cout << "\t\t\t\t\t\t Please select an Option\n";

    cout << endl << endl << endl;
    cout << "\t\t\t\t Press 1. for Doctor info: \n";
    cout << "\t\t\t\t Press 2. for Booking Appointment: \n";
    cout << "\t\t\t\t Press 3. for Cancelling Appointment: \n";
    cout << "\t\t\t\t press 4. if you're late for the appointment\n";
    cout << "\t\t\t\t Press 5. for Feedback: \n";
    cout << "\t\t\t\t Press 6. for recharge Account: \n";
    cin >> choice;

    
    int n;

    Doctor obj;
    Patient p;
    Feedback f;

    Payment* ptr;
    Payment* ptr2;
    BankTransfer b;
    E_transaction e;


    if (choice == 1)
    {
        Dr_info();
        system("pause");
    }

    if (choice == 2)
    {
        obj.specialty();
    }

    if (choice == 3)
    {

        system("cls");

       // p.FH_insertObject();
        p.FH_deleteObject(2);

        cout << "Which day you want to cancel: " << endl;
        cout << "                   1.                     \n";
        cout << "                   2.                     \n";
        cout << "                   3.                     \n";
        cout << "                   4.                     \n";
        cin >> n;

        ptr = &b;

        if(n == 1)
        ptr->cancel_day1();

        if(n == 2)
        ptr->cancel_day2(2500);

        if(n == 3)
        ptr->cancel_day3(4000);

        if(n == 4)
        ptr->cancel_day4();

    }

    if (choice == 4)
    {
        system("cls");
        cout << "How late are you(day): " << endl;
        cout << "                   1.                     \n";
        cout << "                   2.                     \n";
        cout << "                   3.                     \n";
        cin >> n;

        ptr2 = &b;

        if (n == 1)
            ptr2->late1(100);

        if (n == 2)
            ptr2->late2(100);

        if (n == 3)
            ptr2->late3(100);
    }


    if (choice == 5)
    {
        system("cls");
        f.f_menu();
    }

    if (choice == 6)
    {
        system("cls");
        cout << "your account is recharged: " << endl;
    }

}

//admin menu
void a_Menu()
{
    system("cls");
    system("color FD");

    cout << "\t\t\t\t***************************************************" << endl;
    cout << "\t\t\t\t\t\t WELCOME TO OLADOC " << endl;
    cout << "\t\t\t\t***************************************************" << endl;

    int choice;
    Patient p;

    cout << endl << endl << endl;

    cout << "\t\t\t\t ********************************************\n";
    cout << "\t\t\t\t\t Find best docotrs near you \n";
    cout << "\t\t\t\t ********************************************\n";

    cout << endl << endl << endl;

    cout << "\t\t\t\t\t\t Please select an Option\n";

    cout << endl << endl << endl;
    cout << "\t\t\t\t Press 1. for Doctors info: \n";
    cout << "\t\t\t\t Press 2. for Patient info: \n";
    cout << "\t\t\t\t Press 3. for LOGOUT \n";
    cin >> choice;

    if (choice == 1)
    {
        Dr_info();
    }

    if (choice == 2)
    {
        p.setdata();
        p.getData();
       // p.FH_getObjects();
    }

    if (choice == 3)
    {
        cout << "Logged out\n";
    }

}

//doctor menu
void d_Menu()
{


    system("cls");
    system("color FD");

    cout << "\t\t\t\t***************************************************" << endl;
    cout << "\t\t\t\t\t\t WELCOME TO OLADOC " << endl;
    cout << "\t\t\t\t***************************************************" << endl;

    int choice;


    cout << endl << endl << endl;

    cout << "\t\t\t\t ********************************************\n";
    cout << "\t\t\t\t\t Find best docotrs near you \n";
    cout << "\t\t\t\t ********************************************\n";

    cout << endl << endl << endl;

    cout << "\t\t\t\t\t\t Please select an Option\n";

    cout << endl << endl << endl;
    cout << "\t\t\t\t Press 1. for checking the appointment patient details.: \n";
    cout << "\t\t\t\t Press 2. for changing the status the of appointment: \n";
    cout << "\t\t\t\t Press 3. for checking all his scheduled appointments: \n";
    cin >> choice;

    Doctor* ptr1;
    Doctor* ptr2;
    Doctor* ptr3;
    Gynecologist g;
    Orthopedic o1;
    Dermotologist d;

    Appointment app;

    if (choice == 1)
    {
        ptr1 = &g;
        ptr2 = &o1;
        cout << "For gynacologist " << endl;
        ptr1->Patient_details();
        cout << endl << endl << endl;
        cout << "for Orthopedic " << endl;
        ptr2->Patient_details();
    }

    if (choice == 2)
    {
        system("cls");
        char ch;
        ptr1 = &g;
        ptr2 = &o1;

        cout << "Choose R for reject and P for pending: \n";

        ptr1->Patient_details();
        cin >> ch;

        cout << endl << endl << endl << endl;

        ptr2->Patient_details();
        cin >> ch;
    }

    if (choice == 3)
    {
        system("cls");
        ptr1 = &g;
        ptr2 = &o1;
        ptr3 = &d;

        ptr1->Patient_details();
        cout << endl << endl << endl;
        ptr2->Patient_details();
        cout << endl << endl << endl;
        ptr3->Patient_details();
    }

}


// Main menu that pops up everytime
void MainMenu()
{

    int choice;

    cout << "\t\t\t\t***************************************************" << endl;
    cout << "\t\t\t\t\t\t WELCOME TO OLADOC " << endl;
    cout << "\t\t\t\t***************************************************" << endl;

    cout << endl << endl << endl;
    cout << "\t\t\t\t Press 1. if you're Admin: \n";
    cout << "\t\t\t\t Press 2. if you're Patient: \n";
    cout << "\t\t\t\t Press 3. if you're Doctor: \n";
    cin >> choice;

    User u;
    char ch1;

    if (choice == 1)
    {
        cout << "\t LOGIN \n";
        u.login();
        u.Verify_password();
        system("pause");
        a_Menu();
    }

    if (choice == 2)
    {
        cout << "Are you registered:\t" << endl;
        cin >> ch1;

        cout << endl << endl << endl;

        if (ch1 == 'N' || ch1 == 'n')
        {
            u.Register();
            u.Verify_CNIC();
            u.Verify_password();
            system("pause");
        }

        if (ch1 == 'Y' || ch1 == 'y')
        {
            u.login();
            u.Verify_password();
            system("pause");
        }
        p_Menu();

    }

    if (choice == 3)
    {
        cout << "Are you registered:\t" << endl;
        cin >> ch1;

        cout << endl << endl << endl;

        if (ch1 == 'N' || ch1 == 'n')
        {
            u.Register();
            u.Verify_CNIC();
            u.Verify_password();
            system("pause");
        }

        if (ch1 == 'Y' || ch1 == 'y')
        {
            u.login();
            u.Verify_password();
            system("pause");
        }
        d_Menu();
    }

}

/*//////////////////////////////////////////////////////////////////////////////////////////*/







void Dr_info()
{
    system("cls");
    system("color F3");

    cout << "\n===========================================================\n";
    cout << "\n\n\t\t(Three Doctor Avalible) \n\n\t\t [Information timing are given below]\n";
    cout << "-------------------------------------------------------------------------\n";

    cout << "\n*******************************************************\n";
    cout << "\t\t Doctor Avalible: \n";
    cout << "\t\t Dr Samina (Gynecologist)\n\n";
    cout << "\t\t\t --Timing-- \n\n";
    cout << "\t Monday to Friday \t\t 9am to 5pm \n";
    cout << "\t Saturday           \t\t 9am to 1pm \n";
    cout << "\t Sunday           \t\t OFF \n";
    cout << "\n*******************************************************\n";

    cout << endl << endl << endl;

    cout << "\n*******************************************************\n";
    cout << "\t\t Doctor Avalible: \n";
    cout << "\t\t Dr Zahid (Dermtogist)\n\n";
    cout << "\t\t\t --Timing-- \n\n";
    cout << "\t Monday to Friday \t\t 9am to 5pm \n";
    cout << "\t Saturday           \t\t 9am to 4pm \n";
    cout << "\t Sunday           \t\t OFF \n";
    cout << "\n*******************************************************\n";


    cout << endl << endl << endl;

    cout << "\n*******************************************************\n";
    cout << "\t\t Doctor Avalible: \n";
    cout << "\t\t Dr Ahmad (Oncologist)\n\n";
    cout << "\t\t\t --Timing-- \n\n";
    cout << "\t Monday to Friday \t\t 9am to 5pm \n";
    cout << "\t Saturday           \t\t 9am to 5pm \n";
    cout << "\t Sunday           \t\t OFF \n";
    cout << "\n*******************************************************\n";


    cout << endl << endl << endl;

    cout << "\n*******************************************************\n";
    cout << "\t\t Doctor Avalible: \n";
    cout << "\t\t Dr Ayesha (Orthopedic)\n\n";
    cout << "\t\t\t --Timing-- \n\n";
    cout << "\t Monday to Friday \t\t 9am to 5pm \n";
    cout << "\t Saturday           \t\t 9am to 10am \n";
    cout << "\t Sunday           \t\t OFF \n";
    cout << "\n*******************************************************\n";


    cout << endl << endl << endl;

    cout << "Press any key to continue:\t" << endl;

    //getch();

}




int main()
{
    char ch;
    char ch1;

    do {

        User u;

        MainMenu();


        cout << "\nDo Again?\nEnter \'S\' to Stop.\nEnter Any Other Key to Continue: "; cin >> ch;
        system("cls");
    } while (ch != 'S');
}


