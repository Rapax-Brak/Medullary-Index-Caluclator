#include <iostream> 
 using namespace std; 
  
 int main() { 
    double med;
    double dia;
    double index;
    cout << "Mesurement of Medulla\n";
    cin >> med;
    cout << "Full diameter\n";
    cin >> dia; 
    index = med/dia;
    cout << "Index is: " << index << "\n";
    if (index < 0.33) { 
     cout << "Most likely human"; 
    }else {
      cout << "Most likely animal";
    }
 }
