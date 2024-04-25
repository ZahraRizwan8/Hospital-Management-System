//#include <iostream>
//#include<fstream>
//#include<iomanip>
//#include<cstring>
//#include <conio.h>
//#include <windows.h>
//using namespace std;
//
//
//
//const char* fileName1 = "User1.bin";
//
//class demo
//{
//public:
//    virtual void showdata() = 0;
//    virtual void getdata() = 0;
//
//};
//
//
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
////int main()
////{
////    char ch;
////
////    do {
////
////        Patient obj;
////        int choice, index;
////
////        cout << "\t\t\t\t***************************************************" << endl;
////        cout << "\t\t\t\t\t\t WELCOME TO OLADOC " << endl;
////        cout << "\t\t\t\t***************************************************" << endl;
////
////        cout << endl << endl << endl;
////
////        cout << "\t\t\t\t************** Patient Information ****************" << endl;
////        cout << endl << endl << endl;
////        cout << "press 1 if you're not Registered " << endl;
////        cout << "press 2 if you're already logged in " << endl;
////        cin >> choice;
////
////        switch (choice)
////        {
////        case 1:
////            obj.Register();
////            obj.Verify_CNIC();
////            obj.Verify_password();
////            break;
////
////        case 2:
////            obj.login();
////            obj.Verify_Patient();
////
////            break;
////
////        default:
////            cout << "Invalid Selection!" << endl;
////            exit(0);
////        }
////        cout << "\nDo Again?\nEnter \'S\' to Stop.\nEnter Any Other Key to Continue: "; cin >> ch;
////        system("cls");
////    } while (ch != 'S');
////}
//
