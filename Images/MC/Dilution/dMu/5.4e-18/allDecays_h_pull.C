void allDecays_h_pull()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 20 00:05:56 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *allDecays_h_pull__6 = new TH1D("allDecays_h_pull__6","",24,-3,3);
   allDecays_h_pull__6->SetBinContent(5,1);
   allDecays_h_pull__6->SetBinContent(11,1);
   allDecays_h_pull__6->SetBinContent(12,2);
   allDecays_h_pull__6->SetBinContent(13,2);
   allDecays_h_pull__6->SetBinContent(15,1);
   allDecays_h_pull__6->SetBinContent(19,1);
   allDecays_h_pull__6->SetEntries(8);
   allDecays_h_pull__6->GetXaxis()->SetTitle("Pull [#sigma]");
   allDecays_h_pull__6->GetXaxis()->CenterTitle(true);
   allDecays_h_pull__6->GetXaxis()->SetLabelFont(42);
   allDecays_h_pull__6->GetXaxis()->SetTitleSize(0.04);
   allDecays_h_pull__6->GetXaxis()->SetTitleOffset(1.1);
   allDecays_h_pull__6->GetXaxis()->SetTitleFont(42);
   allDecays_h_pull__6->GetYaxis()->SetTitle(" Entries / 0.25 #sigma");
   allDecays_h_pull__6->GetYaxis()->CenterTitle(true);
   allDecays_h_pull__6->GetYaxis()->SetNdivisions(4000510);
   allDecays_h_pull__6->GetYaxis()->SetLabelFont(42);
   allDecays_h_pull__6->GetYaxis()->SetTitleSize(0.04);
   allDecays_h_pull__6->GetYaxis()->SetTitleOffset(1.1);
   allDecays_h_pull__6->GetYaxis()->SetTitleFont(42);
   allDecays_h_pull__6->GetZaxis()->SetLabelFont(42);
   allDecays_h_pull__6->GetZaxis()->SetTitleOffset(1);
   allDecays_h_pull__6->GetZaxis()->SetTitleFont(42);
   allDecays_h_pull__6->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
