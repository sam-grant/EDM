void S0_trackReco_h_pull()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb  3 13:23:09 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *S0_trackReco_h_pull__1 = new TH1D("S0_trackReco_h_pull__1","",24,-3,3);
   S0_trackReco_h_pull__1->SetBinContent(7,1);
   S0_trackReco_h_pull__1->SetBinContent(9,1);
   S0_trackReco_h_pull__1->SetBinContent(11,1);
   S0_trackReco_h_pull__1->SetBinContent(12,1);
   S0_trackReco_h_pull__1->SetBinContent(14,2);
   S0_trackReco_h_pull__1->SetBinContent(16,1);
   S0_trackReco_h_pull__1->SetBinContent(17,1);
   S0_trackReco_h_pull__1->SetEntries(8);
   S0_trackReco_h_pull__1->GetXaxis()->SetTitle("Pull [#sigma]");
   S0_trackReco_h_pull__1->GetXaxis()->CenterTitle(true);
   S0_trackReco_h_pull__1->GetXaxis()->SetLabelFont(42);
   S0_trackReco_h_pull__1->GetXaxis()->SetTitleSize(0.04);
   S0_trackReco_h_pull__1->GetXaxis()->SetTitleOffset(1.1);
   S0_trackReco_h_pull__1->GetXaxis()->SetTitleFont(42);
   S0_trackReco_h_pull__1->GetYaxis()->SetTitle(" Entries / 0.25 #sigma");
   S0_trackReco_h_pull__1->GetYaxis()->CenterTitle(true);
   S0_trackReco_h_pull__1->GetYaxis()->SetNdivisions(4000510);
   S0_trackReco_h_pull__1->GetYaxis()->SetLabelFont(42);
   S0_trackReco_h_pull__1->GetYaxis()->SetTitleSize(0.04);
   S0_trackReco_h_pull__1->GetYaxis()->SetTitleOffset(1.1);
   S0_trackReco_h_pull__1->GetYaxis()->SetTitleFont(42);
   S0_trackReco_h_pull__1->GetZaxis()->SetLabelFont(42);
   S0_trackReco_h_pull__1->GetZaxis()->SetTitleOffset(1);
   S0_trackReco_h_pull__1->GetZaxis()->SetTitleFont(42);
   S0_trackReco_h_pull__1->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
