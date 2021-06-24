void h_posMomY_1e4_MRF()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun 24 09:45:38 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *h_posMomY__3 = new TH1F("h_posMomY__3","",20,-100,100);
   h_posMomY__3->SetBinContent(5,17);
   h_posMomY__3->SetBinContent(6,254);
   h_posMomY__3->SetBinContent(7,682);
   h_posMomY__3->SetBinContent(8,1080);
   h_posMomY__3->SetBinContent(9,1385);
   h_posMomY__3->SetBinContent(10,1614);
   h_posMomY__3->SetBinContent(11,1543);
   h_posMomY__3->SetBinContent(12,1318);
   h_posMomY__3->SetBinContent(13,1105);
   h_posMomY__3->SetBinContent(14,686);
   h_posMomY__3->SetBinContent(15,295);
   h_posMomY__3->SetBinContent(16,21);
   h_posMomY__3->SetEntries(10000);
   h_posMomY__3->GetXaxis()->SetTitle("Positron momentum Y [MeV]");
   h_posMomY__3->GetXaxis()->SetRange(1,20);
   h_posMomY__3->GetXaxis()->CenterTitle(true);
   h_posMomY__3->GetXaxis()->SetLabelFont(42);
   h_posMomY__3->GetXaxis()->SetLabelSize(0.035);
   h_posMomY__3->GetXaxis()->SetTitleOffset(1.1);
   h_posMomY__3->GetXaxis()->SetTitleFont(42);
   h_posMomY__3->GetYaxis()->SetTitle("Entries");
   h_posMomY__3->GetYaxis()->CenterTitle(true);
   h_posMomY__3->GetYaxis()->SetNdivisions(4000510);
   h_posMomY__3->GetYaxis()->SetLabelFont(42);
   h_posMomY__3->GetYaxis()->SetLabelSize(0.035);
   h_posMomY__3->GetYaxis()->SetTitleOffset(1.1);
   h_posMomY__3->GetYaxis()->SetTitleFont(42);
   h_posMomY__3->GetZaxis()->SetLabelFont(42);
   h_posMomY__3->GetZaxis()->SetLabelSize(0.035);
   h_posMomY__3->GetZaxis()->SetTitleSize(0.035);
   h_posMomY__3->GetZaxis()->SetTitleFont(42);
   h_posMomY__3->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
