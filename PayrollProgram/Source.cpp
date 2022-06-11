/////////////////////////////////////////////////////////////
//  AliGhost Payroll program Revision 1A                  //
///////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////
//    Added to Github on 6/10/22                       //
////////////////////////////////////////////////////////



#include <iostream>
#include <math.h>
#include <time.h>
#include <random>
#include <string>

//////////////////////////////////////////////////////////
// Varibles are being declared here                    //
////////////////////////////////////////////////////////
float g_hours = 0.0;
float g_hourlyWage = 0.0;
constexpr int kCout = 3;
std::string g_employee[kCout]{ "employID", "employName", "shift" };
float g_totalPay = 0.0;


/////////////////////////////////////////////////////////
// Functions for the program start on this line       //
///////////////////////////////////////////////////////
void processCheck();
void employInfo();
float payCheckCalculations(float hours, float hourlyWage);
void paystub();
void printResults();

/////////////////////////////////////////////////////////
// The main functions is here with one function inside//
///////////////////////////////////////////////////////

int main()

{
    paystub();
    return 0;

}
/////////////////////////////////////////////////////////
// paystub is where the functions are all called      //
///////////////////////////////////////////////////////

void paystub()

{
    processCheck();
    employInfo();
    payCheckCalculations(g_hours, g_hourlyWage);
    printResults();
}
/////////////////////////////////////////////////////////
// processCheck is the brief introduction to enduser  //
///////////////////////////////////////////////////////

void processCheck()

{
    std::cout << "Please enter your information so you have your check processed\n";
    std::cout << "Please enter your name,Employee ID,shift that you work\n";
    std::cout << "You will now be directed to the informations directory\n";

}

/////////////////////////////////////////////////////////
// EmployInfo is to take down the employee information//
///////////////////////////////////////////////////////
void employInfo()
{
    std::cout << "Please enter the information as followed\n";
    std::cout << "Bagde ID Starting with your first and last initial \n";
    std::cout << "EmployName, and the shift you work \n";
    std::cin >> g_employee[0];
    std::cin >> g_employee[1];
    std::cin >> g_employee[2];
    std::cout << "please enter your hours worked\n";
    std::cin >> g_hours;
    std::cout << "Please enter your hourls pay.\n";
    std::cin >> g_hourlyWage;
    std::cout << "Your information is being process \n";
    std::cout << "Your information is being please wait...... \n";
}
/////////////////////////////////////////////////////////
// PaycheckCalcuations is as stated                   //
///////////////////////////////////////////////////////
float payCheckCalculations(float hours, float hourlyWage)
{

    constexpr  float  kWeeklyHours = 40.00;
    float overtimePay = 0.0;

    if (hours <= kWeeklyHours)
    {
        g_totalPay = hours * hourlyWage;

        return g_totalPay;
    }

    else
    {
        overtimePay = (hours - kWeeklyHours) * (hourlyWage + (0.5f * g_hourlyWage));

        g_totalPay = (hourlyWage * kWeeklyHours) + overtimePay;

        std::cout << "NIce work! You have overtime!\n";

        return g_totalPay;
    }
}
/////////////////////////////////////////////////////////
// Your final resaults are printed here               //
///////////////////////////////////////////////////////
void printResults()
{
    std::cout << "Employee " << g_employee[0] << std::endl;
    std::cout << g_employee[1] << std::endl;
    std::cout << "You still working shift : " << g_employee[2] << std::endl;
    std::cout << "Good job this week\n";
    std::cout << "non negotiable your pay is : " << g_totalPay << std::endl;

}
