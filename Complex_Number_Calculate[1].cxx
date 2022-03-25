
	//Calculate complex number//

#include <iostream> 
#include <cmath> 

using namespace std; 
int main ()
{
	//Part of Declarition//
	float real_a,result_real,result_imag;
	char sign1a,sign2a,sign1b,sign2b;
	char answer;
	float real_b,imag_a, imag_b,res;
	
	//Steps of complex number 1//
	
	cout << "   complex number===>(REAL NUMBER , IMAGINE NUMBER i)\n";
	cout << "	plaese enter the real number1: " <<endl; 
	cin>> real_a;
	cout << "	plaese enter the imagine number1: " <<endl; 
	cin >> imag_a;
	cout << "	your complex number1=  ";
	cout <<"("<< real_a<<","<<imag_a<<"i"<<")"<<endl;
	cout <<endl;
	//Steps of complex number 2//
	cout << "	plaese enter the real number2: " <<endl; 
	cin>> real_b;
	cout << "	plaese enter the imagine number2: " <<endl; 
	cin >> imag_b;
	
	cout << "	your complex number2 = ";
	cout <<"("<< real_b<<","<<imag_b<<"i"<<")"<<endl;
	
	cout <<endl;
	//Part Chaeck of the opearetor//
	cout << "	what do you want opeartor to the numbers?\n";
	cout << "	Enter 1 :Adding Numbers.\n";
	cout << "	Enter 2 : Subtract Number.\n";
	cout << "	Enter 3 : Multiply Numbers.\n";
	cout << "	Enter 4 : Dividing Numbers.\n";
	cin >> answer;
	
	
	//Adding//
	if (answer == '1')
	{
		
		cout <<"   "<< "("<<real_a<<","<<imag_a<<")"<<"i"<< " + "<< "("<<real_b<<","<<imag_b<<"i"<<")"<< " = ";
		
		
		result_real = real_a + real_b;
		result_imag = imag_a + imag_b;
		cout <<"("<< result_real <<","<<result_imag<<"i"<<")"<<endl;
		
		cout<<"	Thank you for using our Complex Number Calculator."<<endl;
	}
	//Subtract//
	else if (answer == '2')
	{
		cout <<"	"<<"("<< real_a<<","<<imag_a<<"i"<<")" <<" - "<<"("<< real_b<<","<<imag_b<<"i"<<")"<< " = ";
		
		
		result_real = real_a - real_b;
		result_imag = imag_a - imag_b;
		cout <<"("<< result_real <<","<< result_imag<<"i"<<")"<<endl;
		
		cout<<"	Thank you for using our Complex Number Calculator."<<endl;
	}
	//Multiply//
	else if (answer == '3')
	{
		//a + bi / c +di 
		//(a+bi)(c+di) = (ac- bd) + (ad+bc)i
		cout <<"	"<<"("<< real_a<<","<<imag_a<<"i"<<")"<< " * "<<"("<< real_b<<","<<imag_b<<"i"<<")"<< " = ";
		
		
		result_real = (real_a*real_b)-(imag_a*imag_b);
		result_imag = (real_a*imag_b)+(imag_a*real_b);
		cout <<"("<< result_real <<","<< result_imag<<"i"<<")"<<endl;
		
		cout<<"	Thank you for using our Complex Number Calculator."<<endl;
	}
	//Dividing//
	else if (answer == '4')
	{
		/*
		a + bi / c +di 
		(ac+bd) + (bc-ad)i / c² +d²
		*/
		
		cout <<"	"<<"("<< real_a<<","<<imag_a<<"i"<<")"<< " / "<<"("<< real_b<<","<<imag_b<<"i"<<")"<< " = ";
		
		
		//result_real = (real_a / real_b );
		//result_imag = (imag_a / imag_b);
		
		res = ((real_a*real_b + imag_a*imag_b) + (imag_a * real_b -real_a * imag_b)) / ((real_b*real_b) + (imag_b*imag_b));
		
		result_real = ((real_a*real_b + imag_a*imag_b))/((real_b*real_b) + (imag_b*imag_b));
		result_imag = ((imag_a * real_b -real_a * imag_b))/((real_b*real_b) + (imag_b*imag_b));

		cout <<result_real<<","<<result_imag<<"i"<<endl;
		cout<<"	Thank you for using our Complex Number Calculator."<<endl;
	}
	else {
		cout << 	"invalid operand Try Again!";
	}
	

} 
