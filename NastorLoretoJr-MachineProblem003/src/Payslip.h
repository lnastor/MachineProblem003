// Machine Problem 003

#include <string>
#include <sstream>
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

class Payslip {
    string fname, lname;
    char ini, salaryGrade;
    double basicSalary, taxrate;
    int OTHour;
    double SSS = 500.00, pagibig = 200.00, philhealth = 100.00;
    double fixv = SSS + pagibig + philhealth;

    double OTPay = OTHour*(.010 * basicSalary);
    double grossPay = basicSalary + OTPay;
    double withholdingTax = grossPay * taxrate;
    double netPay = grossPay - withholdingTax - fixv;

    public:
        void Input(){
            cout << "Enter Employee's First Name: ";
            cin >> fname;
            cout << "Enter Employee's Surname: ";
            cin >> lname;
            cout << "Enter Employee's Middle Initial: ";
            cin >> ini;
            cout << "Enter Basic Salary: ";
            cin >> basicSalary;
            cout << "Enter OT Hours: ";
            cin >> OTHour;
        }

        void PayGradeAndTaxRate() {
            if (basicSalary<10000) {
                cout << "Basic Salary is below the minimum.";
            } else if ((basicSalary>=10000 || basicSalary <15000)){
                salaryGrade = 'A';
                taxrate = 0.10;
            } else if ((basicSalary>=15000 || basicSalary <20000)){
                salaryGrade = 'B';
                taxrate = 0.10;
            } else if ((basicSalary>=20000 || basicSalary <25000)){
                salaryGrade = 'A';
                taxrate = 0.15;
            } else if ((basicSalary>=25000 || basicSalary <30000)){
                salaryGrade = 'B';
                taxrate = 0.15;
            } else if ((basicSalary>=30000 || basicSalary <35000)){
                salaryGrade = 'A';
                taxrate = 0.20;
            } else if ((basicSalary>=35000 || basicSalary <40000)){
                salaryGrade = 'B';
                taxrate = 0.20;
            } else if ((basicSalary>=40000 || basicSalary <45000)){
                salaryGrade = 'A';
                taxrate = 0.25;
            } else if ((basicSalary>=45000 || basicSalary <50000)){
                salaryGrade = 'B';
                taxrate = 0.25;
            } else if ((basicSalary>=50000 || basicSalary <55000)){
                salaryGrade = 'A';
                taxrate = 0.30;
            } else if ((basicSalary>55000)){
                salaryGrade = 'B';
                taxrate = 0.30;
        }

        OTPay = basicSalary * (OTHour * 0.01);
        grossPay = basicSalary + OTPay;
        withholdingTax = grossPay * taxrate;
        netPay = grossPay - withholdingTax - fixv;

        }

        int Output() {
            cout << "\n\n";
            cout << "Employee Name                    : " << lname << " " << fname << " " << ini << "." <<endl;
            cout << "Basic Salary                     : PHP" << basicSalary << endl;
            cout << "Pay Grade                        : " << salaryGrade << endl;
            cout << "No. of OT Hours                  : " << OTHour << " hrs" <<endl;
            cout << "OT Pay                           : PHP" << OTPay << endl;
            cout << "Gross Pay                        : PHP" << grossPay << endl;
            cout << "Withholding Tax                  : PHP" << withholdingTax << endl;
            cout << "Net Pay                          : PHP" << netPay << endl;
        }
};