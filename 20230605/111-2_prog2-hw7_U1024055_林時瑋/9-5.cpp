/*
聯合大學資訊工程學系
二年甲班 
U1024055
林時瑋
20230523

9.5 (Quadratic Equations Class) Create a class called Quadratic for performing arithmetic on
and solving quadratic equations. A quadratic equation is an equation of the form
ax2 + bx + c = 0
where . Use double variables to represent the values of a, b, and c and provide a constructor
that enables objects of this class to be initialized when they are created. Give default values of a = 1,
b = 0, and c = 0. Create a char variable called variable to represent the variable used in the equation
and give it a default value of x. The constructor should not allow the value of a to be 0. If 0 is given,
assign 1 to a). Provide public member functions that perform the following tasks.
a) add—adds two Quadratic equations by adding the corresponding values of a, b, and c.
The function takes another object of type Quadratic as its parameter and adds it to the
calling object.
b) subtract—subtracts two Quadratic equations by subtracting corresponding values of
a, b, and c. The function takes another object of type Quadratic as its parameter and
subtracts it from the calling object.
c) toString—returns a string representation of a quadratic equation in the form ax2 + bx + c = 0 using the actual values of the data members.
d) solve—solves a quadratic equation using the quadratic formula x = (-b+-sqrt(b^2-4ac))/2a and displays the solutions if (b^2 - 4ac) is greater than 0. Otherwise, it displays “No Real
Roots.”
Write a driver program to test the functionality of the Quadratic class.

*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
class Quadratic {
	private:
	    double a, b, c;
	    char variable;
	public:
	    Quadratic(double a = 1, double b = 0, double c = 0, char variable = 'x') {
	        if(a == 0)
	            this->a=1;
	        else
	            this->a=a;
	        this->b=b;
	        this->c=c;
	        this->variable=variable;
	    }
	    void add(const Quadratic& other) {
	        a+=other.a;
	        b+=other.b;
	        c+=other.c;
	    }
	
	    void subtract(const Quadratic& other) {
	        a-=other.a;
	        b-=other.b;
	        c-=other.c;
	    }
	    void toString()const{
	        cout<<fixed<<setprecision(0)<<a<<variable<<"^2 ";
	        if(b>=0)
	        	cout<<fixed<<setprecision(0)<<"+ "<<b<<variable<<" ";
	        else
	            cout<<fixed<<setprecision(0)<<"- "<<abs(b)<<variable<<" ";
	        if(c>=0)
	        	cout<<fixed<<setprecision(0)<<"+ "<<c<<" ";
	        else
	            cout<<fixed<<setprecision(0)<<"- "<<abs(c)<<" ";
	        cout<<"= 0";
	    }
	
	    void solve()const{
	        double discriminant=b*b-4*a*c;
	        if(discriminant>0){
	            double root1=(-b+sqrt(discriminant))/(2*a);
	            double root2=(-b-sqrt(discriminant))/(2*a);
	            cout<<"Root 1: "<<root1<<endl;
	            cout<<"Root 2: "<<root2<<endl;
	        }
			else{
	            cout<<"No Real Roots."<<endl;
	        }
	    }
};

int main() {
    Quadratic equation1(2,3,1);
    Quadratic equation2(1,-5,6);

    Quadratic equation3=equation1;
    equation3.add(equation2);

    Quadratic equation4=equation1;
    equation4.subtract(equation2);

    cout<<"Equation 1: ";
	equation1.toString();
	cout<<endl;
    cout<<"Equation 2: ";
	equation2.toString();
	cout<<endl;
    cout<<"Equation 3 (Addition): ";
	equation3.toString();
	cout<<endl;
    cout<<"Equation 4 (Subtraction): ";
	equation4.toString();
	cout<<endl;
    cout<<"Solving Equation 1:"<<endl;
    equation1.solve();
    cout<<"Solving Equation 2:"<<endl;
    equation2.solve();
    return 0;
}


