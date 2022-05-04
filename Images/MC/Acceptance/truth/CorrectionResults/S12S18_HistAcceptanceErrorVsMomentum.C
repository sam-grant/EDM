void S12S18_HistAcceptanceErrorVsMomentum()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr 26 13:21:10 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *S12S18_diff__3 = new TH1D("S12S18_diff__3","S12S18",7,750,2500);
   S12S18_diff__3->SetBinContent(1,0.1526532);
   S12S18_diff__3->SetBinContent(2,0.02481251);
   S12S18_diff__3->SetBinContent(3,0.0110802);
   S12S18_diff__3->SetBinContent(4,0.02113442);
   S12S18_diff__3->SetBinContent(5,0.02616322);
   S12S18_diff__3->SetBinContent(6,0.07602786);
   S12S18_diff__3->SetBinContent(7,0.04948536);
   S12S18_diff__3->SetEntries(7);
   S12S18_diff__3->SetStats(0);
   S12S18_diff__3->SetLineWidth(3);
   S12S18_diff__3->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   S12S18_diff__3->GetXaxis()->CenterTitle(true);
   S12S18_diff__3->GetXaxis()->SetLabelFont(42);
   S12S18_diff__3->GetXaxis()->SetTitleSize(0.04);
   S12S18_diff__3->GetXaxis()->SetTitleOffset(1.1);
   S12S18_diff__3->GetXaxis()->SetTitleFont(42);
   S12S18_diff__3->GetYaxis()->SetTitle("Acceptance fractional uncertainty / 250 MeV");
   S12S18_diff__3->GetYaxis()->CenterTitle(true);
   S12S18_diff__3->GetYaxis()->SetNdivisions(4000510);
   S12S18_diff__3->GetYaxis()->SetLabelFont(42);
   S12S18_diff__3->GetYaxis()->SetTitleSize(0.04);
   S12S18_diff__3->GetYaxis()->SetTitleOffset(1.1);
   S12S18_diff__3->GetYaxis()->SetTitleFont(42);
   S12S18_diff__3->GetZaxis()->SetLabelFont(42);
   S12S18_diff__3->GetZaxis()->SetTitleOffset(1);
   S12S18_diff__3->GetZaxis()->SetTitleFont(42);
   S12S18_diff__3->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
