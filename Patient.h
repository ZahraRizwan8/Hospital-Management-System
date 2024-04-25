//#pragma once
//#include <iostream>
//#include<fstream>
//#include<iomanip>
//#include<cstring>
//#include <conio.h>
//#include <windows.h>
//
//#include "Oladoc.h"
//#include "Doctor.h"
//#include "Admin.h"
//
//using namespace std;
//
//#ifndef PATIENT
//#define PATIENT
//
//void Menu();
//
//
//const char* fileName1 = "User1.bin";
//
//
//
//class Patient : public User {
//
//
//protected:
//    string Username;
//    char CNIC[20];
//    char Password[20];
//    int id;
//
//public:
//    Patient(string Username = "", string Password = "", string CNIC = "", int id = 0)
//    {
//        this->Username = Username;
//        strcpy_s(this->Password, Password.c_str());
//        strcpy_s(this->CNIC, CNIC.c_str());
//        this->id = id;
//    }
//    void setdata()
//    {
//        cout << "Name ";
//        cin >> Username;
//        cout << "Password ";
//        cin >> Password;
//        cout << "ID ";
//        cin >> id;
//        cout << "CNIC ";
//        cin >> CNIC;
//    }
//    void getData()
//    {
//        cout << "Name " << Username << endl;
//        cout << "Password  " << Password << endl;
//        cout << "Id  " << endl;
//        cout << "CNIC " << endl;
//    }
//
//
//
//};
//
//
//class PatientMenu {
//
//public:
//
//    void Menu()
//    {
//        system("cls");
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
//        cout << "\t\t\t\t Press 1. for Doctor info: \n";
//        cout << "\t\t\t\t Press 2. for Booking Appointment: \n";
//        cout << "\t\t\t\t Press 3. for Cancelling Appointment: \n";
//        cout << "\t\t\t\t Press 4. for Book in-person or video consultations: \n";
//        cout << "\t\t\t\t Press 5. for checking all his scheduled appointments: \n";
//        cout << "\t\t\t\t Press 6. for recharge Account: \n";
//        cin >> choice;
//
//    }
//};
//
//#endif