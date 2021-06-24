void h_posMomY_1e4_0MeV_WORLD()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun 24 09:45:17 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *h_posMomY__3 = new TH1F("h_posMomY__3","",20,-100,100);
   h_posMomY__3->SetBinContent(5,16);
   h_posMomY__3->SetBinContent(6,311);
   h_posMomY__3->SetBinContent(7,719);
   h_posMomY__3->SetBinContent(8,1086);
   h_posMomY__3->SetBinContent(9,1348);
   h_posMomY__3->SetBinContent(10,1467);
   h_posMomY__3->SetBinContent(11,1537);
   h_posMomY__3->SetBinContent(12,1446);
   h_posMomY__3->SetBinContent(13,1071);
   h_posMomY__3->SetBinContent(14,698);
   h_posMomY__3->SetBinContent(15,290);
   h_posMomY__3->SetBinContent(16,11);
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
