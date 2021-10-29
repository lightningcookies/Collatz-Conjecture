#include <iostream>
#include <map>
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int CollatzConjecture(long long int n){
    long long int count = 0;
    while(n != 1){
        if(n % 2 == 0){
            n = n / 2;
        }
        else{
            n = 3 * n + 1;
        }
        count++;
    }
    return count;
}

int main() {
    //create a map to store the number of steps for each number
    std::map<int, int> steps;
    for(long long int i = 1; i < 100000000; i++){
        steps[i] = CollatzConjecture(i);
        if(i%10000 == 0){
            cout << i << endl;
        }
    }
    //print steps map into a csv documennt
    ofstream myfile;
    myfile.open("steps.csv");
    myfile << "Input Value" << "," << "Steps" << endl;
    for(auto it = steps.begin(); it != steps.end(); it++){
        myfile << it->first << "," << it->second << endl;
    }
    myfile.close();


    return 0;
}
