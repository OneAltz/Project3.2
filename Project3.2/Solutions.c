#include "Solutions.h"

//This Is the Funtion For No.1, For Calculating The Sum Of 5 Numbers
double Calculate_Sum(double No1, double No2, double No3, double No4, double No5) {
    return No1 + No2 + No3 + No4 + No5;
}
//This Is the Funtion For No.2, For Calculating The Mean Of 5 Numbers
double Calculate_mean(double Sum, int number) {
    return Sum / number;
}
//This Is the Funtion For No.3, For Calculating The Deviation Of 5 Numbers
double Calculate_deviation(double Number, double Mean) {
    return Number - Mean;
}
//This Is the Funtion For No.4, For Calculating The Variance Of 5 Numbers
double Calculate_variance(double Deviation1, double Deviation2, double Deviation3, double Deviation4, double Deviation5, int number) {
    return (Deviation1 * Deviation1 + Deviation2 * Deviation2 + Deviation3 * Deviation3 + Deviation4 * Deviation4 + Deviation5 * Deviation5) / number;
}
//This Is the Funtion For No.5, For Calculating The Standard Deviation Of 5 Numbers
double Calculate_standard_deviation(double Variance) {
    return sqrt(Variance);
}
//This Is the Funtion For No.6, For Finding The Maximum Of 5 Numbers
double Find_Maximum(double No1, double No2, double No3, double No4, double No5) 
{
    double Max = No1;
    if ((No2 > Max) && (No2 != -1)) {Max = No2;}
    if ((No3 > Max) && (No3 != -1)) {Max = No3;}
    if ((No4 > Max) && (No4 != -1)) {Max = No4;}
    if ((No5 > Max) && (No5 != -1)) {Max = No5;}
    return Max;
}
//This Is the Funtion For No.7, For Finding The Minimum Of 5 Numbers
double Find_Minimum(double No1, double No2, double No3, double No4, double No5) {
    double Min = No1;
    if ((No2 < Min) && (No2 != -1)) {Min = No2;}
    if ((No3 < Min) && (No3 != -1)) {Min = No3;}
    if ((No4 < Min) && (No4 != -1)) {Min = No4;}
    if ((No5 < Min) && (No5 != -1)) {Min = No5;}
    return Min;
}