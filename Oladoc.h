//#pragma once
//#include <iostream>
//#include<fstream>
//#include<iomanip>
//#include<cstring>
//#include <conio.h>
//#include <windows.h>
//
//
//#include "Doctor.h"
//#include "Admin.h"
//#include "Patient.h"
//
//using namespace std;
//
//
//#ifndef OLADOC
//#define OLADOC
//
//
//
//
//class demo1
//{
//public:
//    virtual void Menu() = 0;
//
//};
//
//
//class User {
//
//protected:
//    string Username;
//    string email;
//    string Password;
//    string CNIC;
//
//
//public:
//
//    void Register()
//    {
//
//        cout << "Enter your Cnic:\t ";
//        cin >> CNIC;
//
//        cout << "Enter password:\t\t ";
//        cin >> Password;
//
//    }
//
//    void login()
//    {
//        cout << "Enter Username:\t ";
//        cin >> Username;
//        cout << "Enter Password:\t ";
//        cin >> Password;
//    }
//    void getregister()
//    {
//        system("cls");
//        ofstream out0("Register.txt", ios::app | ios::binary);
//        User u;
//        u.Register();
//        out0.write((char*)&u, sizeof(User));
//        out0.close();
//        cout << "Operation successful " << endl;
//    }
//
//
//
//    void getlogin()
//    {
//        system("cls");
//        ofstream out("Login.txt", ios::app | ios::binary);
//        User u;
//        u.login();
//        out.write((char*)&u, sizeof(User));
//        out.close();
//        cout << "Operation successful " << endl;
//    }
//
//    void Verify_password()
//    {
//        system("pause");
//        int len = 0;
//
//        for (int i = 0; Password[i] != '\0'; i++)
//        {
//            len++;
//        }
//
//        if (len > 8)
//        {
//            cout << "INVALID.... Enter again:\t ";
//            cin >> Password;
//        }
//
//        else
//            cout << "VALID LENGTH: " << endl;
//
//        char ch1;
//        char ch2;
//        char ch3;
//
//
//
//        for (int i = 0; Password[i] != '\0'; i++)
//        {
//
//
//            for (ch1 = 'A'; ch1 <= 'Z'; ch1++)
//
//                if (Password[i] == ch1)
//                    cout << "valid " << endl << endl;
//            //else
//             // cout << "Enter again";
//
//
//            for (ch2 = ' '; ch2 <= '/'; ch2++)
//
//                if (Password[i] == ch2)
//                    cout << "valid" << endl;
//            // else
//                // cout << "Enter again";
//                //cin >> password;
//        }
//    }
//
//    void Verify_CNIC()
//    {
//        system("pause");
//        int len = 0;
//
//        for (int j = 0; CNIC[j] != '\0'; j++)
//        {
//            len++;
//        }
//
//        if (len == 13)
//        {
//            cout << " CNIC is Valid " << endl << endl;
//            cin.ignore();
//        }
//        else
//        {
//            cout << "CNIC is Invalid " << endl << endl;
//            cin.ignore();
//        }
//    }
//
//};
//
//void MainMenu()
//{
//
//    adminMenu obj1;
//    PatientMenu obj2;
//    DoctorMenu obj3;
//    int choice;
//
//    cout << "\t\t\t\t***************************************************" << endl;
//    cout << "\t\t\t\t\t\t WELCOME TO OLADOC " << endl;
//    cout << "\t\t\t\t***************************************************" << endl;
//
//    cout << endl << endl << endl;
//    cout << "\t\t\t\t Press 1. if you're Admin: \n";
//    cout << "\t\t\t\t Press 2. if you're Doctor: \n";
//    cout << "\t\t\t\t Press 3. if you're Patient: \n";
//    cin >> choice;
//
//    if (choice == 1)
//    {
//        obj1.Menu();
//    }
//
//    if (choice == 2)
//    {
//        obj2.Menu();
//    }
//
//    if (choice == 3)
//    {
//        obj3.Menu();
//    }
//
//}
//
//#endif