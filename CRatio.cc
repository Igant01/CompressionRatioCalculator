/*
/   CRatio Calculator.cc
/   Ian Gant
/   9/18/19
/   Program calculates compression ratio and TDC volume
/
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;


int main(int argc, char const *argv[]){


    double compression_ratio, tdc_volume, stroke_volume;
    double gasket_volume, clearance_volume;

    double bore, stroke, gasket_thickness, gasket_diameter;
    double combustion_chamber, piston_dome, deck_clearance;

    cout << endl << "==================================================\n" << endl;

    cout << setw(45) << "Enter bore diameter (in) : ";
    cin >> bore;

    cout << setw(45) << "Enter stroke (in) : ";
    cin >> stroke;

    cout << setw(45) << "Enter head gasket thickness (in) : ";
    cin >> gasket_thickness;

    cout << setw(45) << "Enter gasket diameter (in) : ";
    cin >> gasket_diameter;

    cout << setw(45) << "Enter volume of combustion chamber (cc) : ";
    cin >> combustion_chamber;

    cout << setw(45) << "Enter piston dome volume (cc) : ";
    cin >> piston_dome;

    cout << setw(45) << "Enter piston to deck clearance (in) : ";
    cin >> deck_clearance;



    gasket_volume = ((3.14159265 / 4) * pow(gasket_diameter, 2) * gasket_thickness);
    clearance_volume = ((3.14159265 / 4) * pow(bore, 2) * deck_clearance);
    stroke_volume = ((3.14149265 / 4) * (pow(bore,2)) * stroke);


    tdc_volume = clearance_volume + gasket_volume + ((combustion_chamber - piston_dome) * .06102);


    compression_ratio = ((stroke_volume + tdc_volume) / tdc_volume);

    cout << endl << "==================================================\n" << endl;
    cout << setw(30) << "Compression ratio = " << setprecision(4) << compression_ratio << ":1" << endl;
    cout << setw(30) << "Volume of piston stroke = " << stroke_volume << " cubic inches" << endl;
    cout << setw(30) << "Volume at top dead center = " << tdc_volume << " cubic inches\n" << endl;
    cout << endl << "==================================================\n" << endl;


return(0);

}