void h_posMomX_1e4_noPol_WORLD()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun 24 10:56:48 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *h_posMomX__1 = new TH1F("h_posMomX__1","",20,-100,100);
   h_posMomX__1->SetBinContent(5,12);
   h_posMomX__1->SetBinContent(6,302);
   h_posMomX__1->SetBinContent(7,727);
   h_posMomX__1->SetBinContent(8,1043);
   h_posMomX__1->SetBinContent(9,1363);
   h_posMomX__1->SetBinContent(10,1591);
   h_posMomX__1->SetBinContent(11,1537);
   h_posMomX__1->SetBinContent(12,1355);
   h_posMomX__1->SetBinContent(13,1044);
   h_posMomX__1->SetBinContent(14,712);
   h_posMomX__1->SetBinContent(15,302);
   h_posMomX__1->SetBinContent(16,12);
   h_posMomX__1->SetEntries(10000);
   h_posMomX__1->GetXaxis()->SetTitle("Positron momentum X [MeV]");
   h_posMomX__1->GetXaxis()->SetRange(11,21);
   h_posMomX__1->GetXaxis()->CenterTitle(true);
   h_posMomX__1->GetXaxis()->SetLabelFont(42);
   h_posMomX__1->GetXaxis()->SetLabelSize(0.035);
   h_posMomX__1->GetXaxis()->SetTitleOffset(1.1);
   h_posMomX__1->GetXaxis()->SetTitleFont(42);
   h_posMomX__1->GetYaxis()->SetTitle("Entries");
   h_posMomX__1->GetYaxis()->CenterTitle(true);
   h_posMomX__1->GetYaxis()->SetNdivisions(4000510);
   h_posMomX__1->GetYaxis()->SetLabelFont(42);
   h_posMomX__1->GetYaxis()->SetLabelSize(0.035);
   h_posMomX__1->GetYaxis()->SetTitleOffset(1.1);
   h_posMomX__1->GetYaxis()->SetTitleFont(42);
   h_posMomX__1->GetZaxis()->SetLabelFont(42);
   h_posMomX__1->GetZaxis()->SetLabelSize(0.035);
   h_posMomX__1->GetZaxis()->SetTitleSize(0.035);
   h_posMomX__1->GetZaxis()->SetTitleFont(42);
   h_posMomX__1->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
