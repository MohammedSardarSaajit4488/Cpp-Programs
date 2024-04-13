#include <iostream>
using namespace std;
class TemperatureConverter {
private:
    double *celsius;

public:
    TemperatureConverter(double tempCelsius) {
        celsius = new double;
        *celsius = tempCelsius;
    }

    ~TemperatureConverter() {
        delete celsius;
    }

    double convertToFahrenheit() {
        return (*celsius * 9 / 5) + 32;
    }
};

int main() {
    double celsiusInput;
    cout << "Enter temperature in Celsius: ";
    cin >> celsiusInput;

    TemperatureConverter converter(celsiusInput);
    double fahrenheit = converter.convertToFahrenheit();

    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    return 0;
}
