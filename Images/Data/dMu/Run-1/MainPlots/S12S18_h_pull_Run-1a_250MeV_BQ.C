void S12S18_h_pull_Run-1a_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 29 11:18:48 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *S12S18_edmFit_pull__3 = new TH1D("S12S18_edmFit_pull__3","S12S18",40,-5,5);
   S12S18_edmFit_pull__3->SetBinContent(10,1);
   S12S18_edmFit_pull__3->SetBinContent(12,1);
   S12S18_edmFit_pull__3->SetBinContent(15,1);
   S12S18_edmFit_pull__3->SetBinContent(16,1);
   S12S18_edmFit_pull__3->SetBinContent(17,2);
   S12S18_edmFit_pull__3->SetBinContent(18,1);
   S12S18_edmFit_pull__3->SetBinContent(19,2);
   S12S18_edmFit_pull__3->SetBinContent(20,3);
   S12S18_edmFit_pull__3->SetBinContent(21,5);
   S12S18_edmFit_pull__3->SetBinContent(22,4);
   S12S18_edmFit_pull__3->SetBinContent(23,2);
   S12S18_edmFit_pull__3->SetBinContent(24,1);
   S12S18_edmFit_pull__3->SetBinContent(25,3);
   S12S18_edmFit_pull__3->SetBinContent(27,2);
   S12S18_edmFit_pull__3->SetEntries(29);
   S12S18_edmFit_pull__3->GetXaxis()->SetTitle("Pull [#sigma]");
   S12S18_edmFit_pull__3->GetXaxis()->CenterTitle(true);
   S12S18_edmFit_pull__3->GetXaxis()->SetLabelFont(42);
   S12S18_edmFit_pull__3->GetXaxis()->SetTitleSize(0.04);
   S12S18_edmFit_pull__3->GetXaxis()->SetTitleOffset(1.1);
   S12S18_edmFit_pull__3->GetXaxis()->SetTitleFont(42);
   S12S18_edmFit_pull__3->GetYaxis()->SetTitle(" Entries / 0.25 #sigma");
   S12S18_edmFit_pull__3->GetYaxis()->CenterTitle(true);
   S12S18_edmFit_pull__3->GetYaxis()->SetNdivisions(4000510);
   S12S18_edmFit_pull__3->GetYaxis()->SetLabelFont(42);
   S12S18_edmFit_pull__3->GetYaxis()->SetTitleSize(0.04);
   S12S18_edmFit_pull__3->GetYaxis()->SetTitleOffset(1.1);
   S12S18_edmFit_pull__3->GetYaxis()->SetTitleFont(42);
   S12S18_edmFit_pull__3->GetZaxis()->SetLabelFont(42);
   S12S18_edmFit_pull__3->GetZaxis()->SetTitleOffset(1);
   S12S18_edmFit_pull__3->GetZaxis()->SetTitleFont(42);
   S12S18_edmFit_pull__3->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
