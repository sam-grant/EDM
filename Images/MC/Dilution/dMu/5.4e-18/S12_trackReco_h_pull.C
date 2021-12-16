void S12_trackReco_h_pull()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  7 01:11:50 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *S12_trackReco_h_pull__2 = new TH1D("S12_trackReco_h_pull__2","",24,-3,3);
   S12_trackReco_h_pull__2->SetBinContent(7,1);
   S12_trackReco_h_pull__2->SetBinContent(8,1);
   S12_trackReco_h_pull__2->SetBinContent(12,1);
   S12_trackReco_h_pull__2->SetBinContent(13,1);
   S12_trackReco_h_pull__2->SetBinContent(14,3);
   S12_trackReco_h_pull__2->SetBinContent(18,1);
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
