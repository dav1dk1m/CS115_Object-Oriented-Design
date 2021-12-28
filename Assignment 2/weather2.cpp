#include "Weather2.h"

Temperature::Temperature()  // Default
{
  maxTemperature = 1.00;
  minTemperature = 1.00;
  avgTemperature = 1.00;
}

Temperature::Temperature (double t1 , double t2, double t3)
{
  assert (t1 >=-70 && t1 <= 60); //Catch excpetion: -70 <= Temperature <= 60
	maxTemperature = t1;
	assert (t2 >=-70 && t2 <= 60);
	minTemperature = t2;
	assert (t3 >=-70 && t3 <= 60);
	avgTemperature = t3;
}

Temperature::Temperature (const Temperature& t)
{
  maxTemperature = t.maxTemperature;
  minTemperature = t.minTemperature;
  avgTemperature = t.avgTemperature;
}

Temperature::~Temperature()
{
 
}

// Getters for Temperature
double Temperature::getMaxT() const
{
  return maxTemperature;
}
double Temperature::getMinT() const
{
  return minTemperature;
}
double Temperature::getAvgT() const
{
  return avgTemperature;
}

// Setters for Temperature
void Temperature::setMaxT(double t1)
{
  assert (t1 >=-70 && t1 <= 60); //Catch excpetion: -70 <= Temperature <= 60
	maxTemperature = t1;
}

void Temperature::setMinT(double t2)
{
  assert (t2 >=-70 && t2 <= 60);
	minTemperature = t2;
}

void Temperature::setAvgT(double t3)
{
  assert (t3 >=-70 && t3 <= 60);
	avgTemperature = t3;
}

// printTemp for 12 months in table format
void Temperature::printTemp() const
{
  cout << setw(15) << maxTemperature << setw(15) << minTemperature << setw(15) << avgTemperature << endl;
}
// Calculate Mean of Min.Temperature and return value
double Temperature::averageMinT() 
{
   double totalTemp = 0.0;
   double average = 0.0;

  for (int i = 0; i < 12; i++)
  {
    totalTemp += minTemperature;
  }
  average = totalTemp / 12.0;
  return average;
}
// Calculate Mean of Max.Temperature and return value
double Temperature::averageMaxT()
{
  double totalTemp = 0.0;
  double average = 0.0;

  for (int i = 0; i < 12; i++)
  {
    totalTemp += maxTemperature;
  }
 
  average = totalTemp / 12.0;
  return average;
}
// Calculate Mean of Avg.Temperature and return value
double Temperature::averageAvgT()
{
  double totalTemp = 0.0;
  double average = 0.0;

  for (int i = 0; i < 12; i++)
  {
    totalTemp += avgTemperature;
  }
  average = totalTemp / 12.0;
  return average;
}

/////////////////////////////////////////////////////////////


Rainfall::Rainfall()   //Default
{
  maxRainfall = 0;
  minRainfall = 0;
  avgRainfall = 0;
}

Rainfall::Rainfall (int r1 , int r2, int r3)
{
  assert (r1 >=1 && r1 <= 25); //Catch excpetion: 1<= Rainfall <= 25
	maxRainfall = r1;
	assert (r2 >=1 && r2 <= 2);
	minRainfall = r2;
	assert (r3 >=1 && r3 <= 2);
	avgRainfall = r3;
}

Rainfall::Rainfall (const Rainfall& r)
{
  maxRainfall = r.maxRainfall;
  minRainfall = r.minRainfall;
  avgRainfall = r.avgRainfall;
}

Rainfall::~Rainfall()
{

}

// Getters for Rainfall
int Rainfall::getMaxR() const
{
  return maxRainfall;
}
int Rainfall::getMinR() const
{
  return minRainfall;
}
int Rainfall::getAvgR() const
{
  return avgRainfall;
}

// Setters for Rainfall
void Rainfall::setMaxR(int r1)
{
  assert (r1 >= 1 && r1 <= 25); //Catch excpetion 1<= Rainfall <= 25
	maxRainfall = r1;
}

void Rainfall::setMinR(int r2)
{
  assert (r2 >= 1 && r2 <= 25);
	minRainfall = r2;
}

