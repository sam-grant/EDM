void h_posMomY_1e4_noPol_MRF()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun 24 19:12:17 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *h_posMomY__2 = new TH1F("h_posMomY__2","",20,-100,100);
   h_posMomY__2->SetBinContent(5,15);
   h_posMomY__2->SetBinContent(6,269);
   h_posMomY__2->SetBinContent(7,665);
   h_posMomY__2->SetBinContent(8,1081);
   h_posMomY__2->SetBinContent(9,1429);
   h_posMomY__2->SetBinContent(10,1593);
   h_posMomY__2->SetBinContent(11,1570);
   h_posMomY__2->SetBinContent(12,1367);
   h_posMomY__2->SetBinContent(13,1045);
   h_posMomY__2->SetBinContent(14,671);
   h_posMomY__2->SetBinContent(15,283);
   h_posMomY__2->SetBinContent(16,12);
   h_posMomY__2->SetEntries(10000);
   h_posMomY__2->GetXaxis()->SetTitle("Positron momentum Y [MeV]");
   h_posMomY__2->GetXaxis()->SetRange(1,20);
   h_posMomY__2->GetXaxis()->CenterTitle(true);
   h_posMomY__2->GetXaxis()->SetLabelFont(42);
   h_posMomY__2->GetXaxis()->SetTitleSize(0.04);
   h_posMomY__2->GetXaxis()->SetTitleOffset(1.1);
   h_posMomY__2->GetXaxis()->SetTitleFont(42);
   h_posMomY__2->GetYaxis()->SetTitle("Entries");
   h_posMomY__2->GetYaxis()->CenterTitle(true);
   h_posMomY__2->GetYaxis()->SetNdivisions(4000510);
   h_posMomY__2->GetYaxis()->SetLabelFont(42);
   h_posMomY__2->GetYaxis()->SetTitleSize(0.04);
   h_posMomY__2->GetYaxis()->SetTitleOffset(1.1);
   h_posMomY__2->GetYaxis()->SetTitleFont(42);
   h_posMomY__2->GetZaxis()->SetLabelFont(42);
   h_posMomY__2->GetZaxis()->SetTitleOffset(1);
   h_posMomY__2->GetZaxis()->SetTitleFont(42);
   h_posMomY__2->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
