#ifndef WEATHER2_H
#define WEATHER2_H

#include <iostream>
#include <iomanip>
#include <cassert>
#include <vector>
using namespace std;


class Temperature
{
  private:
  double maxTemperature;
  double minTemperature;
  double avgTemperature;

  public:
  Temperature();
  Temperature(double t1, double t2, double t3); /* Constructor */
  Temperature(const Temperature& t); /* Copy Constructor */
  ~Temperature(); /* Destructor */

// Getters
  double getMaxT() const;
  double getMinT() const;
  double getAvgT() const;
// Setters
  void setMaxT(double t1);
  void setMinT(double t2);
  void setAvgT(double t3);
  
  void printTemp() const;  /* Print the maxTemperature, minTemperature, and avgTemperature values of the object */

  double averageMinT();
  double averageMaxT();
  double averageAvgT();
  
};


class Rainfall
{
  private:
  int maxRainfall;
  int minRainfall;
  int avgRainfall;

  public:
  Rainfall();
  Rainfall(int r1, int r2, int r3); /* Constructor */
  Rainfall(const Rainfall& r); /* Copy Constructor */
  ~Rainfall(); /* Destructor */
  
  int getMaxR() const;
  int getMinR() const;
  int getAvgR() const;

  void setMaxR(int r1);
  void setMinR(int r2);
  void setAvgR(int r3);
  
  void printRain() const; /* Print the maxRainfall, minRainfall, and avgRainfall values of the object */
  
  int averageMinR();
  int averageMaxR();
  int averageAvgR();

};


class Weather
{
  private:
  Rainfall rain;
  Temperature temp;

  public:
  Weather(Rainfall&, Temperature&); /* Constructor */
  Weather(const Weather&); /* Copy Constructor */
  ~Weather(); /* Destructor */
  Rainfall& setRain();
  Temperature& setTemp();

  // Getters
  double getMaxT() const;
  double getMinT() const;
  double getAvgT() const;
  // Setters
  int getMaxR() const;
  int getMinR() const;
  int getAvgR() const;

  void printTemp() const;
  void printRain() const;

};


  double averageMinT(const vector <Weather> & year);
  double averageMaxT(const vector <Weather> & year);
  double averageAvgT(const vector <Weather> & year);

  int averageMinR(const vector <Weather> & year);
  int averageMaxR(const vector <Weather> & year);
  int averageAvgR(const vector <Weather> & year);



#endif
