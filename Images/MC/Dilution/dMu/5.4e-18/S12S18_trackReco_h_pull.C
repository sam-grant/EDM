void S12S18_trackReco_h_pull()
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
   
   TH1D *S12S18_trackReco_h_pull__4 = new TH1D("S12S18_trackReco_h_pull__4","",24,-3,3);
   S12S18_trackReco_h_pull__4->SetBinContent(4,1);
   S12S18_trackReco_h_pull__4->SetBinContent(8,2);
   S12S18_trackReco_h_pull__4->SetBinContent(11,1);
   S12S18_trackReco_h_pull__4->SetBinContent(15,1);
   S12S18_trackReco_h_pull__4->SetBinContent(16,1);
   S12S18_trackReco_h_pull__4->SetBinContent(18,2);
   S12S18_trackReco_h_pull__4->SetEntries(8);
   S12S18_trackReco_h_pull__4->GetXaxis()->SetTitle("Pull [#sigma]");
   S12S18_trackReco_h_pull__4->GetXaxis()->CenterTitle(true);
   S12S18_trackReco_h_pull__4->GetXaxis()->SetLabelFont(42);
   S12S18_trackReco_h_pull__4->GetXaxis()->SetTitleSize(0.04);
   S12S18_trackReco_h_pull__4->GetXaxis()->SetTitleOffset(1.1);
   S12S18_trackReco_h_pull__4->GetXaxis()->SetTitleFont(42);
   S12S18_trackReco_h_pull__4->GetYaxis()->SetTitle(" Entries / 0.25 #sigma");
   S12S18_trackReco_h_pull__4->GetYaxis()->CenterTitle(true);
   S12S18_trackReco_h_pull__4->GetYaxis()->SetNdivisions(4000510);
   S12S18_trackReco_h_pull__4->GetYaxis()->SetLabelFont(42);
   S12S18_trackReco_h_pull__4->GetYaxis()->SetTitleSize(0.04);
   S12S18_trackReco_h_pull__4->GetYaxis()->SetTitleOffset(1.1);
   S12S18_trackReco_h_pull__4->GetYaxis()->SetTitleFont(42);
   S12S18_trackReco_h_pull__4->GetZaxis()->SetLabelFont(42);
   S12S18_trackReco_h_pull__4->GetZaxis()->SetTitleOffset(1);
   S12S18_trackReco_h_pull__4->GetZaxis()->SetTitleFont(42);
   S12S18_trackReco_h_pull__4->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
