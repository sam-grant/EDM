void h_posMomZ_1e4_noPol_MRF()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun 24 19:12:17 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *h_posMomZ__3 = new TH1F("h_posMomZ__3","",20,-100,100);
   h_posMomZ__3->SetBinContent(5,15);
   h_posMomZ__3->SetBinContent(6,265);
   h_posMomZ__3->SetBinContent(7,691);
   h_posMomZ__3->SetBinContent(8,1028);
   h_posMomZ__3->SetBinContent(9,1423);
   h_posMomZ__3->SetBinContent(10,1593);
   h_posMomZ__3->SetBinContent(11,1561);
   h_posMomZ__3->SetBinContent(12,1383);
   h_posMomZ__3->SetBinContent(13,1046);
   h_posMomZ__3->SetBinContent(14,673);
   h_posMomZ__3->SetBinContent(15,310);
   h_posMomZ__3->SetBinContent(16,12);
   h_posMomZ__3->SetEntries(10000);
   h_posMomZ__3->GetXaxis()->SetTitle("Positron momentum Z [MeV]");
   h_posMomZ__3->GetXaxis()->SetRange(1,20);
   h_posMomZ__3->GetXaxis()->CenterTitle(true);
   h_posMomZ__3->GetXaxis()->SetLabelFont(42);
   h_posMomZ__3->GetXaxis()->SetTitleSize(0.04);
   h_posMomZ__3->GetXaxis()->SetTitleOffset(1.1);
   h_posMomZ__3->GetXaxis()->SetTitleFont(42);
   h_posMomZ__3->GetYaxis()->SetTitle("Entries");
   h_posMomZ__3->GetYaxis()->CenterTitle(true);
   h_posMomZ__3->GetYaxis()->SetNdivisions(4000510);
   h_posMomZ__3->GetYaxis()->SetLabelFont(42);
   h_posMomZ__3->GetYaxis()->SetTitleSize(0.04);
   h_posMomZ__3->GetYaxis()->SetTitleOffset(1.1);
   h_posMomZ__3->GetYaxis()->SetTitleFont(42);
   h_posMomZ__3->GetZaxis()->SetLabelFont(42);
   h_posMomZ__3->GetZaxis()->SetTitleOffset(1);
   h_posMomZ__3->GetZaxis()->SetTitleFont(42);
   h_posMomZ__3->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
