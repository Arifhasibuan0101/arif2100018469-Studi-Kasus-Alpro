#include<iostream>
#include<fstream>
#include "../library/input.h"
#include "../library/proses.h"
#include "../library/output.h"
using namespace std;

int main()
{
    Input input;
    input.menu();

    Proses proses;
    proses.getData();
    proses.hasil();

    Output output;
    output.getData();
    output.hasil();

    return 0;
}