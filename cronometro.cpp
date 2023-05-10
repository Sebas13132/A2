#include<iostream>
using namespace std;
int main()
{
	        int hf,mf,sf,hi,mi,si,ht,mt,st,s;
		        cout<<"Ingrese el tiempo final (hf : mf : sf) : "<<endl;
			        cin>>hf>>mf>>sf;
				        cout<<"Ingrese el tiempo inicial (hi : mi : si) : "<<endl;
					        cin>>hi>>mi>>si;
						        if(sf>si)
								        {

										        }else{
												                mf=mf-1;
														                sf=sf+60;

																        }
							        st=st-si;
								        if(mf>si)
										        {

												        }else{
														                hf=hf-1;
																                mf=mf+60;

																		        }
									        mt=mt-mi;
										        ht=hf-hi;
											        s=ht+3600+mt+st;

												        cout<<"Han transcurrido: "<<ht<< "Horas:" <<mt<< "minutos:" <<st<<"segundo: "<<endl;
													        cout<<"En total son: "<<s<< "Segundo" <<endl<<endl;
														        return 0;
}
