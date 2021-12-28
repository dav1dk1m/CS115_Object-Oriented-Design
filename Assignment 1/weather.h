#include <iostream>
using namespace std;

const unsigned int NUM_OF_MONTHS = 12;

struct Temperature
{
	double maxTemperature;
	double minTemperature;
	double avgTemperature;
};

struct Rainfall
{
	int maxRainfall;
	int minRainfall;
	int avgRainfall;
};

struct Weather
{
  Temperature temp;
  Rainfall rain;
};

void printTemperature(const Temperature& t);
void printRainfall(const Rainfall& r);



Temperature readTemperature();
Rainfall readRainfall();

double averageMinT(const Weather w[]);
double averageMaxT(const Weather w[]);
double averageAvgT(const Weather w[]);

int averageMinR(const Weather w[]);
int averageMaxR(const Weather w[]);
int averageAvgR(const Weather w[]);
