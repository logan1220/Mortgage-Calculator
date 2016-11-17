#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int ficoscore, morgagetype;
    float interest_rate;
    
    cout << "What is your FICO score?";
    cin >> ficoscore;
    
    cout << "Which type of morgage would you like, 15 or 30 year?";
    cin >> morgagetype;
    
    if (morgagetype == 30)
       interest_rate = 4.8;
    else if (morgagetype == 15)
         interest_rate = 4.3;
         
         
    if (ficoscore <= 579)
       interest_rate += 4.0;
    else if (ficoscore <= 619)
         interest_rate += 2.25;
    else if (ficoscore <= 659)
         interest_rate += 1.5;
    else if (ficoscore <= 699)
         interest_rate += 0.5;
    else if (ficoscore <= 759)
         interest_rate += .25;
    else if (ficoscore >= 760)
         interest_rate += 0;
    
    cout << interest_rate << "%" << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
