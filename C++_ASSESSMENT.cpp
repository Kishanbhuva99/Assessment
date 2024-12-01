
#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

class EVENT
{
    //this is called data members of class, currently they are private so we cannot use them out of class directly
private:
    string eventName;
    string fName;
    string lName;
    int NumberOfguests;
    int NumberOfminutes;

    double totalServant=0;
    double CostForOneServant;
    double TotalFoodCost;
    double AverageCost;
    double TotalCost;
    double depositAmount;
    const double CostPerHour = 18.50; 
    const double CostPerMinute = 0.40; 
    const double CostOfDinner = 20.70; 

public:
//this is constructor of class run automatically when obejet made.
    EVENT()
    {
        //this is input section , this constructor takes input when object of class initialize/made.
        cout <<"*************************************Event Management System******************************\n";
        std::cout << "Enter the Name of the Event" << endl;
        std::cin >> eventName;
        cout << "Enter the customer's first and last name"<<endl;
        cin >> fName >> lName;
        cout << "Enter the number of the guests"<< endl;
        cin >> NumberOfguests;
        cout << "Enter the number of minutes in the event"<< endl;
        cin >> NumberOfminutes;
    }
//this is member functions of class, they are public so we can use them out of class , and also we can use them to access data members.
    void setestimate()
    {
            //this is setter method that sets estimation of event
            //total number of servant needed for event
            totalServant = NumberOfguests / 20;
            totalServant = ceil(totalServant); // here we are geting nearest up value using ceil() function

            //cost for one servant depending on minutes and hours
            int Cost1 = (NumberOfminutes / 60) * CostPerHour; 
            int Cost2 = (NumberOfminutes % 60) * CostPerMinute; 
            CostForOneServant = Cost1 + Cost2;

            //cost of food per guest
            TotalFoodCost = NumberOfguests * CostOfDinner;

            //average cost per guest
            AverageCost = TotalFoodCost / NumberOfguests;

            //total cost of the event
            TotalCost=TotalFoodCost + (CostForOneServant * totalServant);
            //DEPOSIT AMOUNT 25%
            depositAmount = TotalCost * 0.25;

    }

    void getEstimate()
    {
        //this is getter method for output.
        cout << "========================== "<< eventName << " Event estimate for : " << fName <<" " << lName << " ===============================\n";
        cout << "Numbers of Servants : "<< totalServant << endl; 
        cout<< fixed<<setprecision(2); // this is used to show how many decimal numbers you want to show.
        cout << "The Cost for Servant : "<< CostForOneServant << endl; 
        cout << "The Cost for Food is : "<< TotalFoodCost << endl; 
        cout << "Average Cost Per Guest : "<< AverageCost << endl; 

        cout << "\nTotal Cost is : "<< TotalCost << endl;
        cout << "Please Deposit a 25% to reserve the event"<<endl;
        cout << "The Deposit needed is : " << depositAmount<<endl;
        // char depo;
        // cout << "\t--Do you want to reserve ? (Y:yes N:no) :";
        // cin >> depo;
        // char a=1;
        // //this if condition check for reservetion.
        // if (depo=='y'||depo=='Y')
        // {
        //     cout << "\nWe got the deposit Amount \n  Your Reservation is Completed "<<a;
        // }
        // else if (depo=='N'||depo=='n')
        // {
        //     cout << "\nReservation cancelled. \n Visit again";
        // }
        // else
        // {
        //     cout << "\nInvalid input TRY Again";
        // }        
        //cout << "Total Guests : "<< NumberOfguests << endl;
        //cout << "Time of Event " << NumberOfminutes << endl;
    }

};
	

int main() 
{
    char newEvent;

    do
    {
        
        //this is an object of a class Event
        EVENT e;

        //here we are calling getter and setter method of class Event 
        e.setestimate();
        e.getEstimate();
        //this if condition check client want new Estimate or not
        cout << "\t--Do you Want Estimate for new Event (Y:yes N:no) : ";
        cin >> newEvent;
        if(newEvent=='n'||newEvent=='N')
        {
            cout << " Visit Again";
        }
	
    } while (newEvent=='y'||newEvent=='Y');
	return 0;
}