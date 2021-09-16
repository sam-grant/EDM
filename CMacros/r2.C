void r2() { 

	int nPars = 3;
    double CL = .317311;// 1 - 68% (one sigma)
    double r2 = 0; // r^2 (see https://upload.wikimedia.org/wikipedia/commons/a/a2/Cumulative_function_n_dimensional_Gaussians_12.2013.pdf)

/*

the Chi-square distribution with ℓ degrees of freedom is exactly defined as being the distribution of a variable which is the sum of the squares of ℓ random variables being standard normally distributed. Hence, the squared Mahalanobis distance is Chi-square distributed with ℓ degrees of freedom

Computation of the probability for a certain Chi-squared (chi2)
 and number of degrees of freedom (ndf).

 Calculations are based on the incomplete gamma function P(a,x),
 where a=ndf/2 and x=chi2/2.

 P(a,x) represents the probability that the observed Chi-squared
 for a correct model should be less than the value chi2.

 The returned probability corresponds to 1-P(a,x),
 which denotes the probability that an observed Chi-squared exceeds
 the value chi2 by chance, even for a correct model.

--- NvE 14-nov-1998 UU-SAP Utrecht

When TMath::Prob(r2,nPars) > CL

TMath::Prob(r2,nPars) tells you the probablity that the chi^2 drawn from the gamma function

*/

    bool stop = false;
    double oneChiSqrCL = 0; 
    while(TMath::Prob(r2,nPars) > CL){
      r2 += 0.00001; // why 0.00001?
      
      if(r2 >= 1.0 && !stop) {
      	oneChiSqrCL = TMath::Prob(r2,nPars);
      	stop = true;
      }
    }

	cout<<"The Mahalanobis distance "<<r2<<" provides the threshold below which "<<(1-CL)*100<<"% of the points reside (CL = "<<CL<<") for a "<<nPars<<" parameter function.\n";
	cout<<"This is equivilant to a shift in the chi^2 of "<<pow(r2,2)<<endl;	
	cout<<"The equvilant threshold for a 1 unit chi^2 shift is "<<(1-oneChiSqrCL)*100<<"% or a CL of "<<oneChiSqrCL<<endl;

	return;

}