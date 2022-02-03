void S18_trackReco_h_pull()
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
   
   TH1D *S18_trackReco_h_pull__3 = new TH1D("S18_trackReco_h_pull__3","",24,-3,3);
   S18_trackReco_h_pull__3->SetBinContent(4,1);
   S18_trackReco_h_pull__3->SetBinContent(8,1);
   S18_trackReco_h_pull__3->SetBinContent(9,1);
   S18_trackReco_h_pull__3->SetBinContent(11,1);
   S18_trackReco_h_pull__3->SetBinContent(13,1);
   S18_trackReco_h_pull__3->SetBinContent(14,1);
   S18_trackReco_h_pull__3->SetBinContent(18,1);
   S18_trackReco_h_pull__3->SetBinContent(21,1);
   S18_trackReco_h_pull__3->SetEntries(8);
   S18_trackReco_h_pull__3->GetXaxis()->SetTitle("Pull [#sigma]");
   S18_trackReco_h_pull__3->GetXaxis()->CenterTitle(true);
   S18_trackReco_h_pull__3->GetXaxis()->SetLabelFont(42);
   S18_trackReco_h_pull__3->GetXaxis()->SetTitleSize(0.04);
   S18_trackReco_h_pull__3->GetXaxis()->SetTitleOffset(1.1);
   S18_trackReco_h_pull__3->GetXaxis()->SetTitleFont(42);
   S18_trackReco_h_pull__3->GetYaxis()->SetTitle(" Entries / 0.25 #sigma");
   S18_trackReco_h_pull__3->GetYaxis()->CenterTitle(true);
   S18_trackReco_h_pull__3->GetYaxis()->SetNdivisions(4000510);
   S18_trackReco_h_pull__3->GetYaxis()->SetLabelFont(42);
   S18_trackReco_h_pull__3->GetYaxis()->SetTitleSize(0.04);
   S18_trackReco_h_pull__3->GetYaxis()->SetTitleOffset(1.1);
   S18_trackReco_h_pull__3->GetYaxis()->SetTitleFont(42);
   S18_trackReco_h_pull__3->GetZaxis()->SetLabelFont(42);
   S18_trackReco_h_pull__3->GetZaxis()->SetTitleOffset(1);
   S18_trackReco_h_pull__3->GetZaxis()->SetTitleFont(42);
   S18_trackReco_h_pull__3->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
