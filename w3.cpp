#include <iostream>
using namespace std;

void test(char gender, double weight) {
    // m = male, f = female
    if (gender == 'm') {
        if (weight >= 48 && weight <= 75) {
            cout << "(" << gender << ", " << weight << "): " << "binh thuong" << endl;
        } else if (weight < 48) {
            cout << "(" << gender << ", " << weight << "): " << "gay" << endl;
        } else if (weight > 75) {
            cout << "(" << gender << ", " << weight << "): " << "beo" << endl;
        } else {
            cout << "(" << gender << ", " << weight << "): " << "invalid" << endl;
        }
    } else if (gender == 'f') {
        if (weight >= 45 && weight <= 57) {
            cout << "(" << gender << ", " << weight << "): " << "binh thuong" << endl;
        } else if (weight < 45) {
            cout << "(" << gender << ", " << weight << "): " << "gay" << endl;
        } else if (weight > 57) {
            cout << "(" << gender << ", " << weight << "): " << "beo" << endl;
        } else {
            cout << "(" << gender << ", " << weight << "): " << "invalid" << endl;
        }
    } else cout << "(" << gender << ", " << weight << "): " << "invalid" << endl;
}
void output() {
    cout << "Test 1: " << endl;
    test('m', -25);
    cout << "Test 2: " << endl;
    test('m', 41);
    cout << "Test 3: " << endl;
    test('m', 46);
    cout << "Test 4: " << endl;
    test('m', 50);
    cout << "Test 5: " << endl;
    test('m', 70);
    cout << "Test 6: " << endl;
    test('m', 80);
    cout << "Test 7: " << endl;
    test('f', -7);
    cout << "Test 8: " << endl;
    test('f', 44);
    cout << "Test 9: " << endl;
    test('f', 47);
    cout << "Test 10: " << endl;
    test('f', 52);
    cout << "Test 11: " << endl;
    test('f', 65);
    cout << "Test 12: " << endl;
    test('f', 99);
}
int main() 
{
    output();
}