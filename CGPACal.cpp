#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    float credithours;
    float grade;
    float totalcredits=0;
    float totalgradepoints=0;

    cout << "enter number of courses:";
    cin>>n;
    cout<<"\nenter the grade points and credit hours for each courses\n";
    for(int i=0; i<n; i++)
    {
        cout << "\nCourse" <<i <<endl;
        cout << "enter grade point:";
        cin>> grade;
        cout << "enter creadit hours:";
        cin>>credithours;
        totalcredits+=credithours;
        totalgradepoints+=grade*credithours;


    }
    float GPA= totalgradepoints/totalcredits;
    float CGPA= GPA;
    cout << "\n========== RESULT ==========" << endl;
    cout << fixed << setprecision(2);

    cout << "Total Credits      : " << totalcredits << endl;
    cout << "Total Grade Points : " << totalgradepoints << endl;
    cout << "Semester GPA       : " << GPA << endl;
    cout << "Overall CGPA       : " << CGPA << endl;
    return 0;
}
