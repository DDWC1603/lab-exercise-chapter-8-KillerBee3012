#include <iostream>
using namespace std;


class CariTigaSegi

{
	
	private:
		int x,y;
		
	public:
		
		
		void set_value(int, int );
		
		int area()
		{
			return (x*y)/2;
			
		}
	
};

void CariTigaSegi::set_value(int a ,int b)
{
	x = a;
	y = b;
	
	
}



int main()

{
	CariTigaSegi hahaha;
	hahaha.set_value(10,9);
	hahaha.area();
	cout<<hahaha.area();
	
	
	
	
}

