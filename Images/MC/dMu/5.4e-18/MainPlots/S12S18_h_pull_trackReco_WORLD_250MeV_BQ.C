void S12S18_h_pull_trackReco_WORLD_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan 19 11:02:26 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *S12S18_edmFit_pull__4 = new TH1D("S12S18_edmFit_pull__4","S12S18_",40,-5,5);
   S12S18_edmFit_pull__4->SetBinContent(10,1);
   S12S18_edmFit_pull__4->SetBinContent(13,1);
   S12S18_edmFit_pull__4->SetBinContent(16,3);
   S12S18_edmFit_pull__4->SetBinContent(17,1);
   S12S18_edmFit_pull__4->SetBinContent(18,4);
   S12S18_edmFit_pull__4->SetBinContent(19,1);
   S12S18_edmFit_pull__4->SetBinContent(20,2);
   S12S18_edmFit_pull__4->SetBinContent(21,4);
   S12S18_edmFit_pull__4->SetBinContent(22,5);
   S12S18_edmFit_pull__4->SetBinContent(23,3);
   S12S18_edmFit_pull__4->SetBinContent(24,1);
   S12S18_edmFit_pull__4->SetBinContent(28,2);
   S12S18_edmFit_pull__4->SetBinContent(32,1);
   S12S18_edmFit_pull__4->SetEntries(29);
   S12S18_edmFit_pull__4->GetXaxis()->SetTitle("Pull [#sigma]");
   S12S18_edmFit_pull__4->GetXaxis()->CenterTitle(true);
   S12S18_edmFit_pull__4->GetXaxis()->SetLabelFont(42);
   S12S18_edmFit_pull__4->GetXaxis()->SetTitleSize(0.04);
   S12S18_edmFit_pull__4->GetXaxis()->SetTitleOffset(1.1);
   S12S18_edmFit_pull__4->GetXaxis()->SetTitleFont(42);
   S12S18_edmFit_pull__4->GetYaxis()->SetTitle(" Entries / 0.25 #sigma");
   S12S18_edmFit_pull__4->GetYaxis()->CenterTitle(true);
   S12S18_edmFit_pull__4->GetYaxis()->SetNdivisions(4000510);
   S12S18_edmFit_pull__4->GetYaxis()->SetLabelFont(42);
   S12S18_edmFit_pull__4->GetYaxis()->SetTitleSize(0.04);
   S12S18_edmFit_pull__4->GetYaxis()->SetTitleOffset(1.1);
   S12S18_edmFit_pull__4->GetYaxis()->SetTitleFont(42);
   S12S18_edmFit_pull__4->GetZaxis()->SetLabelFont(42);
   S12S18_edmFit_pull__4->GetZaxis()->SetTitleOffset(1);
   S12S18_edmFit_pull__4->GetZaxis()->SetTitleFont(42);
   S12S18_edmFit_pull__4->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
