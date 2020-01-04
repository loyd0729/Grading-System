#include <iostream>

int main(){

    std::cout << "**********************";
    std::cout << "\n Please Enter Grade: \n";
    std::cout << "**********************\n";

    int inputGrade;
    std::cin >> inputGrade;

    if(inputGrade == 100){
        std::cout << " ----------------\n";
        std::cout << "|                |\n";
        std::cout << "| The grade is A+|\n";
        std::cout << "|                |\n";
        std::cout << " ----------------\n";
    } else if(inputGrade >= 90){
        std::cout << " ----------------\n";
        std::cout << "|                |\n";
        std::cout << "| The grade is A |\n";
        std::cout << "|                |\n";
        std::cout << " ----------------\n";
    } else if(inputGrade >= 80){
        std::cout << " ----------------\n";
        std::cout << "|                |\n";
        std::cout << "| The grade is B |\n";
        std::cout << "|                |\n";
        std::cout << " ----------------\n";
    } else if(inputGrade >= 70){
        std::cout << " ----------------\n";
        std::cout << "|                |\n";
        std::cout << "| The grade is C |\n";
        std::cout << "|                |\n";
        std::cout << " ----------------\n";
    } else if(inputGrade >= 60){
        std::cout << " ----------------\n";
        std::cout << "|                |\n";
        std::cout << "| The grade is D |\n";
        std::cout << "|                |\n";
        std::cout << " ----------------\n";
    }
    else {
        std::cout << " -------------------\n";
        std::cout << "|                   |\n";
        std::cout << "| This is a failing |\n";
        std::cout << "| grade.The student |\n";
        std::cout << "|     FAILED....    |\n";
        std::cout << " -------------------\n";
    }

    return 0;
}
