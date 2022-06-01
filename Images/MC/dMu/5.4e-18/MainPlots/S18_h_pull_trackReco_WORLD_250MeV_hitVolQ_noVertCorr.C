void S18_h_pull_trackReco_WORLD_250MeV_hitVolQ_noVertCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:37:32 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *S18_edmFit_pull__3 = new TH1D("S18_edmFit_pull__3","S18_",40,-5,5);
   S18_edmFit_pull__3->SetBinContent(12,1);
   S18_edmFit_pull__3->SetBinContent(14,1);
   S18_edmFit_pull__3->SetBinContent(15,1);
   S18_edmFit_pull__3->SetBinContent(16,2);
   S18_edmFit_pull__3->SetBinContent(17,2);
   S18_edmFit_pull__3->SetBinContent(18,3);
   S18_edmFit_pull__3->SetBinContent(19,2);
   S18_edmFit_pull__3->SetBinContent(20,3);
   S18_edmFit_pull__3->SetBinContent(21,1);
   S18_edmFit_pull__3->SetBinContent(22,5);
   S18_edmFit_pull__3->SetBinContent(23,1);
   S18_edmFit_pull__3->SetBinContent(24,2);
   S18_edmFit_pull__3->SetBinContent(25,2);
   S18_edmFit_pull__3->SetBinContent(28,2);
   S18_edmFit_pull__3->SetBinContent(29,1);
   S18_edmFit_pull__3->SetEntries(29);
   S18_edmFit_pull__3->GetXaxis()->SetTitle("Pull [#sigma]");
   S18_edmFit_pull__3->GetXaxis()->CenterTitle(true);
   S18_edmFit_pull__3->GetXaxis()->SetLabelFont(42);
   S18_edmFit_pull__3->GetXaxis()->SetTitleSize(0.04);
   S18_edmFit_pull__3->GetXaxis()->SetTitleOffset(1.1);
   S18_edmFit_pull__3->GetXaxis()->SetTitleFont(42);
   S18_edmFit_pull__3->GetYaxis()->SetTitle(" Entries / 0.25 #sigma");
   S18_edmFit_pull__3->GetYaxis()->CenterTitle(true);
   S18_edmFit_pull__3->GetYaxis()->SetNdivisions(4000510);
   S18_edmFit_pull__3->GetYaxis()->SetLabelFont(42);
   S18_edmFit_pull__3->GetYaxis()->SetTitleSize(0.04);
   S18_edmFit_pull__3->GetYaxis()->SetTitleOffset(1.1);
   S18_edmFit_pull__3->GetYaxis()->SetTitleFont(42);
   S18_edmFit_pull__3->GetZaxis()->SetLabelFont(42);
   S18_edmFit_pull__3->GetZaxis()->SetTitleOffset(1);
   S18_edmFit_pull__3->GetZaxis()->SetTitleFont(42);
   S18_edmFit_pull__3->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
