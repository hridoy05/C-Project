
                            ///Project On Bank Management System///

#include<bits/stdc++.h>
using namespace std;

class bank{
    char name[100],add[100],y,balance;

public:
    void open_account();
    void deposite_money();
    void withdraw_money();
    void display_account();



};

void bank::open_account()
{
    cout<<"Enter your full name:: ";
    cin.ignore();

    cin.getline(name,100);

    cout<<"Enter your address :: ";

    cin.getline(add,100);

    cout<<"What type of account you what to open saving(s) or current(c)"<<endl;
    cin>>y;

    cout<<"enter amount for deposit :: "<<endl;
    cin>>balance;

    cout<<"your account is created\n";
}

void bank:: deposite_money()
{
    int a;
    cout<<"enter how much you want to deposit :: ";
    cin>>a;
    balance+=a;
    cout<<"total amount your deposit :: \t " << balance;
    cout<<"amount you deposit";
}

void bank:: display_account()
{

    cout<<"your full name:: \t"<<name;
    cout<<"your address :: \t " <<add;
    cout<<"type of account that you open :: \t"<< y;
    cout<<"amount you deposit :: \t "<< balance;
}

void bank:: withdraw_money()

{
    float amount;
    cout<<"\n withdraw :: ";
    cout<<"enter amount to withdraw :: ";
    cin>> amount ;
    balance -=amount;
    cout<< " now total amount is left :: "<<balance;
}


int main()

{

    int ch;
    char x;
    bank obj;
    do{
    cout<<"1) open account\n";
    cout<<"2) deposit money\n";

    cout<<"3) withdraw money\n";

    cout<<"4) display account\n";
    cout<<"5) Exit\n";

    cout<<" select the option from above \n";
    cin>> ch;

    switch(ch)
    {
         case 1:
            cout<<" 1)open account\n";
             obj.open_account();
             break;

         case 2:
             cout<<" 2) deposit account\n ";

             obj.deposite_money();
         case 3:
             cout<<" 3) withdraw money: \n";
             obj.withdraw_money();
             break;

         case 4:
            cout<< " 4) display_account: \n";
            obj.display_account();
            break;

         case 5:
             if(ch==5)
             {
                 exit(1);

             }

         default:
            cout<<"This is not exit! try again\n ";


         }

         cout<<"\n do you want to select next option then press:: y\n";

         cout<<"if you want to exit then press :: N"<<endl;
         cin>>x;
         if(x=='n'||x=='N')
            exit(0);
    }while(x=='y'|| x=='Y');


     return 0;


}
