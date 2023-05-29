#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    
    srand(time(NULL));
    int arr[20];
    double sum, sum2 = 0;
    double averages[30];
    
    for (int k = 0; k < 30; k++) {
    
    for (int i = 0; i < 20; i++) {
        arr[i] = 1 + rand() % 101;
        cout << arr[i] << " ";
        sum += arr[i];
    }
    
    cout << endl;
    double average1 = sum / 20;
    
    cout << "Sum of the displayed numbers: " << sum << endl;
    cout << "Average of the displayed numbers: " << average1 << endl;
    
    
    averages[k] = average1;
    sum = 0;
    }
    
    double max = 0;
    double min = averages[0];
    
    cout << "-------------------------------------------------------------------------"<< endl;
    cout << "All averages!!! " << endl;
    for (int i = 0; i < 30; i++) {
        cout << averages[i] << " | ";  
        sum2 += averages[i];
        if(averages[i] > max){
            max = averages[i];
        } 
        if(averages[i] < min){
            min = averages[i];
        }
    }
    
    double average2 = sum2 / 30;
    cout << endl;
    cout << "Average of all averages: " << average2 << endl;
    cout << "Maximum value from the averages: " << max << endl;
    cout << "Minimum value from the averages: " << min << endl;

    
   return 0;
}