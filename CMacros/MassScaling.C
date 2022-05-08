{

	double m_e = 0.510998950; 
	double m_mu = 105.6583755; 

	double e_EDM_pred = 1e-38;

	double mu_EDM_1 = e_EDM_pred * (m_mu/m_e);
	double mu_EDM_2 = e_EDM_pred * pow((m_mu/m_e),2);
	double mu_EDM_3 = e_EDM_pred * pow((m_mu/m_e),3);

	cout<<"Linear mass scaling: "<<mu_EDM_1<<" ecm"<<endl;
	cout<<"Quadratic mass scaling: "<<mu_EDM_2<<" ecm"<<endl;
	cout<<"Cubic mass scaling: "<<mu_EDM_2<<" ecm"<<endl;
}