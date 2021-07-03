void h_posMomY_1e4_xPol_LAB()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun 24 19:59:19 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *h_posMomY__3 = new TH1F("h_posMomY__3","",20,-100,100);
   h_posMomY__3->SetBinContent(6,95);
   h_posMomY__3->SetBinContent(7,443);
   h_posMomY__3->SetBinContent(8,782);
   h_posMomY__3->SetBinContent(9,1264);
   h_posMomY__3->SetBinContent(10,1586);
   h_posMomY__3->SetBinContent(11,1668);
   h_posMomY__3->SetBinContent(12,1434);
   h_posMomY__3->SetBinContent(13,1295);
   h_posMomY__3->SetBinContent(14,919);
   h_posMomY__3->SetBinContent(15,487);
   h_posMomY__3->SetBinContent(16,27);
   h_posMomY__3->SetEntries(10000);
   h_posMomY__3->GetXaxis()->SetTitle("Positron momentum Y [MeV]");
   h_posMomY__3->GetXaxis()->CenterTitle(true);
   h_posMomY__3->GetXaxis()->SetLabelFont(42);
   h_posMomY__3->GetXaxis()->SetTitleSize(0.04);
   h_posMomY__3->GetXaxis()->SetTitleOffset(1.1);
   h_posMomY__3->GetXaxis()->SetTitleFont(42);
   h_posMomY__3->GetYaxis()->SetTitle("Entries");
   h_posMomY__3->GetYaxis()->CenterTitle(true);
   h_posMomY__3->GetYaxis()->SetNdivisions(4000510);
   h_posMomY__3->GetYaxis()->SetLabelFont(42);
   h_posMomY__3->GetYaxis()->SetTitleSize(0.04);
   h_posMomY__3->GetYaxis()->SetTitleOffset(1.1);
   h_posMomY__3->GetYaxis()->SetTitleFont(42);
   h_posMomY__3->GetZaxis()->SetLabelFont(42);
   h_posMomY__3->GetZaxis()->SetTitleOffset(1);
   h_posMomY__3->GetZaxis()->SetTitleFont(42);
   h_posMomY__3->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
