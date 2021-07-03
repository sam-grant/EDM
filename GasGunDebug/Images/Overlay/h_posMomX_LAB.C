void h_posMomX_LAB()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun 24 19:49:31 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *h_posMomX__3 = new TH1F("h_posMomX__3","",20,-100,100);
   h_posMomX__3->SetBinContent(5,0.007542426);
   h_posMomX__3->SetBinContent(6,0.1898177);
   h_posMomX__3->SetBinContent(7,0.4569453);
   h_posMomX__3->SetBinContent(8,0.6555625);
   h_posMomX__3->SetBinContent(9,0.8566939);
   h_posMomX__3->SetBinContent(10,1);
   h_posMomX__3->SetBinContent(11,0.9660591);
   h_posMomX__3->SetBinContent(12,0.8516656);
   h_posMomX__3->SetBinContent(13,0.6561911);
   h_posMomX__3->SetBinContent(14,0.4475173);
   h_posMomX__3->SetBinContent(15,0.1898177);
   h_posMomX__3->SetBinContent(16,0.007542426);
   h_posMomX__3->SetBinError(5,0.002177311);
   h_posMomX__3->SetBinError(6,0.01092278);
   h_posMomX__3->SetBinError(7,0.01694716);
   h_posMomX__3->SetBinError(8,0.02029888);
   h_posMomX__3->SetBinError(9,0.0232048);
   h_posMomX__3->SetBinError(10,0.02507061);
   h_posMomX__3->SetBinError(11,0.02464148);
   h_posMomX__3->SetBinError(12,0.0231366);
   h_posMomX__3->SetBinError(13,0.0203086);
   h_posMomX__3->SetBinError(14,0.01677142);
   h_posMomX__3->SetBinError(15,0.01092278);
   h_posMomX__3->SetBinError(16,0.002177311);
   h_posMomX__3->SetEntries(10000);
   h_posMomX__3->GetXaxis()->SetTitle("Positron momentum X [MeV]");
   h_posMomX__3->GetXaxis()->CenterTitle(true);
   h_posMomX__3->GetXaxis()->SetLabelFont(42);
   h_posMomX__3->GetXaxis()->SetTitleSize(0.04);
   h_posMomX__3->GetXaxis()->SetTitleOffset(1.1);
   h_posMomX__3->GetXaxis()->SetTitleFont(42);
   h_posMomX__3->GetYaxis()->SetTitle("Normalised units");
   h_posMomX__3->GetYaxis()->CenterTitle(true);
   h_posMomX__3->GetYaxis()->SetNdivisions(4000510);
   h_posMomX__3->GetYaxis()->SetLabelFont(42);
   h_posMomX__3->GetYaxis()->SetTitleSize(0.04);
   h_posMomX__3->GetYaxis()->SetTitleOffset(1.1);
   h_posMomX__3->GetYaxis()->SetTitleFont(42);
   h_posMomX__3->GetZaxis()->SetLabelFont(42);
   h_posMomX__3->GetZaxis()->SetTitleOffset(1);
   h_posMomX__3->GetZaxis()->SetTitleFont(42);
   h_posMomX__3->Draw("HIST E");
   
   TH1F *h_posMomX__4 = new TH1F("h_posMomX__4","",20,-100,100);
   h_posMomX__4->SetBinContent(5,0.008816374);
   h_posMomX__4->SetBinContent(6,0.1807303);
   h_posMomX__4->SetBinContent(7,0.4193953);
   h_posMomX__4->SetBinContent(8,0.63665);
   h_posMomX__4->SetBinContent(9,0.8790931);
   h_posMomX__4->SetBinContent(10,0.9785899);
   h_posMomX__4->SetBinContent(11,1);
   h_posMomX__4->SetBinContent(12,0.8746852);
   h_posMomX__4->SetBinContent(13,0.68262);
   h_posMomX__4->SetBinContent(14,0.4212846);
   h_posMomX__4->SetBinContent(15,0.2059193);
   h_posMomX__4->SetBinContent(16,0.01007532);
   h_posMomX__4->SetEntries(20);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   h_posMomX__4->SetLineColor(ci);
   h_posMomX__4->GetXaxis()->SetTitle("Positron momentum X [MeV]");
   h_posMomX__4->GetXaxis()->SetLabelFont(42);
   h_posMomX__4->GetXaxis()->SetTitleOffset(1);
   h_posMomX__4->GetXaxis()->SetTitleFont(42);
   h_posMomX__4->GetYaxis()->SetTitle("Entries");
   h_posMomX__4->GetYaxis()->SetLabelFont(42);
   h_posMomX__4->GetYaxis()->SetTitleFont(42);
   h_posMomX__4->GetZaxis()->SetLabelFont(42);
   h_posMomX__4->GetZaxis()->SetTitleOffset(1);
   h_posMomX__4->GetZaxis()->SetTitleFont(42);
   h_posMomX__4->Draw("HIST E SAME");
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("h_posMomX","gm2ringsim","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("h_posMomX","EDMSim","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
