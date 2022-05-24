void S0S12S18_h_pull_trackReco_WORLD_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May  9 12:57:37 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *S0S12S18_edmFit_pull__5 = new TH1D("S0S12S18_edmFit_pull__5","S0S12S18_",40,-5,5);
   S0S12S18_edmFit_pull__5->SetBinContent(11,1);
   S0S12S18_edmFit_pull__5->SetBinContent(14,2);
   S0S12S18_edmFit_pull__5->SetBinContent(16,1);
   S0S12S18_edmFit_pull__5->SetBinContent(17,3);
   S0S12S18_edmFit_pull__5->SetBinContent(18,2);
   S0S12S18_edmFit_pull__5->SetBinContent(19,1);
   S0S12S18_edmFit_pull__5->SetBinContent(20,6);
   S0S12S18_edmFit_pull__5->SetBinContent(21,1);
   S0S12S18_edmFit_pull__5->SetBinContent(22,1);
   S0S12S18_edmFit_pull__5->SetBinContent(23,4);
   S0S12S18_edmFit_pull__5->SetBinContent(24,2);
   S0S12S18_edmFit_pull__5->SetBinContent(25,2);
   S0S12S18_edmFit_pull__5->SetBinContent(26,1);
   S0S12S18_edmFit_pull__5->SetBinContent(27,1);
   S0S12S18_edmFit_pull__5->SetBinContent(28,1);
   S0S12S18_edmFit_pull__5->SetEntries(29);
   S0S12S18_edmFit_pull__5->GetXaxis()->SetTitle("Pull [#sigma]");
   S0S12S18_edmFit_pull__5->GetXaxis()->CenterTitle(true);
   S0S12S18_edmFit_pull__5->GetXaxis()->SetLabelFont(42);
   S0S12S18_edmFit_pull__5->GetXaxis()->SetTitleSize(0.04);
   S0S12S18_edmFit_pull__5->GetXaxis()->SetTitleOffset(1.1);
   S0S12S18_edmFit_pull__5->GetXaxis()->SetTitleFont(42);
   S0S12S18_edmFit_pull__5->GetYaxis()->SetTitle(" Entries / 0.25 #sigma");
   S0S12S18_edmFit_pull__5->GetYaxis()->CenterTitle(true);
   S0S12S18_edmFit_pull__5->GetYaxis()->SetNdivisions(4000510);
   S0S12S18_edmFit_pull__5->GetYaxis()->SetLabelFont(42);
   S0S12S18_edmFit_pull__5->GetYaxis()->SetTitleSize(0.04);
   S0S12S18_edmFit_pull__5->GetYaxis()->SetTitleOffset(1.1);
   S0S12S18_edmFit_pull__5->GetYaxis()->SetTitleFont(42);
   S0S12S18_edmFit_pull__5->GetZaxis()->SetLabelFont(42);
   S0S12S18_edmFit_pull__5->GetZaxis()->SetTitleOffset(1);
   S0S12S18_edmFit_pull__5->GetZaxis()->SetTitleFont(42);
   S0S12S18_edmFit_pull__5->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
