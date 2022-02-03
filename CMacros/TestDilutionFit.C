/*void DrawRecoVertexFit(TGraphErrors *gr, int step, string fname, double ymin, double ymax) { 

  cout<<"---> Reco vertex fit"<<endl;

   TCanvas *c = new TCanvas(stn.c_str(),"c",800,600);

      gr->GetXaxis()->SetTitleSize(.04);
      gr->GetYaxis()->SetTitleSize(.04);
      gr->GetXaxis()->SetTitleOffset(1.1);
      gr->GetYaxis()->SetTitleOffset(1.25);
      gr->GetXaxis()->CenterTitle(true);
      gr->GetYaxis()->CenterTitle(true);
      gr->GetYaxis()->SetMaxDigits(4);

      // Set marker style & colour
      gr->SetMarkerStyle(20);
      gr->SetMarkerColor(kBlack);

      // EDIT
      // Set ranges
      gr->GetXaxis()->SetRangeUser(xmin, xmax);
      gr->GetYaxis()->SetRangeUser(ymin, ymax);

      TString title = ";Decay vertex momentum [MeV];d_{EDM} / "+to_string(step)+" MeV";
      gr->SetTitle(title);

      gr->Draw("AP");

      // Get function
      TF1 *fit = (TF1*)gr->GetFunction("ParabolaFunc");
      fit->SetLineColor(kRed);
      fit->SetLineWidth(3);
      fit->Draw("SAME");

      // Draw legend
      TLegend *l = new TLegend(0.125,0.79,0.875,0.89);
      l->SetBorderSize(0);
      l->SetNColumns(2);
      l->AddEntry(gr,"Sim: reco vertices");
      l->AddEntry(fit, "Fit: ap^{2}+bp+d_{0}");
      l->Draw("SAME");

      TPaveText *names = new TPaveText(0.15,0.20,0.30,0.45,"NDC");

      names->SetTextAlign(13);
      names->AddText("#chi^{2}/NDF");
      names->AddText("a [MeV^{-2}]") ; 
      names->AddText("b [MeV^{-1}]" );
      names->AddText("d_{0}");

      TPaveText *values = new TPaveText(0.40,0.20,0.55,0.45,"NDC");
      // TPaveText *values = new TPaveText(0.30,0.20,0.45,0.45,"NDC");

      values->SetTextAlign(33);
      values->AddText(Round(fit->GetChisquare()/fit->GetNDF(),3));
      if(stn!="S0S12S18") {
         values->AddText(Round(fit->GetParameter(0), 1)+"#pm"+Round(fit->GetParError(0), 1));
         values->AddText(Round(fit->GetParameter(1), 1)+"#pm"+Round(fit->GetParError(1), 1));
         values->AddText(Round(fit->GetParameter(2), 1)+"#pm"+Round(fit->GetParError(2), 1));
      } else {

         values->AddText("(-2#pm1)#times10^{-8}"); 
         values->AddText("(7#pm4)#times10^{-5}");
         values->AddText("0.02#pm0.03");
      }
 
      cout<<"\n*** Fit results ***"<<endl;
      cout<<"chi2/ndf = "<<fit->GetChisquare()/fit->GetNDF()<<endl;
      cout<<"a = "<<fit->GetParameter(0)<<"±"<<fit->GetParError(0)<<endl;
      cout<<"b = "<<fit->GetParameter(1)<<"±"<<fit->GetParError(1)<<endl;
      cout<<"d0 = "<<fit->GetParameter(2)<<"±"<<fit->GetParError(2)<<endl;
      cout<<"*** *** ***\n"<<endl;

      names->SetTextSize(26);
      names->SetTextFont(44);
      names->SetFillColor(0);
      values->SetFillColor(0);
      values->SetTextFont(44);
      values->SetTextSize(26);

      names->Draw("SAME");
      values->Draw("SAME");

      c->SaveAs((fname+"_"+stn+".pdf").c_str());
      c->SaveAs((fname+"_"+stn+".png").c_str());
      c->SaveAs((fname+"_"+stn+".C").c_str());

      delete c;

   }

   return;

}*/

void Run() {

  TString fn = "../Plots/MC/dMu/Dilution/dilutionCurves.reweight.root";//+name+"_"+frame+"_"+to_string(step)+"MeV_"+qual+"Q.root";//
  TFile *f = TFile::Open(fn);

  cout<<"Opened file "<<fn<<", "<<f<<endl;
  TGraphErrors *gr = (TGraphErrors*)f->Get("DilutionFits/BQ/Tracks/250MeV/d_vs_p/S0S12S18_trackReco");

  cout<<"Got graph "<<gr<<endl;

  // Now fit
  TF1 *fit = new TF1("fit", "[0] * ( ( ([1]*x) - 1)^2 * (2*([1]*x) +1) )", 750, 2750);

  fit->SetParameter(0, 1.35785e-01);
  fit->SetParameter(1, -1.27706e-04);
  gr->Fit(fit, "R");

  TCanvas *c = new TCanvas("c", "c", 800, 600);

  gr->GetYaxis()->SetRangeUser(0,0.12);
  gr->GetXaxis()->SetRangeUser(750,2750);

  gr->Draw("AP");

  cout<<"chi2/ndf = "<<fit->GetChisquare()/fit->GetNDF()<<endl;
  f->Close();

  return;

}

void TestDilutionFit() {

	Run();

	return;
}