void Rainfall::setAvgR(int r3)
{
  assert (r3 >= 1 && r3 <= 25);
	avgRainfall = r3;
}

// printRain for 12 months in table format
void Rainfall::printRain() const
{
  cout << setw(15) << maxRainfall << setw(15) << minRainfall << setw(15) << avgRainfall << endl;
}
// Calculate Mean of Max.Rainfall and return value
int Rainfall::averageMaxR()
{
  int totalRain = 0.0;
  double average = 0.0;

  for (int i = 0; i < 12; i++)
  {
    totalRain += maxRainfall;
  }

  average = totalRain / 12.0;
  return average;
}
// Calculate Mean of Min.Rainfall and return value
int Rainfall::averageMinR()
{
  int totalRain = 0.0;
  double average = 0.0;

  for (int i = 0; i < 12; i++)
  {
    totalRain += minRainfall;
  }

  average = totalRain / 12.0;
  return average;
}
// Calculate Mean of Avg.Rainfall and return value
int Rainfall::averageAvgR()
{
  int totalRain = 0.0;
  double average = 0.0;

  for (int i = 0; i < 12; i++)
  {
    totalRain += avgRainfall;
  }

  average = totalRain / 12.0;
  return average;
}

Weather::Weather(Rainfall& r, Temperature& t)
{
  rain.setMaxR(r.getMaxR());
  rain.setMinR(r.getMinR());
  rain.setAvgR(r.getAvgR());
  temp.setMaxT(t.getMaxT());
  temp.setMinT(t.getMinT());
  temp.setAvgT(t.getAvgT());
}

Weather::Weather  (const Weather& w)
{
  temp = w.temp;
  rain = w.rain;
}

Weather::~Weather()
{

}

Rainfall& Weather::setRain()
{
   return rain;
}
Temperature& Weather::setTemp()
{
   return temp;
}

double Weather::getMaxT() const
{
  return temp.getMaxT();
}

double Weather::getMinT() const
{
  return temp.getMinT();
}

double Weather::getAvgT() const
{
  return temp.getAvgT();
}

int Weather::getMaxR() const
{
  return rain.getMaxR();
}

int Weather::getMinR() const
{
  return rain.getMinR();
}

int Weather::getAvgR() const
{
  return rain.getAvgR();
}

void Weather::printTemp() const
{
  temp.printTemp();
}

void Weather::printRain() const
{
  rain.printRain();
}

double averageMinT(const vector <Weather> & year)
{
  double totalTemp = 0.0;
  double average = 0.0;

  for (int i = 0; i < year.size(); i++)
  {
    totalTemp += year[i].getMinT();
  }
  average = totalTemp / 12.0;

  return average;
}

double averageMaxT(const vector <Weather> & year)
{
  double totalTemp = 0.0;
  double average = 0.0;

  for (int i = 0; i < year.size(); i++)
  {
    totalTemp += year[i].getMaxT();
  }
  average = totalTemp / 12.0;

  return average;
}

double averageAvgT(const vector <Weather> & year)
{
  double totalTemp = 0.0;
  double average = 0.0;

  for (int i = 0; i < year.size(); i++)
  {
    totalTemp += year[i].getAvgT();
  }
  average = totalTemp / 12.0;

  return average;
}

int averageMinR(const vector <Weather> & year)
{
  double totalRain = 0.0;
  double average = 0.0;

  for (int i = 0; i < year.size(); i++)
  {
    totalRain += year[i].getMinR();
  }
  average = totalRain / 12.0;

  return average;
}

int averageMaxR(const vector <Weather> & year)
{
  double totalRain = 0.0;
  double average = 0.0;

  for (int i = 0; i < year.size(); i++)
  {
    totalRain += year[i].getMaxR();
  }
  average = totalRain / 12.0;

  return average;
}

int averageAvgR(const vector <Weather> & year)
{
  double totalRain = 0.0;
  double average = 0.0;

  for (int i = 0; i < year.size(); i++)
  {
    totalRain += year[i].getAvgR();
  }
  average = totalRain / 12.0;

  return average;
}
