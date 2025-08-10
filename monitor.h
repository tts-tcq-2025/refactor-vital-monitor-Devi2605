// #pragma once

// int vitalsOk(float temperature, float pulseRate, float spo2);

#pragma once

// Logic-only: returns status code
// 0 = temperature issue
// 1 = pulse rate issue
// 2 = spo2 issue
// -1 = all OK
int checkVitals(float temperature, float pulseRate, float spo2);

// I/O wrapper (for real usage)
int vitalsOk(float temperature, float pulseRate, float spo2);


