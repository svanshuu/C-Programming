#include <iostream>
#include <unordered_map>
using namespace std;

// Define base salary for each skillset
unordered_map<string, int> skillset_base_salary = {
    {"Software Developer", 70000},
    {"Data Scientist", 90000},
    {"Product Manager", 100000}
};

// Define salary multipliers for experience levels
unordered_map<string, float> experience_multiplier = {
    {"Entry Level", 0.8},
    {"Mid Level", 1},
    {"Senior Level", 1.2}
};

// Define salary multipliers for education levels
unordered_map<string, float> education_multiplier = {
    {"Bachelor's Degree", 1},
    {"Master's Degree", 1.2},
    {"PhD", 1.5}
};

// Define function to calculate salary package
float calculate_salary(string skillset, string experience_level, string education_level) {
    // Calculate base salary for the given skillset
    int base_salary = skillset_base_salary[skillset];

    // Calculate salary multiplier based on experience level
    float experience_multiplier_value = experience_multiplier[experience_level];

    // Calculate salary multiplier based on education level
    float education_multiplier_value = education_multiplier[education_level];

    // Calculate total salary package
    float total_salary = base_salary * experience_multiplier_value * education_multiplier_value;

    return total_salary;
}

// Main function
int main() {
    // Calculate salary for a software developer with mid level experience and a master's degree
    float salary = calculate_salary("Software Developer", "Mid Level", "Master's Degree");
    cout << "Salary: $" << salary << endl;

    return 0;
}
