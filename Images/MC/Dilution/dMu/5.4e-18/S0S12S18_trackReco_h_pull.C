void S0S12S18_trackReco_h_pull()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 22 09:46:12 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *S0S12S18_trackReco_h_pull__5 = new TH1D("S0S12S18_trackReco_h_pull__5","",24,-3,3);
   S0S12S18_trackReco_h_pull__5->SetBinContent(6,1);
   S0S12S18_trackReco_h_pull__5->SetBinContent(7,2);
   S0S12S18_trackReco_h_pull__5->SetBinContent(12,1);
   S0S12S18_trackReco_h_pull__5->SetBinContent(13,1);
   S0S12S18_trackReco_h_pull__5->SetBinContent(15,1);
   S0S12S18_trackReco_h_pull__5->SetBinContent(16,1);
   S0S12S18_trackReco_h_pull__5->SetBinContent(21,1);
   S0S12S18_trackReco_h_pull__5->SetEntries(8);
   S0S12S18_trackReco_h_pull__5->GetXaxis()->SetTitle("Pull [#sigma]");
   S0S12S18_trackReco_h_pull__5->GetXaxis()->CenterTitle(true);
   S0S12S18_trackReco_h_pull__5->GetXaxis()->SetLabelFont(42);
   S0S12S18_trackReco_h_pull__5->GetXaxis()->SetTitleSize(0.04);
   S0S12S18_trackReco_h_pull__5->GetXaxis()->SetTitleOffset(1.1);
   S0S12S18_trackReco_h_pull__5->GetXaxis()->SetTitleFont(42);
   S0S12S18_trackReco_h_pull__5->GetYaxis()->SetTitle(" Entries / 0.25 #sigma");
   S0S12S18_trackReco_h_pull__5->GetYaxis()->CenterTitle(true);
   S0S12S18_trackReco_h_pull__5->GetYaxis()->SetNdivisions(4000510);
   S0S12S18_trackReco_h_pull__5->GetYaxis()->SetLabelFont(42);
   S0S12S18_trackReco_h_pull__5->GetYaxis()->SetTitleSize(0.04);
   S0S12S18_trackReco_h_pull__5->GetYaxis()->SetTitleOffset(1.1);
   S0S12S18_trackReco_h_pull__5->GetYaxis()->SetTitleFont(42);
   S0S12S18_trackReco_h_pull__5->GetZaxis()->SetLabelFont(42);
   S0S12S18_trackReco_h_pull__5->GetZaxis()->SetTitleOffset(1);
   S0S12S18_trackReco_h_pull__5->GetZaxis()->SetTitleFont(42);
   S0S12S18_trackReco_h_pull__5->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
