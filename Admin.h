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
//#include "Doctor.h"
// 
//using namespace std;
//#ifndef ADMIN
//#define ADMIN
//
//void Menu();
//
//
//class Admin : public User {
//
//
//protected:
//    char Username[20];
//    char Password[20];
//
//public:
//    Admin(string Username = "", string Password = "")
//    {
//        strcpy_s(this->Username, Username.c_str());
//        strcpy_s(this->Password, Password.c_str());
//    }
//    void setdata()
//    {
//        cout << "Name ";
//        cin >> Username;
//        cout << "Password ";
//        cin >> Password;
//
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
//class adminMenu {
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
//        cout << "\t\t\t\t Press 1. for Doctors info: \n";
//        cout << "\t\t\t\t Press 2. for Patient info: \n";
//        cout << "\t\t\t\t Press 3. for LOGOUT \n";
//        cin >> choice;
//
//    }
//};
//
//#endif // !ADMIN