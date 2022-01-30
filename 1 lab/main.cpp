#include <iostream>
using namespace std;

int InpInt(){
    int n;
    while (true) {
    		cin >> n;
    		if (cin.get() == '\n') return n;
    		else {
    		    cin.clear();
    		    cin.ignore(256, '\n');
    			cout << "Error! Try again" << endl;
    		}
    	}
}

int main()
{
	int n; 
	cout << "Enter the size of the array: ";
	n = InpInt();
	double sum = 0;
	double arr[n];
	for(int i=0; i<n; i++)
	{
	    cout << "Enter values: ";
		try
        {
            double a;
            do
            {
                if(!cin)
                {
                    cin.clear();
                    while (cin.get() != '\n');
                    cout<<"Error! try again\n";
                }
                cin>>a;
            }while(!cin);
            arr[i] = a;
        }
        catch(...)
        {
            cout << "Unknown error! \n";
        }
		if (arr[i] > 0){
		  sum += arr[i];
		}
	}
	cout << "  The sum of positive numbers: " << sum;
	return 0;
}
