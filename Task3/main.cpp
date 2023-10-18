#include <iostream>
#include <vector>
#include <algorithm>

struct Student {
    std::string name;
    double grade;
};

int main() {
    std::vector<Student> students;
    std::string name;
    double grade;

    while (true) {
        std::cout << "Enter student name (or 'done' to finish): ";
        std::cin >> name;
        if (name == "done") break;

        std::cout << "Enter " << name << "'s grade: ";
        std::cin >> grade;

        students.push_back({name, grade});
    }

    if (!students.empty()) {
        double sum = 0.0;
        double min_grade = students[0].grade;
        double max_grade = students[0].grade;

        for (const auto& student : students) {
            sum += student.grade;
            min_grade = std::min(min_grade, student.grade);
            max_grade = std::max(max_grade, student.grade);
        }

        double average = sum / students.size();

        std::cout << "Average grade: " << average << "\n";
        std::cout << "Lowest grade: " << min_grade << "\n";
        std::cout << "Highest grade: " << max_grade << "\n";
    } else {
        std::cout << "No student data entered.\n";
    }

    return 0;
}
