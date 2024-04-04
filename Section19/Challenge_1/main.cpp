// Section 19
// Challenge 1
// Formatting output
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

void ruler()
{
    std::cout << "\n1234567890123456789012345678901234567890123456789012345678901234567890" << std::endl;
}

struct City
{
    std::string name;
    long population;
    double cost;
};

// Assume each country has at least 1 city
struct Country
{
    std::string name;
    std::vector<City> cities;
};

struct Tours
{
    std::string title;
    std::vector<Country> countries;
};

int main()
{
    Tours tours{"Tour Ticket Prices from Miami",
                {
                    {
                        "Colombia",
                        {{"Bogota", 8778000, 400.98},
                         {"Cali", 2401000, 424.12},
                         {"Medellin", 2464000, 350.98},
                         {"Cartagena", 972000, 345.34}},
                    },
                    {
                        "Brazil",
                        {{"Rio De Janiero", 13500000, 567.45},
                         {"Sao Paulo", 11310000, 975.45},
                         {"Salvador", 18234000, 855.99}},
                    },
                    {
                        "Chile",
                        {{"Valdivia", 260000, 569.12},
                         {"Santiago", 7040000, 520.00}},
                    },
                    {"Argentina", {{"Buenos Aires", 3010000, 723.77}}},
                }};

    // Print ruler
    ruler();
    // Unformatted display so you can see how to access the vector elements
    std::cout << std::setw(49) << tours.title << std::endl;

    std::cout << "\n"
              << std::setw(20) << std::left << "Country"
              << std::setw(20) << std::left << "City"
              << std::setw(20) << std::right << "Population"
              << std::setw(10) << std::right << "Price";

    std::cout << "\n----------------------------------------------------------------------" << std::endl;

    for (auto country : tours.countries)
    { // loop through the countries
        int i = 0;

        for (auto city : country.cities)
        { // loop through the cities for each country
            std::cout << std::setw(20) << std::left << (( i == 0) ? country.name : "")
                      << std::setw(20) << std::left << city.name
                      << std::setw(20) << std::right << city.population
                      << std::setw(10) << std::right << city.cost
                      << std::endl;

            i += 1;
        }
    }

    std::cout << std::endl
              << std::endl;
    return 0;
}