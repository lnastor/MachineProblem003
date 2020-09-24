// Machine Problem 003

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include "_pause.h"
#include "Payslip.h"

using namespace std;

int main() {
    Payslip a;
    a.Input();
    a.PayGradeAndTaxRate();
    a.Output();

    cout << endl;
    cout << "\n\n";
    system ("pause");
    return EXIT_SUCCESS;

}