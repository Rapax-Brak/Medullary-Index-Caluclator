#include <iostream> 
 using namespace std; 
  
 int main() { 
   while (true){
    double med;
    double dia;
    double index;
    cout << "\nMesurement of Medulla\n";
    cin >> med;
    cout << "Full diameter\n";
    cin >> dia; 
    index = med/dia;
    cout << "Index is: " << index << "\n";
    if (index < 0.33) { 
     cout << "Most likely human"; 
    }else if (index < 0.5){
      cout << "Most likely animal";
    }else {
      cout << "Cannot be determined";
    }
   }
 }
