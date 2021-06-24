void h_posMomX_1e4_0MeV_MRF()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun 24 09:45:28 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *h_posMomX__2 = new TH1F("h_posMomX__2","",20,-100,100);
   h_posMomX__2->SetBinContent(5,14);
   h_posMomX__2->SetBinContent(6,269);
   h_posMomX__2->SetBinContent(7,683);
   h_posMomX__2->SetBinContent(8,997);
   h_posMomX__2->SetBinContent(9,1408);
   h_posMomX__2->SetBinContent(10,1553);
   h_posMomX__2->SetBinContent(11,1625);
   h_posMomX__2->SetBinContent(12,1416);
   h_posMomX__2->SetBinContent(13,1044);
   h_posMomX__2->SetBinContent(14,713);
   h_posMomX__2->SetBinContent(15,259);
   h_posMomX__2->SetBinContent(16,19);
   h_posMomX__2->SetEntries(10000);
   h_posMomX__2->GetXaxis()->SetTitle("Positron momentum X [MeV]");
   h_posMomX__2->GetXaxis()->SetRange(1,20);
   h_posMomX__2->GetXaxis()->CenterTitle(true);
   h_posMomX__2->GetXaxis()->SetLabelFont(42);
   h_posMomX__2->GetXaxis()->SetLabelSize(0.035);
   h_posMomX__2->GetXaxis()->SetTitleOffset(1.1);
   h_posMomX__2->GetXaxis()->SetTitleFont(42);
   h_posMomX__2->GetYaxis()->SetTitle("Entries");
   h_posMomX__2->GetYaxis()->CenterTitle(true);
   h_posMomX__2->GetYaxis()->SetNdivisions(4000510);
   h_posMomX__2->GetYaxis()->SetLabelFont(42);
   h_posMomX__2->GetYaxis()->SetLabelSize(0.035);
   h_posMomX__2->GetYaxis()->SetTitleOffset(1.1);
   h_posMomX__2->GetYaxis()->SetTitleFont(42);
   h_posMomX__2->GetZaxis()->SetLabelFont(42);
   h_posMomX__2->GetZaxis()->SetLabelSize(0.035);
   h_posMomX__2->GetZaxis()->SetTitleSize(0.035);
   h_posMomX__2->GetZaxis()->SetTitleFont(42);
   h_posMomX__2->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
