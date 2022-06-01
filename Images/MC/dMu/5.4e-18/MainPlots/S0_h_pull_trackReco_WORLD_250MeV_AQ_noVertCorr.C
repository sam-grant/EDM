void S0_h_pull_trackReco_WORLD_250MeV_AQ_noVertCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:19:24 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *S0_edmFit_pull__1 = new TH1D("S0_edmFit_pull__1","S0_",40,-5,5);
   S0_edmFit_pull__1->SetBinContent(10,1);
   S0_edmFit_pull__1->SetBinContent(14,1);
   S0_edmFit_pull__1->SetBinContent(15,1);
   S0_edmFit_pull__1->SetBinContent(16,2);
   S0_edmFit_pull__1->SetBinContent(18,3);
   S0_edmFit_pull__1->SetBinContent(19,4);
   S0_edmFit_pull__1->SetBinContent(20,3);
   S0_edmFit_pull__1->SetBinContent(21,2);
   S0_edmFit_pull__1->SetBinContent(22,4);
   S0_edmFit_pull__1->SetBinContent(23,1);
   S0_edmFit_pull__1->SetBinContent(24,3);
   S0_edmFit_pull__1->SetBinContent(26,2);
   S0_edmFit_pull__1->SetBinContent(27,1);
   S0_edmFit_pull__1->SetBinContent(29,1);
   S0_edmFit_pull__1->SetEntries(29);
   S0_edmFit_pull__1->GetXaxis()->SetTitle("Pull [#sigma]");
   S0_edmFit_pull__1->GetXaxis()->CenterTitle(true);
   S0_edmFit_pull__1->GetXaxis()->SetLabelFont(42);
   S0_edmFit_pull__1->GetXaxis()->SetTitleSize(0.04);
   S0_edmFit_pull__1->GetXaxis()->SetTitleOffset(1.1);
   S0_edmFit_pull__1->GetXaxis()->SetTitleFont(42);
   S0_edmFit_pull__1->GetYaxis()->SetTitle(" Entries / 0.25 #sigma");
   S0_edmFit_pull__1->GetYaxis()->CenterTitle(true);
   S0_edmFit_pull__1->GetYaxis()->SetNdivisions(4000510);
   S0_edmFit_pull__1->GetYaxis()->SetLabelFont(42);
   S0_edmFit_pull__1->GetYaxis()->SetTitleSize(0.04);
   S0_edmFit_pull__1->GetYaxis()->SetTitleOffset(1.1);
   S0_edmFit_pull__1->GetYaxis()->SetTitleFont(42);
   S0_edmFit_pull__1->GetZaxis()->SetLabelFont(42);
   S0_edmFit_pull__1->GetZaxis()->SetTitleOffset(1);
   S0_edmFit_pull__1->GetZaxis()->SetTitleFont(42);
   S0_edmFit_pull__1->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
