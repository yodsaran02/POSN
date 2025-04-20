#include <iostream>
#include <string>
using namespace std;

int main(){
    char StartingColor;
    int NumberOfLights, i;
    cin >> StartingColor;
    cin >> NumberOfLights;
    if(StartingColor == 'R'){ i = 0; }
    if(StartingColor == 'G'){ i = 1; NumberOfLights++; }
    if(StartingColor == 'B'){ i = 2; NumberOfLights += 2; }
    string lights[3] = {"Red", "Green", "Blue"};
    for(; i < NumberOfLights; i++){
        cout << lights[(i%3)] << " ";
    }

}