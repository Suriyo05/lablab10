#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    int count = 0;
    double sum = 0,mean,StandardDeviation,num;

    string textline;
    ifstream source("score.txt");
    while (getline(source,textline))
    {
        sum += atof(textline.c_str());
        num += pow(atof(textline.c_str()),2);
        count++;
        
    }
    mean= sum/count;
    StandardDeviation = sqrt((num/count)-pow(mean,2));

    cout << "Number of data = "<<count<<"\n";
    cout << setprecision(3);
    cout << "Mean = "<<mean<<"\n";
    cout << "Standard deviation = "<<StandardDeviation;


}