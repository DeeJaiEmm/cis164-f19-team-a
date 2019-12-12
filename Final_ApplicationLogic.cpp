#include <iostream>
#include <string>

using namespace std;

/*
NOT FINISHED: Would have a class, Dashboard.
Each Dashboard would have subclass, Window; and a function to create new Dashboards.
Each Window would possess four, and each can be set to display a Location, and corresponding subclass (Current, UVIndex, or Forecast).
A vector could be used to contain multiple Dashboards.
*/

class Current {
private:
	long temperatureF;
	long temperatureC = (temperatureF - 32) * 1.8;
	long humidity;
	long pressure;
public:
	Current(long temperatureF, long humidity, long pressure);
	void setTemp(long temperatureF) { this->temperatureF = temperatureF; }
	void setHumidity(long humidity) { this->humidity = humidity; }
	void setPressure(long pressure) { this->pressure = pressure; }
	long getTempF() { return temperatureF; }
	long getTempC() { return temperatureC; }
	long getHumidity() { return humidity; }
	long getpressure() { return pressure; }
	void printCurrent()
	{
		cout << "Temperature " << temperatureF << "F / " << temperatureC << "C" << endl;
		cout << "Humidity " << humidity << "%" << endl;
		cout << "Pressure " << pressure;
	}
};

class UVIndex {
private:
	long UV;
public:
	UVIndex(long UV);
	void setUV(long UV) { this->UV = UV; }
	long getUV() { return UV; }
	void printUVIndex() { cout << "UV Index " << UV; }
};

class Forecast {
	/*
	NOT FINISED. Would have dual arrays of five longs, forecasted temperature for the next five days.
	Each would have a get and set function similar to that seen in Current.
	Another array of five, this for names of days of the week.
	Would need a function to determine the day of the week for each of the next five days
	(take a private array with seven day names assigned to days of the week; add the number of days since the current, return the day name).
	Then, have a public printForecast()
	{For (int i = 0; i < 5; i++) {cout << dayName[i] << tempF[i] << "F / " << tempC[i] << "C" << endl}}
	*/
public:
	Forecast(); //Temporary constructor
	void printForecast() { cout << "Testing Forecast" << endl; } //Temporary placeholder values.
};

class Location {
private:
	string LocationName;
	string Coordinates;
	Current currentData;
	UVIndex UltraViolet;
	Forecast fiveDay;
public:
	Location(string LocationName); //final would also include setting coordinates
	void setName(string LocationName) { this->LocationName = LocationName; }
	string getName() { return LocationName; }
	void setCoordinates(string Coordinates) { this->Coordinates = Coordinates; }
	string getCoordinates() { return Coordinates; }
	void displayCurrent() { currentData.printCurrent(); }
	void displayUVIndex() { UltraViolet.printUVIndex(); }
	void displayforecast() { fiveDay.printForecast(); }
};

/*
NOT FINISHED: Each Location would have send its coordinates to an online resource, 
which would return the relevant data, to create it's three views.
*/



int main()
{
	//Running out of time; isn't functioning at all, very incomplete.
	
}
