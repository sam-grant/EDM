void h_posMomZ_MRF()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun 24 19:13:44 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *h_posMomZ__7 = new TH1F("h_posMomZ__7","",20,-100,100);
   h_posMomZ__7->SetBinContent(5,0.009416196);
   h_posMomZ__7->SetBinContent(6,0.1663528);
   h_posMomZ__7->SetBinContent(7,0.4337727);
   h_posMomZ__7->SetBinContent(8,0.6453233);
   h_posMomZ__7->SetBinContent(9,0.8932831);
   h_posMomZ__7->SetBinContent(10,1);
   h_posMomZ__7->SetBinContent(11,0.9799121);
   h_posMomZ__7->SetBinContent(12,0.8681732);
   h_posMomZ__7->SetBinContent(13,0.6566227);
   h_posMomZ__7->SetBinContent(14,0.4224733);
   h_posMomZ__7->SetBinContent(15,0.1946014);
   h_posMomZ__7->SetBinContent(16,0.007532957);
   h_posMomZ__7->SetBinError(5,0.002431251);
   h_posMomZ__7->SetBinError(6,0.01021897);
   h_posMomZ__7->SetBinError(7,0.01650149);
   h_posMomZ__7->SetBinError(8,0.02012708);
   h_posMomZ__7->SetBinError(9,0.02368027);
   h_posMomZ__7->SetBinError(10,0.02505487);
   h_posMomZ__7->SetBinError(11,0.02480194);
   h_posMomZ__7->SetBinError(12,0.02334508);
   h_posMomZ__7->SetBinError(13,0.02030253);
   h_posMomZ__7->SetBinError(14,0.01628515);
   h_posMomZ__7->SetBinError(15,0.01105262);
   h_posMomZ__7->SetBinError(16,0.002174577);
   h_posMomZ__7->SetEntries(10000);
   h_posMomZ__7->GetXaxis()->SetTitle("Positron momentum Z [MeV]");
   h_posMomZ__7->GetXaxis()->CenterTitle(true);
   h_posMomZ__7->GetXaxis()->SetLabelFont(42);
   h_posMomZ__7->GetXaxis()->SetTitleSize(0.04);
   h_posMomZ__7->GetXaxis()->SetTitleOffset(1.1);
   h_posMomZ__7->GetXaxis()->SetTitleFont(42);
   h_posMomZ__7->GetYaxis()->SetTitle("Normalised units");
   h_posMomZ__7->GetYaxis()->CenterTitle(true);
   h_posMomZ__7->GetYaxis()->SetNdivisions(4000510);
   h_posMomZ__7->GetYaxis()->SetLabelFont(42);
   h_posMomZ__7->GetYaxis()->SetTitleSize(0.04);
   h_posMomZ__7->GetYaxis()->SetTitleOffset(1.1);
   h_posMomZ__7->GetYaxis()->SetTitleFont(42);
   h_posMomZ__7->GetZaxis()->SetLabelFont(42);
   h_posMomZ__7->GetZaxis()->SetTitleOffset(1);
   h_posMomZ__7->GetZaxis()->SetTitleFont(42);
   h_posMomZ__7->Draw("HIST E");
   
   TH1F *h_posMomZ__8 = new TH1F("h_posMomZ__8","",20,-100,100);
   h_posMomZ__8->SetBinContent(5,0.01084165);
   h_posMomZ__8->SetBinContent(6,0.1868625);
   h_posMomZ__8->SetBinContent(7,0.4559953);
   h_posMomZ__8->SetBinContent(8,0.7034441);
   h_posMomZ__8->SetBinContent(9,0.8743624);
   h_posMomZ__8->SetBinContent(10,0.9566328);
   h_posMomZ__8->SetBinContent(11,1);
   h_posMomZ__8->SetBinContent(12,0.8864797);
   h_posMomZ__8->SetBinContent(13,0.6804846);
   h_posMomZ__8->SetBinContent(14,0.4215563);
   h_posMomZ__8->SetBinContent(15,0.1945157);
   h_posMomZ__8->SetBinContent(16,0.007015371);
   h_posMomZ__8->SetEntries(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   h_posMomZ__8->SetLineColor(ci);
   h_posMomZ__8->GetXaxis()->SetTitle("Positron momentum Z [MeV]");
   h_posMomZ__8->GetXaxis()->SetLabelFont(42);
   h_posMomZ__8->GetXaxis()->SetTitleOffset(1);
   h_posMomZ__8->GetXaxis()->SetTitleFont(42);
   h_posMomZ__8->GetYaxis()->SetTitle("Entries");
   h_posMomZ__8->GetYaxis()->SetLabelFont(42);
   h_posMomZ__8->GetYaxis()->SetTitleFont(42);
   h_posMomZ__8->GetZaxis()->SetLabelFont(42);
   h_posMomZ__8->GetZaxis()->SetTitleOffset(1);
   h_posMomZ__8->GetZaxis()->SetTitleFont(42);
   h_posMomZ__8->Draw("HIST E SAME");
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("h_posMomZ","gm2ringsim","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("h_posMomZ","EDMSim","lpf");
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
