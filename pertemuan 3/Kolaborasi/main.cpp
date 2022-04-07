#include <iostream>
#include <fstream>
#include "library/input.h"
#include "library/proses.h"
#include "library/output.h"

int main(){
    input input;
    input.cetak();
    input.toFile();

    proses pro;
    pro.cetak();

	output out;
	out.cetak();
	return 0;
}