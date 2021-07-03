void h_posMomZ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun 24 18:45:08 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *h_posMomZ__7 = new TH1F("h_posMomZ__7","",310,0,3100);
   h_posMomZ__7->SetBinContent(0,3.212684);
   h_posMomZ__7->SetBinContent(1,1);
   h_posMomZ__7->SetBinContent(2,0.8859705);
   h_posMomZ__7->SetBinContent(3,0.6700833);
   h_posMomZ__7->SetBinContent(4,0.4311339);
   h_posMomZ__7->SetBinContent(5,0.1985907);
   h_posMomZ__7->SetBinContent(6,0.00768738);
   h_posMomZ__7->SetBinError(0,0.04536622);
   h_posMomZ__7->SetBinError(1,0.02531037);
   h_posMomZ__7->SetBinError(2,0.02382364);
   h_posMomZ__7->SetBinError(3,0.02071872);
   h_posMomZ__7->SetBinError(4,0.01661899);
   h_posMomZ__7->SetBinError(5,0.01127919);
   h_posMomZ__7->SetBinError(6,0.002219155);
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
   
   TH1F *h_posMomZ__8 = new TH1F("h_posMomZ__8","",310,0,3100);
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
