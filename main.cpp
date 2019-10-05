// Name: Tommy Le
// This program calculates and displays business expenses.

#include <iostream>
#include <iomanip>
#include <sstream>

int main()
{
  std::stringstream sshotel,ssmeal,sstotal;
  std::string business_location;
  int trip_days; //amount of days we use be on your trip
  double hotel_expenses, meal_expenses, total_all;


  std::cout << "Welcome to the Business Trip Tracker! \n";
  std::cout << "\nWhat is the business trip location? "; //location of trip
  getline(std::cin,business_location);

  std::cout << "How many days will the trip take? "; //input # of days on trip
  std::cin >> trip_days;

  std::cout << "What is the total hotel expense? $"; //cost of hotel
  std::cin >> hotel_expenses;
  sshotel << std::setprecision(2) << std::fixed << '$' << hotel_expenses << std::setprecision(2) << std::fixed;

  std::cout << "What is the total meal expense? $"; //total meal cost
  std::cin >> meal_expenses;
  ssmeal << std::setprecision(2) << std::fixed << '$' << meal_expenses << std::setprecision(2) << std::fixed;

  total_all =  hotel_expenses + meal_expenses; //calculate the total cost of hotel and meal
  sstotal << std::setprecision(2) << std::fixed << '$' << total_all << std::setprecision(2) << std::fixed;

  std::cout << "\n" << std::setw(20) << std::left <<"Location" << std::setw(7) << std::right << "Days" << std::setw(8) << "Hotel" << std::setw(10) << "Meal" << std::setw(9) << "Total" << "\n";
  std::cout << std::setw(20) << std::left << business_location.substr(0,20) << std::setw(7) << std::right << trip_days << std::setw(8) << sshotel.str() << std::setw(10) << ssmeal.str() << std::setw(9) << sstotal.str() << '\n';


  return 0;
}
