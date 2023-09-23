#include<iostream>
using namespace std;
int main(){

        int num1,num2,result,choice;

        while(1){
            cout<<"\t\t\t\t*****************************"<<endl;
            cout<<"\t\t\t\t   ** 1. Addition       **  "<<endl;
            cout<<"\t\t\t\t   ** 2. Subtraction    **  "<<endl;
            cout<<"\t\t\t\t   ** 3. Multipilcation **  "<<endl;
            cout<<"\t\t\t\t   ** 4. Division       **  "<<endl;
            cout<<"\t\t\t\t   ** 5. Exit           **  "<<endl;
            cout<<"\t\t\t\t*****************************"<<endl;

            cout<<"Enter First Number  : ";
            cin>>num1;
            cout<<"Enter Second Number : ";
            cin>>num2;
           
            cout<<"Enter Your Choice : ";
            cin>>choice;

          

            switch (choice)
            {
            case 1:
                result = num1 + num2;
                cout<<"Addition of Two Number      : "<<result<<endl;
                break;
            
            case 2:
                result = num1 - num2;
                cout<<"Subtraction of Two Number   : "<<result<<endl;
                break;

            case 3:
                result = num1 * num2;
                cout<<"Multipilcation of Two Number : "<<result<<endl;
                break;

            case 4:
                result = num1 / num2;
                cout<<"Division of Two Number       : "<<result<<endl;
                break;    

            case 5: 
                    exit(0);
                    break;                   
            default:
                cout<<"Invalid Choice !!! "<<endl;
                break;
            }
        }
   
    return 0;

}