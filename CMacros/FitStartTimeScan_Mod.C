#include "FancyDraw.h"
#include "Utils.h"

double omega_a = 0.00143934*1e3; // 1.439311;// (average for mu+ at BNL) 0.00143934*1e3;//1.439311; // rad/us 0.00143934; // kHz from gm2const, it's an angular frequency though...
double g2period = (2 * TMath::Pi() / omega_a);//s * 1e-3; // us

double tmin = 7*g2period;//G2PERIOD;
double tmax = 92*g2period;//G2PERIOD;

TH2D *GetModulo(TH2D *h2) { 

	cout<<tmin<<endl;
	cout<<tmax<<endl;
/*	cout<<G2PERIOD<<endl;
	cout<<tmax<<endl;
	cout<<(tmax-tmin)/G2PERIOD<<endl;*/

	cout<<"---> N entries h2 = "<<h2->GetEntries()<<endl;

/*	cout<<"---> N entries h2 = "<<h2->GetEntries()<<endl;
	cout<<"---> N bins h2 = "<<h2->GetNbinsX()<<endl;
	cout<<"---> xmin h2 = "<<h2->FindFirstBinAbove(0)<<endl;
	cout<<"---> xmax h2 = "<<h2->FindLastBinBelow(0)<<endl;*/

	TH2D *h2_mod = new TH2D("ThetaY_vs_Time_Modulo", ";t_{g#minus2}^{mod} [#mus]; #theta_{y} [mrad] / 149.2 ns", 29, 0, g2period, 1000, -TMath::Pi()*GMAGIC, TMath::Pi()*GMAGIC);
	
	TH2D *h2_mod_empty= (TH2D*)h2_mod->Clone("h2_mod_clone");

	int i_xbin = 0;

	double lo = 0;//h2->GetXaxis()->GetBinLowEdge(h2->FindFirstBinAbove(0));//Center(i_xbin+1); //h2_mod0;// i_period*G2PERIOD; 
	double hi = lo + g2period;

	// Loop thro' periods 
	for(int i_period(0); i_period<tmax/g2period; i_period++) {

/*		if(lo < tmin) {
			lo = lo + G2PERIOD;
	    	hi = hi + G2PERIOD;
			continue;
		}*/

		TH2D *h2_mod_tmp = (TH2D*)h2_mod_empty->Clone("h2_mod_tmp");

		int i_xbin_mod = 0;

		while(h2->GetXaxis()->GetBinCenter(i_xbin+1) >= lo && h2->GetXaxis()->GetBinCenter(i_xbin+1) < hi) {

			// time and t_mod
    		double t = h2->GetXaxis()->GetBinCenter(i_xbin+1);
    		double t_mod = t - g2period*i_period;//-lo; 

 /*   		cout<<"i_xbin = "<<i_xbin<<endl;
    		cout<<"time = "<<t<<endl;
    		cout<<"mod time = "<<t_mod<<endl;*/

    		for(int i_ybin(0); i_ybin<h2->GetNbinsY(); i_ybin++) { 

    			h2_mod_tmp->SetBinContent(i_xbin_mod, i_ybin, h2->GetBinContent(i_xbin, i_ybin));

    		}
    		/*int i_xbin_mod = h2_mod->GetXaxis()->FindBin(t_mod);*/

    		i_xbin++;
    		i_xbin_mod++;
	    		
	    }

	    h2_mod->Add(h2_mod_tmp);

	    lo = lo + g2period;
	    hi = hi + g2period;

	}

	cout<<"---> N h2_mod = "<<h2_mod->GetEntries()<<endl;

	return h2_mod;

}
 

/*s*/

    	
  //  }
//
    		//while(h2->GetXaxis()->GetBinLowEdge(i_xbin+1) >= lo && h2->GetXaxis()->GetBinUpEdge(i_xbin+1) < hi) {
    		/*while(t >= lo && t < hi) {*/

/*	    		// Find the equiv x-bin 
	    		double t = h2->GetXaxis()->GetBinCenter(i_xbin+1);
	    		double t_mod = t - t*i_period; */




    		//}

    	

    		
/*
      double x = gr->GetPointX(i_point) - t_mod*i_fold;
      double ex = gr->GetErrorX(i_point);
      double y = gr->GetPointY(i_point);
      double ey = gr->GetErrorY(i_point);

      if(y == 0) { 
        i_point++;
        continue;
      }

      gr_tmp->SetPoint(i_point_mod, x, y);
      gr_tmp->SetPointError(i_point_mod, ex, ey); 

      i_point_mod++;
      i_point++;

    }*/


    //while(gr->GetPointX(i_point) >= lo && gr->GetPointX(i_point) < hi) {

/*		cout<<"\n"<<h2->GetXaxis()->GetBinLowEdge(h2->GetXaxis()->FindBin(lo))<<", "<<lo<<endl;
		cout<<h2->GetXaxis()->GetBinUpEdge(h2->GetXaxis()->FindBin(hi))<<", "<<hi<<endl;*/

		//for(int i_xbin(0); i_xbin<h2->GetNbinsX(); i_xbin++) {
/*	return h2_mod;

}*/

void FitStartTimeScan_Mod() { 

	std::string inputName = "../Plots/Data/dMu/Run-1/Plots/edmPlots_Run-1a_250MeV_1000_2500MeV_randomised_BQ.root";//to_string(step)+"MeV_"+qual+".root";
  	TFile *input = TFile::Open(inputName.c_str());

  	cout<<"---> Got file "<<inputName<<", "<<input<<endl;

  	//TH2D *h2 = (TH2D*)input->Get("SimultaneousAnalysis/S12S18_ThetaY_vs_Time_50ns");
  	TH2D *h2 = (TH2D*)input->Get("MomentumBinnedAnalysis/S12S18_ThetaY_vs_Time_20ns_1500_1750");

  	cout<<"---> Got hist "<<h2<<endl;

  	TH2D *h2_mod = GetModulo(h2);

  	DrawTH2(h2_mod, "", "../Images/test_modulo");

  	input->Close();

	return;
}