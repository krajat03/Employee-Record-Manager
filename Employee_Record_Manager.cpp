#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
class employee
{
    int id;
    string name;
    string post;
    float experience;              
    long long package;
    long long Mob;
    string email_id;

public:
    void get_input()
    {
        cout << "Id:- ";
        cin >> id;
        cin.ignore();
        cout << endl<< "Name:- ";
        getline(cin, name);
        cout << endl << "Post:- ";
        getline(cin, post);
        cout << endl << "Work experience in months:- ";
        cin >> experience;
        cout << endl << "Package:- ";
        cin >> package;
        cin.ignore();
        cout << endl << "E-mail:- ";
        getline(cin,email_id);
        cout << endl << "Contact number:- ";
        cin >> Mob;
    }
    void get_output()
    {
        cout << "Id:- " << id << endl;
        cout << endl << "Name:- " << name << endl;
        cout << endl << "Post:- " << post << endl;
        cout << endl << "Work experience in months:- " << setprecision(2) << experience/12 << "yrs" << endl;
        cout << endl << "Package:- " << package << endl;
        cout << endl << "E-mail:- " << email_id << endl;
        cout << endl << "Contact number:- " << Mob << endl << endl;
    }
};
int main()
{
    int n;
    cout << "Enter numbers of Employees: - ";
    cin >> n;
    cout << endl;
    employee e[n];
    for (int i = 0; i < n; i++)
    {
        cout << endl << "****** Details of employees " << i + 1 << " ******" << endl;
        e[i].get_input();
    }
    for (int i = 0; i < n; i++)
    {
        cout << endl << "****** Details of employees " << i + 1 << " ******" << endl;

        e[i].get_output();
    }

    return 0;
}
