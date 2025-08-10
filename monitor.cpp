
// #include "./monitor.h"
// #include <assert.h>
// #include <thread>
// #include <chrono>
// #include <iostream>
// #include "./duplicate_function.h"

//using std::cout, std::flush, std::this_thread::sleep_for, std::chrono::seconds;

// void duplicate(){
//  for (int i = 0; i < 6; i++) {
//       cout << "\r* " << flush;
//       sleep_for(seconds(1));
//       cout << "\r *" << flush;
//       sleep_for(seconds(1));
//     }

// }
// int vitalsOk(float temperature, float pulseRate, float spo2) {
//   if (temperature > 102 || temperature < 95) {
//  cout<<" Temperature is critical!\n";
//  duplicate();
//  return 0;
// }
//  else if (pulseRate < 60 || pulseRate > 100) {
//          cout << "Pulse Rate is out of range!\n";
//         duplicate();
//         return 0;
 
//  } else if (spo2 < 90) {
//         cout << "Oxygen Saturation out of range!\n";
//         duplicate();
//         return 0;
//     }
//     return 1;
// }


#include "monitor.h"
#include "duplicate_function.h"
#include <iostream>
 #include <assert.h>
#include <thread>
#include <chrono>
#include <iostream>
#include "./duplicate_function.h"

using std::cout;

int checkVitals(float temperature, float pulseRate, float spo2) {
    if (temperature > 102 || temperature < 95) {
        return 0; // Temperature issue
    } else if (pulseRate < 60 || pulseRate > 100) {
        return 1; // Pulse issue
    } else if (spo2 < 90) {
        return 2; // SPO2 issue
    }
    return -1; // All OK
}

int vitalsOk(float temperature, float pulseRate, float spo2) {
    int status = checkVitals(temperature, pulseRate, spo2);

    switch (status) {
        case 0:
            cout << "Temperature is critical!\n";
            duplicate();
            return 0;
        case 1:
            cout << "Pulse Rate is out of range!\n";
            duplicate();
            return 0;
        case 2:
            cout << "Oxygen Saturation out of range!\n";
            duplicate();
            return 0;
        default:
            return 1;
    }
}

