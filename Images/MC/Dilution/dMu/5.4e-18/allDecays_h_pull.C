void allDecays_h_pull()
{
//=========Macro generated from canvas: c/c
//=========  (Sat May  7 21:53:57 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *allDecays_h_pull__1 = new TH1D("allDecays_h_pull__1","",24,-3,3);
   allDecays_h_pull__1->SetBinContent(1,1);
   allDecays_h_pull__1->SetBinContent(12,1);
   allDecays_h_pull__1->SetBinContent(13,2);
   allDecays_h_pull__1->SetBinContent(14,3);
   allDecays_h_pull__1->SetEntries(7);
   allDecays_h_pull__1->GetXaxis()->SetTitle("Pull [#sigma]");
   allDecays_h_pull__1->GetXaxis()->CenterTitle(true);
   allDecays_h_pull__1->GetXaxis()->SetLabelFont(42);
   allDecays_h_pull__1->GetXaxis()->SetTitleSize(0.04);
   allDecays_h_pull__1->GetXaxis()->SetTitleOffset(1.1);
   allDecays_h_pull__1->GetXaxis()->SetTitleFont(42);
   allDecays_h_pull__1->GetYaxis()->SetTitle(" Entries / 0.25 #sigma");
   allDecays_h_pull__1->GetYaxis()->CenterTitle(true);
   allDecays_h_pull__1->GetYaxis()->SetNdivisions(4000510);
   allDecays_h_pull__1->GetYaxis()->SetLabelFont(42);
   allDecays_h_pull__1->GetYaxis()->SetTitleSize(0.04);
   allDecays_h_pull__1->GetYaxis()->SetTitleOffset(1.1);
   allDecays_h_pull__1->GetYaxis()->SetTitleFont(42);
   allDecays_h_pull__1->GetZaxis()->SetLabelFont(42);
   allDecays_h_pull__1->GetZaxis()->SetTitleOffset(1);
   allDecays_h_pull__1->GetZaxis()->SetTitleFont(42);
   allDecays_h_pull__1->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
