#include "Patient.h"

Patient::Patient(string n, string id, string medicalcondition, string emergencycontact, string phone, string dob, string sex, string remarks, string location)                   //fully specified constructor
{
    Name = n;                               //set whole scheme row equal to data in class
    ID = id;
    MedicalCondition = medicalcondition;
    EmergencyContact = emergencycontact;
    Phone = phone;
    DOB = dob;
    Sex = sex;
    Remarks = remarks;
    Location = location;
}

Patient::Patient()                    //default constructor
{
    Name = " ";                               //set whole scheme row equal to data in class
    ID = " ";
    MedicalCondition = " ";
    EmergencyContact = " ";
    Phone = " ";
    DOB = " ";
    Sex = " ";
    Remarks = " ";
    Location = " ";
}