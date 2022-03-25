#include <iostream> 
#include <algorithm>
#include <string.h> 
using namespace std; 


//------------------Affine chiper---------------
string chiper_affine(string mes_sen){
    int a,b;
    cout << "enter the a: "<<endl;
    cin >> a;
    cout << "enter the b: "<<endl;
    cin >> b;
    string cip_aff = " ";
    //loop to search character in the messeage.
    for (int i = 0; i < mes_sen.length(); i++)
    {
        //to remove space 
        if (mes_sen[i]!='	')
        {
            cip_aff +=(char)((((a*( mes_sen[i]-'A') ) + b ) % 26 ) + 'A');
        }
        else {
        	cip_aff += mes_sen[i];
        }
    }
    return cip_aff;

} 

//-------------------------Dextraction Affine----------

string decrypt_affine(string cip_aff){
	
	string message = " ";
	int a;
	int key_a_vi =0;
	int b;
	int dec;
	cout << "enter the a: "<<endl;
    cin >> a;
    cout << "enter the b: "<<endl;
    cin >> b;
	for (int i = 0; i < 26; i++)
	{
		dec = (a * i) % 26;
		
		
		if (dec == 1)
		{
			key_a_vi = i ;
		}
	}
	for (int i = 0; i < cip_aff.length(); i ++ )
	{
		if (cip_aff [i] != '  ')
		{
			message += (char)(((key_a_vi * ((cip_aff[i] + 'A' - b)) % 26 )) + 'A');
		}
	
		else {
			message += cip_aff[i];
		}
	}	
	return message;
	
}
int main (void)
{
	int a,b;
	string mes_sen ,answer,cip_aff, cipper; 
	cout << endl;
	cout << "     ---------------AFFINE CIPHER-------------"<<endl;
	cout << endl;
	cout << "Do you want to encrypt a message or do you want to decrypt it?"<<endl;
	cout << "enter 1 : to encrypt \n"
				"enter 2 : to decrypt \n"<< endl;
	cin >> answer;
	if (answer == "1")
	{
		cout << "please enter the message: "<< endl;
		cin >> mes_sen;
		mes_sen.erase(remove(mes_sen.begin(), mes_sen.end(), '  '), mes_sen.end());
		string cip_text = chiper_affine(mes_sen);
		cout << cip_text <<endl;
	}
	
	else if (answer == "2")
	{
		cout << "please enter the cipher: "<<endl;
		cin >> cip_aff;
		cout << decrypt_affine(cip_aff) << endl;
	}
	return 0;
	
}