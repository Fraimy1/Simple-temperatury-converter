 #include <iostream>





int main(){

double temperature {};
char temperature_system1 {};
char temperature_system2 {};



//==================================================

std::cout << "Write temperature :" << std::endl;
std::cin >> temperature;

std::cout << "Write temperature system for FIRST objective |Fahrenheit = F|Celsius = C|Kelvin = K| -> ";

std::cin >> temperature_system1;
std::cout << std::endl;
std::cout << "Write temperature system for SECOND objective |Fahrenheit = F|Celsius = C|Kelvin = K| -> ";
std::cin >> temperature_system2;


// Formules : 

//KtoC
double formule1 { temperature - 273.16};

//CtoK
double formule2{ temperature + 273.16};

//FtoC
double formule3 { (temperature - 32)*0.5556};

//CtoF
double formule4{ temperature*1.8 + 32};

//FtoK
double formule5 {formule3 + 273.6};

//KtoF
double formule6 {formule1*1.8 + 32};

//=================================================

std::cout << "====================================================" << std::endl;
std::cout << std::endl;

// From K
if ((temperature_system1 == 'K' || temperature_system1 == 'k') && (temperature_system2 == 'C' || temperature_system2 == 'c' || temperature_system2 == 'F' || temperature_system2 == 'f'))
{
     temperature_system1 = 'K';

    if (temperature_system1 == 'K' && (temperature_system2 == 'C' || temperature_system2 == 'c')){ //KtoC
            std::cout << temperature << "*K in *C = " << formule1 << std::endl;
    
    } else if (temperature_system1 == 'K' && (temperature_system2 == 'F' || temperature_system2 == 'f')) { //KtoF
            std::cout << temperature << "*K in *F = " << formule6 << std::endl; 
    }
    
}
//From C
if ((temperature_system1 == 'C' || temperature_system1 == 'c') && (temperature_system2 == 'F' || temperature_system2 == 'f' || temperature_system2 == 'K' || temperature_system2 == 'k') )
{
    temperature_system1 = 'C';

    if ( temperature_system1 == 'C' && (temperature_system2 == 'K' || temperature_system2 == 'k') ){ //CtoK
            std::cout << temperature << "*C in *K = " << formule2 << std::endl;
    
    } else if (temperature_system1 == 'C' && (temperature_system2 == 'F' || temperature_system2 == 'f') ){  //CtoF
            std::cout << temperature << "*C in *F = " << formule4 << std::endl; 
    }
}
// From F
if ((temperature_system1 == 'F' || temperature_system1 == 'f') && (temperature_system2 == 'C' || temperature_system2 == 'c' || temperature_system2 == 'K' || temperature_system2 == 'k') )
{
    temperature_system1 = 'F';

    if (temperature_system1 == 'F' && (temperature_system2 == 'C' || temperature_system2 == 'c')){   //FtoC
            std::cout << temperature << "*F in *C = " << formule3 << std::endl;
    
    }   else if (temperature_system1 == 'F' && (temperature_system2 == 'K' || temperature_system2 == 'k')){   //FtoK
            std::cout << temperature << "*F in *K = " << formule4 << std::endl; 
    }
}

std::cout << std::endl;
std::cout << "====================================================" << std::endl;
std::cout << std::endl;

return 0;
}
