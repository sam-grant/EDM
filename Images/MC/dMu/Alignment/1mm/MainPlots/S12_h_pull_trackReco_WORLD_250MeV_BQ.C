void S12_h_pull_trackReco_WORLD_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 31 18:51:12 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *S12_edmFit_pull__2 = new TH1D("S12_edmFit_pull__2","S12_",40,-5,5);
   S12_edmFit_pull__2->SetBinContent(11,1);
   S12_edmFit_pull__2->SetBinContent(12,1);
   S12_edmFit_pull__2->SetBinContent(13,1);
   S12_edmFit_pull__2->SetBinContent(16,1);
   S12_edmFit_pull__2->SetBinContent(17,1);
   S12_edmFit_pull__2->SetBinContent(18,3);
   S12_edmFit_pull__2->SetBinContent(19,6);
   S12_edmFit_pull__2->SetBinContent(20,2);
   S12_edmFit_pull__2->SetBinContent(21,2);
   S12_edmFit_pull__2->SetBinContent(23,1);
   S12_edmFit_pull__2->SetBinContent(24,6);
   S12_edmFit_pull__2->SetBinContent(25,1);
   S12_edmFit_pull__2->SetBinContent(27,2);
   S12_edmFit_pull__2->SetBinContent(28,1);
   S12_edmFit_pull__2->SetEntries(29);
   S12_edmFit_pull__2->GetXaxis()->SetTitle("Pull [#sigma]");
   S12_edmFit_pull__2->GetXaxis()->CenterTitle(true);
   S12_edmFit_pull__2->GetXaxis()->SetLabelFont(42);
   S12_edmFit_pull__2->GetXaxis()->SetTitleSize(0.04);
   S12_edmFit_pull__2->GetXaxis()->SetTitleOffset(1.1);
   S12_edmFit_pull__2->GetXaxis()->SetTitleFont(42);
   S12_edmFit_pull__2->GetYaxis()->SetTitle(" Entries / 0.25 #sigma");
   S12_edmFit_pull__2->GetYaxis()->CenterTitle(true);
   S12_edmFit_pull__2->GetYaxis()->SetNdivisions(4000510);
   S12_edmFit_pull__2->GetYaxis()->SetLabelFont(42);
   S12_edmFit_pull__2->GetYaxis()->SetTitleSize(0.04);
   S12_edmFit_pull__2->GetYaxis()->SetTitleOffset(1.1);
   S12_edmFit_pull__2->GetYaxis()->SetTitleFont(42);
   S12_edmFit_pull__2->GetZaxis()->SetLabelFont(42);
   S12_edmFit_pull__2->GetZaxis()->SetTitleOffset(1);
   S12_edmFit_pull__2->GetZaxis()->SetTitleFont(42);
   S12_edmFit_pull__2->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
