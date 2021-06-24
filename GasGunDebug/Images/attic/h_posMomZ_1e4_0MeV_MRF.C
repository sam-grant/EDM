void h_posMomZ_1e4_0MeV_MRF()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun 24 09:35:46 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *h_posMomZ__4 = new TH1F("h_posMomZ__4","",310,0,3100);
   h_posMomZ__4->SetBinContent(0,4196);
   h_posMomZ__4->SetBinContent(1,1610);
   h_posMomZ__4->SetBinContent(2,1547);
   h_posMomZ__4->SetBinContent(3,1250);
   h_posMomZ__4->SetBinContent(4,921);
   h_posMomZ__4->SetBinContent(5,454);
   h_posMomZ__4->SetBinContent(6,22);
   h_posMomZ__4->SetEntries(10000);
   h_posMomZ__4->GetXaxis()->SetTitle("Positron momentum Z [MeV]");
   h_posMomZ__4->GetXaxis()->SetRange(0,10);
   h_posMomZ__4->GetXaxis()->CenterTitle(true);
   h_posMomZ__4->GetXaxis()->SetLabelFont(42);
   h_posMomZ__4->GetXaxis()->SetLabelSize(0.035);
   h_posMomZ__4->GetXaxis()->SetTitleOffset(1.1);
   h_posMomZ__4->GetXaxis()->SetTitleFont(42);
   h_posMomZ__4->GetYaxis()->SetTitle("Entries");
   h_posMomZ__4->GetYaxis()->CenterTitle(true);
   h_posMomZ__4->GetYaxis()->SetNdivisions(4000510);
   h_posMomZ__4->GetYaxis()->SetLabelFont(42);
   h_posMomZ__4->GetYaxis()->SetLabelSize(0.035);
   h_posMomZ__4->GetYaxis()->SetTitleOffset(1.1);
   h_posMomZ__4->GetYaxis()->SetTitleFont(42);
   h_posMomZ__4->GetZaxis()->SetLabelFont(42);
   h_posMomZ__4->GetZaxis()->SetLabelSize(0.035);
   h_posMomZ__4->GetZaxis()->SetTitleSize(0.035);
   h_posMomZ__4->GetZaxis()->SetTitleFont(42);
   h_posMomZ__4->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
