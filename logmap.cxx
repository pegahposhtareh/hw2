#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	
	int N = 4000;
	double x[N];
	
	
	int Nskip = 100; //Number of iterations to skip
	int Nend  = 200; //Number of total iterations
	
	 ofstream out("output.dat");

	for(double r=0; r <= 4; r += 0.001){
	   x[1] = 0.5;
	   for(int i=1; i <= Nskip; i++)
		   x[i+1] = r*x[i]*(1-x[i]);
	   for(int i=Nskip+1; i <= Nend; i++){
	   		   x[i+1] = r*x[i]*(1-x[i]);
	   		   out << r << "\t" << x[i+1] << endl;
   	   }
	}
	
	out.close();

	return 0;
}
