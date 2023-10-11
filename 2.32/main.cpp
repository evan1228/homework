#include <iostream>

int main() {
   
    std::cout << "Enter your weight in kilograms: ";
    double weightInKilograms;
    std::cin >> weightInKilograms;

    std::cout << "Enter your height in meters: ";
    double heightInMeters;
    std::cin >> heightInMeters;

    double bmi = (weightInKilograms) / (heightInMeters * heightInMeters);

    std::cout << "Your BMI is: " << bmi << std::endl;

    std::cout << "\nBMI VALUES:" << std::endl;
    std::cout << "Underweight: less than 18.5" << std::endl;
    std::cout << "Normal:      between 18.5 to 24.9" << std::endl;
    std::cout << "Overweight : between 25 to 29.9" << std::endl;
    std::cout << "Obese:       30 or greater" << std::endl;

    return 0;
}
