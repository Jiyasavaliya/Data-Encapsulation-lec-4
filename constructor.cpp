#include<iostream>
using namespace std;

class a{
	
	public:
		a(){
			
			int n,b,g;
			char c[10],d[33],e[11],f[22],h[11];
			
			cout << "Enter number of hotels: ";
            cin >>n;
			
			 
           for (int i = 0; i <n; i++) {
	
			cout<<"cafe_id :";
			cin>>b;
			cout<<"cafe_name :";
			cin>>c;
			cout<<"cafe_type :";
 		    cin>>d;
            cout<<"cafe_rating :";
            cin>>e;
	        cout<<"cafe_location :";
        	cin>>f;	
            cout<<"cafe_establish_year :";
            cin>>g;      
            cout<<"cafe_staff_quantity :";
            cin>>h;
}

		}
};

int main(){
	
	a obj1;
}

