#include <iostream>
#include <string>

int main()
{
    std::string name = "Trung Dai";
    int age = 22;
    std::string dateOfBirth = "08/07/2002";
    std::string email = "abcxyz@gg.com";
    std::string education = "Undergraduate";
    std::string location = "HCM City";
    printf("Personal Information\n------------------\n");

    printf("Name: %s\nAge: %d\nDate Of Birth: %s\nEducation: %s\nLocation: %s\n", name.c_str(), age, dateOfBirth.c_str(), email.c_str(), education.c_str(), location.c_str());
    return 0;
}