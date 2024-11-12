// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

class cpte_obj {
		static int ctr;
	public:
		cpte_obj() { 
		    cout<<"appel constructeur P/Defaut"<<this<<endl;
		    ++ctr ;
				}
		cpte_obj(const cpte_obj& a){
		    ctr = a.ctr  ;
		}
		~cpte_obj() {    
		        cout<<"appel destructeur"<<this<<endl;
		        --ctr ;
				if(ctr == 0)
					cout << "Bye, bye!" << endl ;
				}
		void HowMany () {
			cout << ctr << " instances" << endl ;   }
		void afficher(){
		    cout<<"e="<<ctr<<endl;
		}
	};
	int cpte_obj :: ctr = 0;
	
int main() {
	cpte_obj a;
	cpte_obj e = a;
	e.afficher();
	cpte_obj c;
	e.afficher();
	cpte_obj b;
	c.HowMany();
	cpte_obj d;
	d.HowMany();
return 0;
    
}
