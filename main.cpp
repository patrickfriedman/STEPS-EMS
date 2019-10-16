#include <iostream>
#include <cstdlib>
#include "Patient.h"

int main()
  {
    string check, scheme, n, id, medicalcondition, emergencycontact, phone, dob, sex, remarks, location;
    int found = 0;
    ifstream main;
    ofstream out;
    
    vector <Patient> object; 

    main.open("input11.txt");
    out.open("MedicalHistory.txt");
  
    getline(main, scheme);
    while (!main.eof() )
    {
      main >> id;
      getline(main, n, '|');
      getline(main, n, '|');             //gets all data
      getline(main, medicalcondition, '|');
      getline(main, emergencycontact, '|');
      getline(main, phone, '|');
      getline(main, dob, '|');
      getline(main, sex, '|');
      getline(main, remarks, '|');
      getline(main, location);
      
      Patient newPatient(n, id, medicalcondition, emergencycontact, phone, dob, sex, remarks, location);     
      object.push_back(newPatient);
    }
    main.close();
  //------------------------------------gets data from database-------------------------------------//
    ifstream databaseCheck;  
    databaseCheck.open("PatientID.txt");
      
    databaseCheck >> check;
    cout << check << endl << endl;
  
    for (int i = 0; i < object.size(); ++i)
    { 
      cout << object[i].getID();
      if (object[i].getID() == check)
      {
        found = i;
        cout << "   Success\n";
        out << left << "ID: " << object[found].getID() << "\n"
        << "Name: " << object[found].getName() << "\n"
        << "Medical Condition: " << object[found].getMedicalCondition() << "\n"
        << "Emergency Contact: " << object[found].getEmergencyContact() << "\n"
        << "Phone Number: " << object[found].getPhone() << "\n"
        << "Date of Birth: " << object[found].getDOB() << "\n"
        << "Sex: " << object[found].getSex() << "\n"
        << "Remarks: " << object[found].getRemarks() << "\n"
        << "Location: " << object[found].getLocation() << "\n\n";
        break;
      }
      else
      {
        cout << "   Patient ID did not match database\n";
      }
    }
  
    out.close();
    databaseCheck.close();
  //--------------------------checks if patient id match database----------------------------------//
  return 0;
  }