#include <iostream>
#include <iomanip>
using namespace std;
#include "Weather.h"



int main()
{
  Weather year[12]; 

	Temperature tempArray[NUM_OF_MONTHS]; //NUM_OF_MONTHS = 12 months
	Rainfall rainArray[NUM_OF_MONTHS];

  
  cout << fixed << showpoint << setprecision(2);

// Read and store Temperature and Rainfall for 12 months 
  for (int i = 0; i < NUM_OF_MONTHS; i++)
  {
    cout << "MONTH: " << (i+1) <<endl;
    year[i].temp = readTemperature();
    year[i].rain = readRainfall();
    cin.ignore(256,'\n');
  }
  cout << endl;

  cout << setw(35) << "TEMPERATURE" << endl;
  cout << setw(15) << "Month" << setw(15) << "Max.Temp" << setw(15) << "Min.Temp" << setw(15) << "Avg.Temp" << endl;
  cout << "---------------------------------------------------------------" << endl;

// Print Max Min Avg Temperature for 12 month
  for (int i = 0; i < NUM_OF_MONTHS; i++)
  {
    cout << setw(15) << (i+1);
    printTemperature(year[i].temp);
  }
  cout << "---------------------------------------------------------------" << endl;

  double yearlyAverageMinTemperature = averageMinT(year);
  double yearlyAverageMaxTemperature = averageMaxT(year); 
  double yearlyAverageAvgTemperature = averageAvgT(year);  

//Print Mean of Max Min Avg Temperature
   cout << setw(15) << "Mean: " << setw(15) << yearlyAverageMinTemperature << setw(15) << yearlyAverageMaxTemperature << setw(15) << yearlyAverageAvgTemperature << endl;

cout << endl;


// Print Max Min Avg Rainfall for 12 month
cout << setw(35) << "Rainfall" << endl;
cout << setw(15) << "Month" << setw(15) << "Max.Rain" << setw(15) << "Min.Rain" << setw(15) << "Avg.Rain" << endl;
  cout << "---------------------------------------------------------------" << endl;

    for (int i = 0; i < NUM_OF_MONTHS; i++)

  {
    cout << setw(15) << (i+1);
    printRainfall(year[i].rain);
  }

int yearlyAverageMinRainfall = averageMinR(year);
int yearlyAverageMaxRainfall = averageMaxR(year); 
int yearlyAverageAvgRainfall = averageAvgR(year);

cout << "---------------------------------------------------------------" << endl;

// Print Mean of Max Min Avg Rainfall
cout << setw(15) << "Mean: " << setw(15) << yearlyAverageMaxRainfall << setw(15) << yearlyAverageMinRainfall << setw(15) << yearlyAverageAvgRainfall << endl;
 
}
