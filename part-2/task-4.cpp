#include <iostream>
#include <string>

int main()
{
    std::string fullName, dateOfBirth, hometown, major, email;
    int age;

    std::cout << "Enter full name: ";
    getline(std::cin, fullName);

    std::cout << "Enter date of birth (DD/MM/YYYY): ";
    getline(std::cin, dateOfBirth);

    std::cout << "Enter age: ";
    std::cin >> age;
    std::cin.ignore();

    std::cout << "Enter your hometown: ";
    getline(std::cin, hometown);

    std::cout << "Enter your major: ";
    getline(std::cin, major);

    std::cout << "Enter email address: ";
    getline(std::cin, email);

    std::cout << "\nStudent Information:\n";
    std::cout << "-------------------\n";
    std::cout << "Full Name: " << fullName << std::endl;
    std::cout << "Date of Birth: " << dateOfBirth << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Hometown: " << hometown << std::endl;
    std::cout << "Major: " << major << std::endl;
    std::cout << "Email Address: " << email << std::endl;

    return 0;
}
