//#pragma once
//#include <iostream>
//#include<fstream>
//#include<iomanip>
//#include<cstring>
//#include <conio.h>
//#include <windows.h>
//
//#include "Oladoc.h"
//#include "Patient.h"
//#include "Admin.h"
//
//using namespace std;
//
//#ifndef DOCTOR
//#define DOCTOR
//
//
//
//const char* fileName2 = "User2.bin";
//
//void doctorMenu();
//
//
//
//class demo
//{
//public:
//    virtual void showdata() = 0;
//    virtual void getdata() = 0;
//
//};
//
//class Information {
//
//public:
//    void Dr_info()
//    {
//        system("cls");
//        system("color F3");
//
//        cout << "\n===========================================================\n";
//        cout << "\n\n\t\t(Three Doctor Avalible) \n\n\t\t [Information timing are given below]\n";
//        cout << "-------------------------------------------------------------------------\n";
//
//        cout << "\n*******************************************************\n";
//        cout << "\t\t Doctor Avalible: \n";
//        cout << "\t\t Dr Samina (Gynecologist)\n\n";
//        cout << "\t\t\t --Timing-- \n\n";
//        cout << "\t Monday to Friday \t\t 9am to 5pm \n";
//        cout << "\t Saturday           \t\t 9am to 1pm \n";
//        cout << "\t Sunday           \t\t OFF \n";
//        cout << "\n*******************************************************\n";
//
//        cout << endl << endl << endl;
//
//        cout << "\n*******************************************************\n";
//        cout << "\t\t Doctor Avalible: \n";
//        cout << "\t\t Dr Zahid (Dermtogist)\n\n";
//        cout << "\t\t\t --Timing-- \n\n";
//        cout << "\t Monday to Friday \t\t 9am to 5pm \n";
//        cout << "\t Saturday           \t\t 9am to 4pm \n";
//        cout << "\t Sunday           \t\t OFF \n";
//        cout << "\n*******************************************************\n";
//
//
//        cout << endl << endl << endl;
//
//        cout << "\n*******************************************************\n";
//        cout << "\t\t Doctor Avalible: \n";
//        cout << "\t\t Dr Ahmad (Oncologist)\n\n";
//        cout << "\t\t\t --Timing-- \n\n";
//        cout << "\t Monday to Friday \t\t 9am to 5pm \n";
//        cout << "\t Saturday           \t\t 9am to 5pm \n";
//        cout << "\t Sunday           \t\t OFF \n";
//        cout << "\n*******************************************************\n";
//
//
//        cout << endl << endl << endl;
//
//        cout << "\n*******************************************************\n";
//        cout << "\t\t Doctor Avalible: \n";
//        cout << "\t\t Dr Ayesha (Orthopedic)\n\n";
//        cout << "\t\t\t --Timing-- \n\n";
//        cout << "\t Monday to Friday \t\t 9am to 5pm \n";
//        cout << "\t Saturday           \t\t 9am to 10am \n";
//        cout << "\t Sunday           \t\t OFF \n";
//        cout << "\n*******************************************************\n";
//
//
//        cout << endl << endl << endl;
//
//        cout << "Press any key to continue:\t" << endl;
//
//        //getch();
//
//    }
//
//};
//
//
//class Doctor : public User {
//
//protected:
//    string Username;
//    string email;
//    string Password;
//    string CNIC;
//    int id;
//
//
//public:
//
//    Doctor(string Username = "", string email = "", string Password = "", string CNIC = "", int id = 0)
//    {
//        this->Username = Username;
//        this->email = email;
//        this->Password = Password;
//        this->CNIC = CNIC;
//        this->id = id;
//    }
//
//    void specialty()
//    {
//        int num;
//        cout << "1. Determotlogist\n";
//        cout << "2. Gynacologist\n";
//        cout << "3. Oncologist\n";
//        cout << "4. Orthopedic\n";
//
//        cin >> num;
//
//    }
//
//    void setdoctor()
//    {
//        cout << "Username: ";
//        cin >> Username;
//        cout << "Email: ";
//        cin >> email;
//        cout << "Password: ";
//        cin >> Password;
//        cout << "CNIC: ";
//        cin >> CNIC;
//        cout << "ID: ";
//        cin >> id;
//    }
//
//    void getDoctor()
//    {
//        cout << "Username: " << Username << endl;
//        cout << "Email: " << email << endl;
//        cout << "Password: " << Password << endl;
//        cout << "CNIC: " << CNIC << endl;
//        cout << "ID: " << id << endl;
//    }
//
//};
//
//
//class Gynecologist : public Doctor {
//
//protected:
//    char info[500];
//    char name[30];
//    char wait_time[30];
//    char location[30];
//    char experience[30];
//
//public:
//
//    Gynecologist(string name = "", string wait_time = "", string location = "", string experience = "")
//    {
//        strcpy_s(this->name, name.c_str());
//        strcpy_s(this->wait_time, wait_time.c_str());
//        strcpy_s(this->location, location.c_str());
//        strcpy_s(this->experience, experience.c_str());
//    }
//
//    void getdata()
//    {
//        ofstream out1("Gynecologist.txt", ios::app | ios::binary);
//        {
//            system("cls");
//            cout << "Enter the name ";
//            cin.getline(name, 30);
//            cout << "Enter the age ";
//            cin.getline(wait_time, 30);
//            cout << "Enter the salary ";
//            cin.getline(location, 30);
//            cout << "Enter the post ";
//            cin.getline(experience, 30);
//
//        }
//        out1 << "Name " << name << endl;
//        out1 << "Age " << wait_time << endl;
//        out1 << "Salary " << location << endl;
//        out1 << "post " << experience << endl;
//        out1.close();
//        cout << "Your information was saved " << endl;
//        doctorMenu();
//
//    }
//    void showdata()
//    {
//        ifstream in1("Gynecologist.txt");
//        if (!in1)
//        {
//            cout << "File open eror ";
//        }
//        while (!(in1.eof()))
//        {
//            in1.getline(info, 500);
//            cout << info << endl;
//        }
//        in1.close();
//        cout << "press any key to continue " << endl;
//        //getch();
//        doctorMenu();
//    }
//
//
//};
//
//class Dermotologist : public Doctor {
//
//protected:
//    char info[500];
//    char name[30];
//    char wait_time[30];
//    char location[30];
//    char experience[30];
//
//public:
//
//    Dermotologist(string name = "", string wait_time = "", string location = "", string experience = "")
//    {
//        strcpy_s(this->name, name.c_str());
//        strcpy_s(this->wait_time, wait_time.c_str());
//        strcpy_s(this->location, location.c_str());
//        strcpy_s(this->experience, experience.c_str());
//    }
//
//
//    void getdata()
//    {
//        ofstream out2("Dermotologist.txt", ios::app | ios::binary);
//        {
//            system("cls");
//            cout << "Enter the name ";
//            cin.getline(name, 30);
//            cout << "Enter the age ";
//            cin.getline(wait_time, 30);
//            cout << "Enter the salary ";
//            cin.getline(location, 30);
//            cout << "Enter the post ";
//            cin.getline(experience, 30);
//
//        }
//        out2 << "Name " << name << endl;
//        out2 << "Age " << wait_time << endl;
//        out2 << "Salary " << location << endl;
//        out2 << "post " << experience << endl;
//        out2.close();
//        cout << "Your information was saved " << endl;
//        doctorMenu();
//
//    }
//    void showdata()
//    {
//        ifstream in2("Dermotologist.txt");
//        if (!in2)
//        {
//            cout << "File open eror ";
//        }
//        while (!(in2.eof()))
//        {
//            in2.getline(info, 500);
//            cout << info << endl;
//        }
//        in2.close();
//        cout << "press any key to continue " << endl;
//        //getch();
//        doctorMenu();
//    }
//
//};
//
//
//class Oncologist : public Doctor {
//
//protected:
//    char info[500];
//    char name[30];
//    char wait_time[30];
//    char location[30];
//    char experience[30];
//
//public:
//
//    Oncologist(string name = "", string wait_time = "", string location = "", string experience = "")
//    {
//        strcpy_s(this->name, name.c_str());
//        strcpy_s(this->wait_time, wait_time.c_str());
//        strcpy_s(this->location, location.c_str());
//        strcpy_s(this->experience, experience.c_str());
//    }
//
//    void getdata()
//    {
//        ofstream out3("Oncologist.txt", ios::app | ios::binary);
//        {
//            system("cls");
//            cout << "Enter the name ";
//            cin.getline(name, 30);
//            cout << "Enter the age ";
//            cin.getline(wait_time, 30);
//            cout << "Enter the salary ";
//            cin.getline(location, 30);
//            cout << "Enter the post ";
//            cin.getline(experience, 30);
//
//        }
//        out3 << "Name " << name << endl;
//        out3 << "Age " << wait_time << endl;
//        out3 << "Salary " << location << endl;
//        out3 << "post " << experience << endl;
//        out3.close();
//        cout << "Your information was saved " << endl;
//        doctorMenu();
//
//    }
//    void showdata()
//    {
//        ifstream in3("Oncologist.txt");
//        if (!in3)
//        {
//            cout << "File open eror ";
//        }
//        while (!(in3.eof()))
//        {
//            in3.getline(info, 500);
//            cout << info << endl;
//        }
//        in3.close();
//        cout << "press any key to continue " << endl;
//        //getch();
//        doctorMenu();
//    }
//
//};
//
//class Orthopedic :public Doctor {
//
//protected:
//    char info[500];
//    char name[30];
//    char wait_time[30];
//    char location[30];
//    char experience[30];
//
//public:
//
//    Orthopedic(string name = "", string wait_time = "", string location = "", string experience = "")
//    {
//        strcpy_s(this->name, name.c_str());
//        strcpy_s(this->wait_time, wait_time.c_str());
//        strcpy_s(this->location, location.c_str());
//        strcpy_s(this->experience, experience.c_str());
//    }
//
//    void getdata()
//    {
//        ofstream out3("Orthopedic.txt", ios::app | ios::binary);
//        {
//            system("cls");
//            cout << "Enter the name ";
//            cin.getline(name, 30);
//            cout << "Enter the age ";
//            cin.getline(wait_time, 30);
//            cout << "Enter the salary ";
//            cin.getline(location, 30);
//            cout << "Enter the post ";
//            cin.getline(experience, 30);
//
//        }
//        out3 << "Name " << name << endl;
//        out3 << "Age " << wait_time << endl;
//        out3 << "Salary " << location << endl;
//        out3 << "post " << experience << endl;
//        out3.close();
//        cout << "Your information was saved " << endl;
//        doctorMenu();
//
//    }
//    void showdata()
//    {
//        ifstream in4("Orthopedic.txt");
//        if (!in4)
//        {
//            cout << "File open eror ";
//        }
//        while (!(in4.eof()))
//        {
//            in4.getline(info, 500);
//            cout << info << endl;
//        }
//        in4.close();
//        cout << "press any key to continue " << endl;
//        //getch();
//        doctorMenu();
//    }
//
//
//};
//
//
//class DoctorMenu {
//
//public:
//    void Menu()
//    {
//
//
//        system("cls");
//        system("color FC");
//
//        cout << "\t\t\t\t***************************************************" << endl;
//        cout << "\t\t\t\t\t\t WELCOME TO OLADOC " << endl;
//        cout << "\t\t\t\t***************************************************" << endl;
//
//        int choice;
//
//
//        cout << endl << endl << endl;
//
//        cout << "\t\t\t\t ********************************************\n";
//        cout << "\t\t\t\t\t Find best docotrs near you \n";
//        cout << "\t\t\t\t ********************************************\n";
//
//        cout << endl << endl << endl;
//
//        cout << "\t\t\t\t\t\t Please select an Option\n";
//
//        cout << endl << endl << endl;
//        cout << "\t\t\t\t Press 1. for checking the appointment patient’s details.: \n";
//        cout << "\t\t\t\t Press 2. for changing the status the of appointment: \n";
//        cout << "\t\t\t\t Press 3. for checking all his scheduled appointments: \n";
//        cin >> choice;
//
//        //Information i1;
//        //Doctor d1;
//
//        //if (choice == 1)
//        //{
//
//        //}
//
//        //if (choice == 2)
//        //{
//
//        //}
//
//
//    }
//
//};
//
//void docotrMenu()
//{
//    system("cls");
//    system("color FC");
//
//    cout << "\t\t\t\t***************************************************" << endl;
//    cout << "\t\t\t\t\t\t WELCOME TO OLADOC " << endl;
//    cout << "\t\t\t\t***************************************************" << endl;
//
//    int choice;
//
//
//    cout << endl << endl << endl;
//
//    cout << "\t\t\t\t ********************************************\n";
//    cout << "\t\t\t\t\t Find best docotrs near you \n";
//    cout << "\t\t\t\t ********************************************\n";
//
//    cout << endl << endl << endl;
//
//    cout << "\t\t\t\t\t\t Please select an Option\n";
//
//    cout << endl << endl << endl;
//    cout << "\t\t\t\t Press 1. for Doctors info: \n";
//    cout << "\t\t\t\t Press 2. for Doctor prefrance: \n";
//    cout << "\t\t\t\t Press 3. for Booking Appointment: \n";
//    cout << "\t\t\t\t Press 4. for resetting or changing Password: \n";
//    cout << "\t\t\t\t Press 5. for LOGOUT \n";
//    cin >> choice;
//
//    Information i1;
//    Doctor d1;
//
//    if (choice == 1)
//    {
//
//        i1.Dr_info();
//        system("pause");
//        doctorMenu();
//
//    }
//
//    if (choice == 2)
//    {
//        d1.specialty();
//        system("pause");
//        doctorMenu();
//    }
//
//
//}
//
//#endif // !DOCTOR
////int main()
////{
////    char ch;
////    char ch1;
////
////    do {
////
////        User u;
////
////        MainMenu();
////
////        cout << "Are you registered:\t" << endl;
////        cin >> ch1;
////
////        cout << endl << endl << endl;
////
////        if (ch1 == 'N' || ch1 == 'n')
////        {
////            u.Register();
////            u.Verify_CNIC();
////            u.Verify_password();
////            system("pause");
////        }
////
////        if (ch1 == 'Y' || ch1 == 'y')
////        {
////            u.login();
////            u.Verify_password();
////            system("pause");
////        }
////
////
////        doctorMenu();
////
////
////        cout << "\nDo Again?\nEnter \'S\' to Stop.\nEnter Any Other Key to Continue: "; cin >> ch;
////        system("cls");
////    } while (ch != 'S');
////}
