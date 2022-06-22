void h_pull_allDecays_WORLD_250MeV_AQ_noVertCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun  7 11:41:49 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *edmFit_pull__1 = new TH1D("edmFit_pull__1","",40,-5,5);
   edmFit_pull__1->SetBinContent(9,1);
   edmFit_pull__1->SetBinContent(14,1);
   edmFit_pull__1->SetBinContent(16,1);
   edmFit_pull__1->SetBinContent(17,1);
   edmFit_pull__1->SetBinContent(18,2);
   edmFit_pull__1->SetBinContent(19,4);
   edmFit_pull__1->SetBinContent(20,5);
   edmFit_pull__1->SetBinContent(21,4);
   edmFit_pull__1->SetBinContent(22,4);
   edmFit_pull__1->SetBinContent(23,1);
   edmFit_pull__1->SetBinContent(24,1);
   edmFit_pull__1->SetBinContent(26,3);
   edmFit_pull__1->SetBinContent(29,1);
   edmFit_pull__1->SetEntries(29);
   edmFit_pull__1->GetXaxis()->SetTitle("Pull [#sigma]");
   edmFit_pull__1->GetXaxis()->CenterTitle(true);
   edmFit_pull__1->GetXaxis()->SetLabelFont(42);
   edmFit_pull__1->GetXaxis()->SetTitleSize(0.04);
   edmFit_pull__1->GetXaxis()->SetTitleOffset(1.1);
   edmFit_pull__1->GetXaxis()->SetTitleFont(42);
   edmFit_pull__1->GetYaxis()->SetTitle(" Entries / 0.25 #sigma");
   edmFit_pull__1->GetYaxis()->CenterTitle(true);
   edmFit_pull__1->GetYaxis()->SetNdivisions(4000510);
   edmFit_pull__1->GetYaxis()->SetLabelFont(42);
   edmFit_pull__1->GetYaxis()->SetTitleSize(0.04);
   edmFit_pull__1->GetYaxis()->SetTitleOffset(1.1);
   edmFit_pull__1->GetYaxis()->SetTitleFont(42);
   edmFit_pull__1->GetZaxis()->SetLabelFont(42);
   edmFit_pull__1->GetZaxis()->SetTitleOffset(1);
   edmFit_pull__1->GetZaxis()->SetTitleFont(42);
   edmFit_pull__1->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
