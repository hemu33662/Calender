#include<iostream>
using namespace std;

int Month(int b)
{	int c;
		if(b>0 && b<13)	
	{	
		if(b==1 || b==10)
			{
			c = 0;
			}
		else if(b==2 || b==3 || b==11)
			{
			c = 3;
			}
		else if(b==4 || b==7)
			{
			c = 6;
			}
		else if(b==5)
			{
			c = 1;
			}
		else if(b==6)
			{
			c = 4;
			}
		else if(b==8)
			{
			c = 6;
			}
		else if(b==9 || b==12)
			{
			c = 5;
			}

	}
	else
		
	{	cout<<"sorry I can't help with the month"<<endl;}
	return c;
}
int Year(int x)

{
int d;
	x =x%100;
	{
		int c,b;
		c = x/4;
		b = c+x;
		d = b% 7;
	}
	return d;
}
int Century(int m)

{
	int b,c;
	
	b=m/100;
	
	if(b>16 && b<23)
		
	{	
		if(b==17 || b==21)
			{
			c = 4;
			}
		else if(b==18 || b==22)
			{
			c = 2;
			}
		else if(b==19 || b==23)
			{
			c = 0;
			}
		else if(b==20)
		{
			c = 6;
		}

	}
	else
		
	{	cout<<"sorry I can't help with the Year"<<endl;}
	return c;
}

int Final(int i, int j,int k,int l)
{	
	
	int o, m;
	o = i+j+l+k;
	m = o%7;
	return m;
	
}
int Week(int h)
{
	
		switch(h) {
		case 0: 
			cout<<"Sunday is your selected date";
			break;
		case 1: 
			cout<<"Monday is your selected date";			
			break;
		case 2: 
			cout<<"Tuesday is your selected date";
						
			break;
		case 3: 
			cout<<"Wednesday is your selected date";
		
			break;
		case 4: 
			cout<<"Thursday is your selected date";
				
			break;
		case 5: 
			cout<<"Friday is your selected date";
				
			break;
		case 6: 
			cout<<"Saturday is your selected date";		
			
			break;
		
		default:
			cout<<"Invalid month";
				
	}
}

int main()

{
int a,b,c,d;
cout<<"Enter Year:"<<endl;
cin>>a;
cout<<"Enter Month:"<<endl;
cin>>b;
cout<<"Enter Date:"<<endl;
cin>>c;
Week(Final(Year(a),Month(b),Century(a),c));
}
