#include "Weather2.h"

#include <iostream>
#include <iomanip>


int main()
{

  vector <Weather> year; // Weather year[12];

  double tempMaxT, tempMinT, tempAvgT;
  int tempMaxR, tempMinR, tempAvgR;

  Temperature temperature;
  Rainfall rainfall;

// Print default Temperature
  cout << "TESTING Max Min Avg Temperature:" << temperature.getMaxT() << ", " << temperature.getMinT() << ", " << temperature.getAvgT() << endl;

// Input of Temperature and Rainfall for 12 months
  for (int i = 0; i < 12; i++)
  {
    cout << "MONTH: " << (i+1) << endl;
    cout << "Maximum Temperature?: ";
    cin >> tempMaxT;
    cout << "Minimum Temperature?: ";
    cin >> tempMinT;
    // I tried to use 2 types of  function to catch exception and while function is used here to check  if Min <= Avg <= Max
    while (tempMinT >= tempMaxT)  
    {
      cout <<"Input Temperature Lower than maxTemperature: ";
      cin >> tempMinT;
    }
    cout << "Average Temperature?: ";
    cin >> tempAvgT;
    while (tempAvgT >= tempMaxT || tempAvgT <= tempMinT)
    {
      cout <<"Input Temperature Lower than maxTemperature or Higher than minTemperature:  ";
      cin >> tempAvgT;
    }
    cout << "Maximum Rainfall?: ";
    cin >> tempMaxR;
    cout << "Minimum Rainfall?: ";
    cin >> tempMinR;
    while (tempMinR >= tempMaxR)
    {
      cout <<"Input Rainfall Lower than maxRainfall: ";
      cin >> tempMinR;
    }
    cout << "Average Rainfall?: ";
    cin >> tempAvgR;
    while (tempAvgR >= tempMaxR || tempAvgR <= tempMinR)
    {
      cout <<"Input Rainfall Lower than maxRainfall or Higher than minRainfall:  ";
      cin >> tempAvgR;
    }
    
    temperature.setMaxT(tempMaxT);
    temperature.setMinT(tempMinT);
    temperature.setAvgT(tempAvgT);
    
    rainfall.setMaxR(tempMaxR);
    rainfall.setMinR(tempMinR);
    rainfall.setAvgR(tempAvgR);
   
    Weather w(rainfall, temperature);

    year.push_back(w);
  }

  cout << endl;

  cout << setw(35) << "TEMPERATURE" << endl;
  cout << setw(15) << "Month" << setw(15) << "Max.Temp" << setw(15) << "Min.Temp" << setw(15) << "Avg.Temp" << endl;
  cout << "---------------------------------------------------------------" << endl;
  
 // Print Temperature for 12 months
  for (int i = 0; i < year.size(); i++)
  {
    cout << setw(15) << (i+1);
    year[i].printTemp();
  }

  double yearlyAverageMinTemperature = averageMinT(year);
  double yearlyAverageMaxTemperature = averageMaxT(year); 
  double yearlyAverageAvgTemperature = averageAvgT(year);  

  cout << "---------------------------------------------------------------" << endl;

  cout << setw(15) << "Mean: " << setw(15) << yearlyAverageMinTemperature << setw(15) << yearlyAverageMaxTemperature << setw(15) << yearlyAverageAvgTemperature << endl;

  cout << endl;


  cout << setw(35) << "Rainfall" << endl;
  cout << setw(15) << "Month" << setw(15) << "Max.Rain" << setw(15) << "Min.Rain" << setw(15) << "Avg.Rain" << endl;
  cout << "---------------------------------------------------------------" << endl;

// Print Rainfall for 12 months
  for (int i = 0; i < year.size(); i++)
  {
    cout << setw(15) << (i+1);
    year[i].printRain();
  }

int yearlyAverageMinRainfall = averageMinR(year);
int yearlyAverageMaxRainfall = averageMaxR(year); 
int yearlyAverageAvgRainfall = averageAvgR(year);

cout << "---------------------------------------------------------------" << endl;

cout << setw(15) << "Mean: " << setw(15) << yearlyAverageMaxRainfall << setw(15) << yearlyAverageMinRainfall << setw(15) << yearlyAverageAvgRainfall << endl;

}
