// Name: Tommy Le
// This program calculates and displays business expenses.

#include <iostream>
#include <iomanip>

int main()
{
  std::stringstream sshotel,ssmeal,sstotal;
  std::string business_location;
  int trip_days; //amount of days we use be on your trip
  double hotel_expenses, meal_expenses, total_all;


  std::cout << "Welcome to the Business Trip Tracker! \n";
  std::cout << "\nWhat is the business trip location? "; //location of trip
  std::string str = business_location;
  std::cout << str.substr (0,20);
  std::cin >> business_location;

  std::cout << "How many days will the trip take? "; //input # of days on trip
  std::cin >> trip_days;

  std::cout << "What is the total hotel expense? $"; //cost of hotel
  sshotel << std::setprecision(2) << std::fixed << '$' << hotel_expenses;
  std::cin >> hotel_expenses;

  std::cout << "What is the total meal expense? $"; //total meal cost
  ssmeal << std::setprecision(2) << std::fixed << '$' << meal_expenses;
  std::cin >> meal_expenses;

  total_all =  hotel_expenses + meal_expenses; //calculate the total cost of hotel and meal
  sstotal << std::setprecision(2) << std::fixed << '$' << total_all;

  std::cout << "\n" << "Location" << std::setw(7) << "Days" << std::setw(13) << "Hotel" << std::setw(14) << "Meal" << std::setw(15) << "Total" << "\n";
  std::cout << business_location << std::setw(8) << trip_days << std::setw(8) << '$' << hotel_expenses << std::setw(8) << '$' << meal_expenses << std::setw(9) << '$'<< total_all << '\n';


  return 0;
}
