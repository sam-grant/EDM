void h_posMomY_MRF()
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
   
   TH1F *h_posMomY__5 = new TH1F("h_posMomY__5","",20,-100,100);
   h_posMomY__5->SetBinContent(5,0.009416196);
   h_posMomY__5->SetBinContent(6,0.1688638);
   h_posMomY__5->SetBinContent(7,0.4174514);
   h_posMomY__5->SetBinContent(8,0.6785939);
   h_posMomY__5->SetBinContent(9,0.8970496);
   h_posMomY__5->SetBinContent(10,1);
   h_posMomY__5->SetBinContent(11,0.9855618);
   h_posMomY__5->SetBinContent(12,0.8581293);
   h_posMomY__5->SetBinContent(13,0.655995);
   h_posMomY__5->SetBinContent(14,0.4212178);
   h_posMomY__5->SetBinContent(15,0.1776522);
   h_posMomY__5->SetBinContent(16,0.007532957);
   h_posMomY__5->SetBinError(5,0.002431251);
   h_posMomY__5->SetBinError(6,0.01029581);
   h_posMomY__5->SetBinError(7,0.01618807);
   h_posMomY__5->SetBinError(8,0.0206394);
   h_posMomY__5->SetBinError(9,0.02373014);
   h_posMomY__5->SetBinError(10,0.02505487);
   h_posMomY__5->SetBinError(11,0.02487334);
   h_posMomY__5->SetBinError(12,0.02320964);
   h_posMomY__5->SetBinError(13,0.02029282);
   h_posMomY__5->SetBinError(14,0.01626093);
   h_posMomY__5->SetBinError(15,0.01056033);
   h_posMomY__5->SetBinError(16,0.002174577);
   h_posMomY__5->SetEntries(10000);
   h_posMomY__5->GetXaxis()->SetTitle("Positron momentum Y [MeV]");
   h_posMomY__5->GetXaxis()->CenterTitle(true);
   h_posMomY__5->GetXaxis()->SetLabelFont(42);
   h_posMomY__5->GetXaxis()->SetTitleSize(0.04);
   h_posMomY__5->GetXaxis()->SetTitleOffset(1.1);
   h_posMomY__5->GetXaxis()->SetTitleFont(42);
   h_posMomY__5->GetYaxis()->SetTitle("Normalised units");
   h_posMomY__5->GetYaxis()->CenterTitle(true);
   h_posMomY__5->GetYaxis()->SetNdivisions(4000510);
   h_posMomY__5->GetYaxis()->SetLabelFont(42);
   h_posMomY__5->GetYaxis()->SetTitleSize(0.04);
   h_posMomY__5->GetYaxis()->SetTitleOffset(1.1);
   h_posMomY__5->GetYaxis()->SetTitleFont(42);
   h_posMomY__5->GetZaxis()->SetLabelFont(42);
   h_posMomY__5->GetZaxis()->SetTitleOffset(1);
   h_posMomY__5->GetZaxis()->SetTitleFont(42);
   h_posMomY__5->Draw("HIST E");
   
   TH1F *h_posMomY__6 = new TH1F("h_posMomY__6","",20,-100,100);
   h_posMomY__6->SetBinContent(5,0.005739796);
   h_posMomY__6->SetBinContent(6,0.1964286);
   h_posMomY__6->SetBinContent(7,0.4343112);
   h_posMomY__6->SetBinContent(8,0.6957908);
   h_posMomY__6->SetBinContent(9,0.8577806);
   h_posMomY__6->SetBinContent(10,1);
   h_posMomY__6->SetBinContent(11,0.9521683);
   h_posMomY__6->SetBinContent(12,0.9107143);
   h_posMomY__6->SetBinContent(13,0.6830357);
   h_posMomY__6->SetBinContent(14,0.4330357);
   h_posMomY__6->SetBinContent(15,0.2002551);
   h_posMomY__6->SetBinContent(16,0.008928572);
   h_posMomY__6->SetEntries(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   h_posMomY__6->SetLineColor(ci);
   h_posMomY__6->GetXaxis()->SetTitle("Positron momentum Y [MeV]");
   h_posMomY__6->GetXaxis()->SetLabelFont(42);
   h_posMomY__6->GetXaxis()->SetTitleOffset(1);
   h_posMomY__6->GetXaxis()->SetTitleFont(42);
   h_posMomY__6->GetYaxis()->SetTitle("Entries");
   h_posMomY__6->GetYaxis()->SetLabelFont(42);
   h_posMomY__6->GetYaxis()->SetTitleFont(42);
   h_posMomY__6->GetZaxis()->SetLabelFont(42);
   h_posMomY__6->GetZaxis()->SetTitleOffset(1);
   h_posMomY__6->GetZaxis()->SetTitleFont(42);
   h_posMomY__6->Draw("HIST E SAME");
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("h_posMomY","gm2ringsim","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("h_posMomY","EDMSim","lpf");
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
