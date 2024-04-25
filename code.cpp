#include<iostream>
using namespace std;
 
class temperature
{
    protected:
        double num;
        char unit;
    public:
        temperature()
        {
            cout<<"\nEnter a temperature value and its unit : ";
            cin>>num>>unit;

        }
        void conversion()
        {
            if(unit=='c'||unit=='C')
            {
                celsius();
            }
            else if(unit=='f'||unit=='F')
            {
                fahrenheit();
            }
            else if(unit=='k'||unit=='K')
            {
                kelvin();
            }
            
        }
        void celsius()
        {
            cout<<"\nFAHRENHEIT : "<<(num*9/5)+32<<" F";
            cout<<"\nKELVIN : "<<num+273.15<<" K";
        } 
        void fahrenheit()
        {
            cout<<"\nCELSIUS : "<<(num-32)*5/9<<" C";
            cout<<"\nKELVIN : "<<(num-32)*5/9+273.15<<" K";
        } 
        void kelvin()
        {
            cout<<"\nCELSIUS : "<<num-273.15<<" C";
            cout<<"\nFAHRENHEIT : "<<((num-273.15)*9/5)+32<<" F";
        } 

};

int main()
{
    int rpt=0;
    cout<<"\n\tTEMPERATURE CONVERTOR";
    do
    {
        temperature t;
        t.conversion();
        cout<<"\nDo You Want To Continue Again (press 1) : ";
        cin>>rpt;
    } while (rpt==1);
    return 0; 

}
