void S12_trackReco_h_pull()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb  3 14:38:46 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *S12_trackReco_h_pull__2 = new TH1D("S12_trackReco_h_pull__2","",24,-3,3);
   S12_trackReco_h_pull__2->SetBinContent(5,1);
   S12_trackReco_h_pull__2->SetBinContent(9,2);
   S12_trackReco_h_pull__2->SetBinContent(12,2);
   S12_trackReco_h_pull__2->SetBinContent(15,1);
   S12_trackReco_h_pull__2->SetBinContent(19,2);
   S12_trackReco_h_pull__2->SetEntries(8);
   S12_trackReco_h_pull__2->GetXaxis()->SetTitle("Pull [#sigma]");
   S12_trackReco_h_pull__2->GetXaxis()->CenterTitle(true);
   S12_trackReco_h_pull__2->GetXaxis()->SetLabelFont(42);
   S12_trackReco_h_pull__2->GetXaxis()->SetTitleSize(0.04);
   S12_trackReco_h_pull__2->GetXaxis()->SetTitleOffset(1.1);
   S12_trackReco_h_pull__2->GetXaxis()->SetTitleFont(42);
   S12_trackReco_h_pull__2->GetYaxis()->SetTitle(" Entries / 0.25 #sigma");
   S12_trackReco_h_pull__2->GetYaxis()->CenterTitle(true);
   S12_trackReco_h_pull__2->GetYaxis()->SetNdivisions(4000510);
   S12_trackReco_h_pull__2->GetYaxis()->SetLabelFont(42);
   S12_trackReco_h_pull__2->GetYaxis()->SetTitleSize(0.04);
   S12_trackReco_h_pull__2->GetYaxis()->SetTitleOffset(1.1);
   S12_trackReco_h_pull__2->GetYaxis()->SetTitleFont(42);
   S12_trackReco_h_pull__2->GetZaxis()->SetLabelFont(42);
   S12_trackReco_h_pull__2->GetZaxis()->SetTitleOffset(1);
   S12_trackReco_h_pull__2->GetZaxis()->SetTitleFont(42);
   S12_trackReco_h_pull__2->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
