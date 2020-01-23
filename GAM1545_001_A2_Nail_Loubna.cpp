#include <iostream>
#include <string>

using namespace std; 

int main()

{
    //ask for student's first name
    string firstname;

    cout << "enter the student's first name... \n";

    cin >> firstname;


    //ask for student's last name
    string lastname;

    cout << "enter the student's last name...\n";

    cin >> lastname;


    //ask for grades
    cout << "enter " << firstname  <<  lastname << "'s grades (as a percentage), starting with...\n";

  
    //input marks of 6 subjects from student

    int english; cout << "english: \n"; cin >> english;

    int math; cout << "math: \n"; cin >> math;
   
    int physics; cout << "physics: \n"; cin >> physics;
    
    int chemistry; cout << "chemistry: \n"; cin >> chemistry;
   
    int history; cout << "history: \n"; cin >> history;
   
    int geo; cout << "geography: \n"; cin >> geo;

  
    




        cout << "*****************************************\n";

  
       //report review 
       
       
        cout << firstname << lastname << "'s grade report (in percentage) \n"; 
	cout << "English:" << enlgish; 
	cout << "Math:" << math;
	cout << "Physics:" << physics; 
	cout << "Chemistry:" << chemistry;
	cout << "History:" << history;
	cout << "Geography:" << geo;
	
	
        //calculate percentage
    
        
       
        avg = (English + Math + Physics + Chemistry + History + Geography) / 6;

    {
        //calculation for average 
        
        if (avg >= 90 = "A+");

        else if (avg >= 85 = "A");

        else if (avg >= 77 = "B+");


        else if (avg >= 73 = "B");

        else if (avg >= 70 = "B-");


        else if (avg >= 67 = "c+");

        else (avg >= 0 = "F");


        cout << "your overall average is: " << avg;


    }
  
    cout << "*****************************************\n";
        

    
       
        
  
       
        

        return 0;

}
