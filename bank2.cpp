#include <iostream>
using namespace std;
class Bank
{
private:
    int acno;
    char name[30];
    long balance;

public:
    void OpenAccount()
    {
        cout << "ENTER ACCOUNT NO: ";
        cin >> acno;
        cout << "ENTER NAME OF CUSTOMER: ";
        cin >> name;
        cout << "ENTER BALANCE: ";
        cin >> balance;
    }
    void ShowAccount()
    {
        cout << "ACC NUMBER: " << acno << endl;
        cout << "NAME OF CUSTOMER: " << name << endl;
        cout << "BALANCE: " << balance << endl;
    }
    void Deposit()
    {
        long amt;
        cout << "Enter Amount U want to deposit? ";
        cin >> amt;
        balance = balance + amt;
    }
    void Withdrawal()
    {
        long amt;
        cout << "Enter Amount U want to withdraw? ";
        cin >> amt;
        if (amt <= balance)
            balance = balance - amt;
        else
            cout << "Less Balance..." << endl;
    }
    int Search(int);
};

int Bank::Search(int a)
{
    if (acno == a)
    {
        ShowAccount();
        return (1);
    }
    return (0);
}

int main()
{
    Bank C[5];

    cout<<"\n ----------------- DETAILS-------------"<<endl;

    int found = 0, a, ch, i;
    for (i = 0; i <= 4; i++)
    {
        C[i].OpenAccount();
    }

    do
    {

        cout << "\n\n1:Display All\n2:By Account No\n3:Deposit\n4:Withdraw\n5:Exit" << endl;

        cout << "Please input your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            for (i = 0; i <= 4; i++)
            {
                C[i].ShowAccount();
            }
            break;
        case 2:
            cout << "Account Number? ";
            cin >> a;
            for (i = 0; i <= 4; i++)
            {
                found = C[i].Search(a);
                if (found)
                    break;
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
        case 3:
            cout << "Account Number To Deposit Amount? ";
            cin >> a;
            for (i = 0; i <= 4; i++)
            {
                found = C[i].Search(a);
                if (found)
                {
                    C[i].Deposit();
                    break;
                }
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
        case 4:
            cout << "Account Number To Withdraw Amount? ";
            cin >> a;
            for (i = 0; i <= 4; i++)
            {
                found = C[i].Search(a);
                if (found)
                {
                    C[i].Withdrawal();
                    break;
                }
            }
            if (!found)
                cout << "Record Not Found" << endl;
            break;
        case 5:
            cout << " ---HAVE A NICE DAY---" << endl;
            break;
        default:
            cout << "!!! INVALID CHOICE !!!" << endl;
        }
    } while (ch != 5);
    return 0;
}