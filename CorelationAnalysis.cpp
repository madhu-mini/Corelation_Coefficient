//Pearson method 2015BIT009
//6. Correlation analysis
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number of Entries in file:"<<endl;
	cin>>n;
	int x[n],y[n],i=0,j=0;
	for(i=0;i<n;i++)
	{
		cout<<"Enter X and Y Entries"<<endl;
		cin>>x[i]>>y[i];
	}
	long  x_summation=0,y_summation=0;
	long sum_of_square_of_x=0,sum_of_square_of_y=0,muliplication_of_x_y=0;
	for(i=0;i<n;i++)
	{
		x_summation+=x[i];
		y_summation+=y[i];
		sum_of_square_of_x+=(x[i]*x[i]);
		sum_of_square_of_y+=(y[i]*y[i]);
		muliplication_of_x_y+=(x[i]*y[i]);
	}
	//cout<<x_summation<<" "<<y_summation<<" "<<muliplication_of_x_y<<" "<<sum_of_square_of_x<<" "<<sum_of_square_of_y<<endl;
	float denominator=sqrt(((n*sum_of_square_of_x)-(x_summation*x_summation))*((n*sum_of_square_of_y)-(y_summation*y_summation)));
	float numerator=(n*muliplication_of_x_y)-(x_summation*y_summation);
	float r=numerator/denominator;
	//cout<<numerator<<" "<<denominator<<" "<<endl;
	cout<<"Correlation Coefficient: "<<setprecision(6)<<r<<endl;
	return 0;
} 
/*Output:-
Enter the number of Entries in file:
6
Enter X and Y Entries
43 99
Enter X and Y Entries
21 65
Enter X and Y Entries
25 79
Enter X and Y Entries
42 75
Enter X and Y Entries
57 87
Enter X and Y Entries
59 81
Correlation Coefficient: 0.5298
*/	
