void h_posMomX_1e4_xPol_LAB()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun 24 19:59:19 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *h_posMomX__2 = new TH1F("h_posMomX__2","",20,-100,100);
   h_posMomX__2->SetBinContent(5,10);
   h_posMomX__2->SetBinContent(6,300);
   h_posMomX__2->SetBinContent(7,636);
   h_posMomX__2->SetBinContent(8,1049);
   h_posMomX__2->SetBinContent(9,1446);
   h_posMomX__2->SetBinContent(10,1580);
   h_posMomX__2->SetBinContent(11,1568);
   h_posMomX__2->SetBinContent(12,1342);
   h_posMomX__2->SetBinContent(13,1055);
   h_posMomX__2->SetBinContent(14,696);
   h_posMomX__2->SetBinContent(15,298);
   h_posMomX__2->SetBinContent(16,20);
   h_posMomX__2->SetEntries(10000);
   h_posMomX__2->GetXaxis()->SetTitle("Positron momentum X [MeV]");
   h_posMomX__2->GetXaxis()->CenterTitle(true);
   h_posMomX__2->GetXaxis()->SetLabelFont(42);
   h_posMomX__2->GetXaxis()->SetTitleSize(0.04);
   h_posMomX__2->GetXaxis()->SetTitleOffset(1.1);
   h_posMomX__2->GetXaxis()->SetTitleFont(42);
   h_posMomX__2->GetYaxis()->SetTitle("Entries");
   h_posMomX__2->GetYaxis()->CenterTitle(true);
   h_posMomX__2->GetYaxis()->SetNdivisions(4000510);
   h_posMomX__2->GetYaxis()->SetLabelFont(42);
   h_posMomX__2->GetYaxis()->SetTitleSize(0.04);
   h_posMomX__2->GetYaxis()->SetTitleOffset(1.1);
   h_posMomX__2->GetYaxis()->SetTitleFont(42);
   h_posMomX__2->GetZaxis()->SetLabelFont(42);
   h_posMomX__2->GetZaxis()->SetTitleOffset(1);
   h_posMomX__2->GetZaxis()->SetTitleFont(42);
   h_posMomX__2->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
