#include<iostream>
using namespace std;
int main()
{                                                                                         int pm;
	        float i=0,x,l;
		        cout<<"Ingrese l:  "<<endl;
			        cin>>l;
				        do
						        {
								                cout<<"Ingrese el valor de x: "<<endl;
										                cin>>x;
												                i=i+1;
														                if(x>pm)
																	                {
																				                        pm=x;
																							                }

																        }while(i<l);
					        cout<<"El promedio maximo de el curso fue: "<<pm<<endl;
					        return 0;
}
