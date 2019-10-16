#include <iomanip>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class Patient                        //scheme
{
    private:
        string ID, Name, MedicalCondition, EmergencyContact, Phone, DOB, Sex, Remarks, Location;

    public:
        Patient(string, string, string, string, string, string, string, string, string);                 //fully specified constructor
        Patient();
  
        string getID() {return ID;}
        string getName() {return Name;}
        string getMedicalCondition() {return MedicalCondition;}
        string getEmergencyContact() {return EmergencyContact;}
        string getPhone() {return Phone;}
        string getDOB() {return DOB;}
        string getSex() {return Sex;}
        string getRemarks() {return Remarks;}
        string getLocation() {return Location;}
};