#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

namespace ResumeApp {

    struct Education {
        string degree;
        string institution;
        string graduationYear;
    };

    struct Experience {
        string jobTitle;
        string company;
        string yearsWorked;
    };

    struct Skill {
        string skillName;
    };

    struct Resume {
        string name;
        string email;
        string phone;
        vector<Education> education;
        vector<Experience> experience;
        vector<Skill> skills;
    };

    void collectEducation(Resume &resume) {
        int num;
        cout << "Enter the number of educational qualifications: ";
        cin >> num;
        cin.ignore();

        for (int i = 0; i < num; ++i) {
            Education edu;
            cout << "Enter degree: ";
            getline(cin, edu.degree);
            cout << "Enter institution: ";
            getline(cin, edu.institution);
            cout << "Enter graduation year: ";
            getline(cin, edu.graduationYear);
            resume.education.push_back(edu);
        }
    }

    void collectExperience(Resume &resume) {
        int num;
        cout << "Enter the number of work experiences: ";
        cin >> num;
        cin.ignore();

        for (int i = 0; i < num; ++i) {
            Experience exp;
            cout << "Enter job title: ";
            getline(cin, exp.jobTitle);
            cout << "Enter company: ";
            getline(cin, exp.company);
            cout << "Enter years worked: ";
            getline(cin, exp.yearsWorked);
            resume.experience.push_back(exp);
        }
    }

    void collectSkills(Resume &resume) {
        int num;
        cout << "Enter the number of skills: ";
        cin >> num;
        cin.ignore();

        for (int i = 0; i < num; ++i) {
            Skill skill;
            cout << "Enter skill: ";
            getline(cin, skill.skillName);
            resume.skills.push_back(skill);
        }
    }

    void displayResume(const Resume &resume) {
        cout << "\n===== Resume =====\n";
        cout << "Name: " << resume.name << "\n";
        cout << "Email: " << resume.email << "\n";
        cout << "Phone: " << resume.phone << "\n";

        cout << "\nEducation:\n";
        for (const auto &edu : resume.education) {
            cout << "Degree: " << edu.degree << ", Institution: " << edu.institution
                << ", Graduation Year: " << edu.graduationYear << "\n";
        }

        cout << "\nExperience:\n";
        for (const auto &exp : resume.experience) {
            cout << "Job Title: " << exp.jobTitle << ", Company: " << exp.company
                << ", Years Worked: " << exp.yearsWorked << "\n";
        }

        cout << "\nSkills:\n";
        for (const auto &skill : resume.skills) {
            cout << skill.skillName << "\n";
        }
        cout << "==================\n";
    }

    void saveResumeToFile(const Resume &resume) {
        ofstream outFile("resume.txt");

        if (outFile.is_open()) {
            outFile << "===== Resume =====\n";
            outFile << "Name: " << resume.name << "\n";
            outFile << "Email: " << resume.email << "\n";
            outFile << "Phone: " << resume.phone << "\n";

            outFile << "\nEducation:\n";
            for (const auto &edu : resume.education) {
                outFile << "Degree: " << edu.degree << ", Institution: " << edu.institution
                    << ", Graduation Year: " << edu.graduationYear << "\n";
            }

            outFile << "\nExperience:\n";
            for (const auto &exp : resume.experience) {
                outFile << "Job Title: " << exp.jobTitle << ", Company: " << exp.company
                    << ", Years Worked: " << exp.yearsWorked << "\n";
            }

            outFile << "\nSkills:\n";
            for (const auto &skill : resume.skills) {
                outFile << skill.skillName << "\n";
            }
            outFile << "==================\n";

            outFile.close();
            cout << "Resume saved to resume.txt\n";
        } else {
            cout << "Unable to open file for writing!\n";
        }
    }
}

int main() {
    ResumeApp::Resume resume;

    cout << "Enter your name: ";
    getline(cin, resume.name);

    cout << "Enter your email: ";
    getline(cin, resume.email);

    cout << "Enter your phone number: ";
    getline(cin, resume.phone);

    ResumeApp::collectEducation(resume);
    ResumeApp::collectExperience(resume);
    ResumeApp::collectSkills(resume);

    ResumeApp::displayResume(resume);
    ResumeApp::saveResumeToFile(resume);

    return 0;
}
