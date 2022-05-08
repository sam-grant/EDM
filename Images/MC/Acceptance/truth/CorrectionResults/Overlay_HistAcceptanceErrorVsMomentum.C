void Overlay_HistAcceptanceErrorVsMomentum()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May  6 20:33:51 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *S12_diff__3 = new TH1D("S12_diff__3","",6,1000,2500);
   S12_diff__3->SetBinContent(1,0.06340091);
   S12_diff__3->SetBinContent(2,-0.06879605);
   S12_diff__3->SetBinContent(3,0.06115826);
   S12_diff__3->SetBinContent(4,0.1053778);
   S12_diff__3->SetBinContent(5,0.1054312);
   S12_diff__3->SetBinContent(6,0.08722801);
   S12_diff__3->SetMinimum(-0.25);
   S12_diff__3->SetMaximum(0.2);
   S12_diff__3->SetEntries(6);
   S12_diff__3->SetStats(0);
   S12_diff__3->SetMarkerStyle(20);
   S12_diff__3->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   S12_diff__3->GetXaxis()->CenterTitle(true);
   S12_diff__3->GetXaxis()->SetLabelFont(42);
   S12_diff__3->GetXaxis()->SetTitleSize(0.04);
   S12_diff__3->GetXaxis()->SetTitleOffset(1.1);
   S12_diff__3->GetXaxis()->SetTitleFont(42);
   S12_diff__3->GetYaxis()->SetTitle("#Delta A_{EDM} acceptance fraction / 250 MeV");
   S12_diff__3->GetYaxis()->CenterTitle(true);
   S12_diff__3->GetYaxis()->SetNdivisions(4000510);
   S12_diff__3->GetYaxis()->SetLabelFont(42);
   S12_diff__3->GetYaxis()->SetTitleSize(0.04);
   S12_diff__3->GetYaxis()->SetTitleOffset(1.3);
   S12_diff__3->GetYaxis()->SetTitleFont(42);
   S12_diff__3->GetZaxis()->SetLabelFont(42);
   S12_diff__3->GetZaxis()->SetTitleOffset(1);
   S12_diff__3->GetZaxis()->SetTitleFont(42);
   S12_diff__3->Draw("PL");
   
   TH1D *S18_diff__4 = new TH1D("S18_diff__4","S18",6,1000,2500);
   S18_diff__4->SetBinContent(1,-0.01326017);
   S18_diff__4->SetBinContent(2,0.04770306);
   S18_diff__4->SetBinContent(3,-0.0201782);
   S18_diff__4->SetBinContent(4,-0.06208599);
   S18_diff__4->SetBinContent(5,0.06593913);
   S18_diff__4->SetBinContent(6,-0.2102483);
   S18_diff__4->SetEntries(6);
   S18_diff__4->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   S18_diff__4->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   S18_diff__4->SetMarkerColor(ci);
   S18_diff__4->SetMarkerStyle(20);
   S18_diff__4->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   S18_diff__4->GetXaxis()->CenterTitle(true);
   S18_diff__4->GetXaxis()->SetLabelFont(42);
   S18_diff__4->GetXaxis()->SetTitleSize(0.04);
   S18_diff__4->GetXaxis()->SetTitleOffset(1.1);
   S18_diff__4->GetXaxis()->SetTitleFont(42);
   S18_diff__4->GetYaxis()->SetTitle("Acceptance fraction per mm misalignment / 250 MeV");
   S18_diff__4->GetYaxis()->CenterTitle(true);
   S18_diff__4->GetYaxis()->SetNdivisions(4000510);
   S18_diff__4->GetYaxis()->SetLabelFont(42);
   S18_diff__4->GetYaxis()->SetTitleSize(0.04);
   S18_diff__4->GetYaxis()->SetTitleOffset(1.2);
   S18_diff__4->GetYaxis()->SetTitleFont(42);
   S18_diff__4->GetZaxis()->SetLabelFont(42);
   S18_diff__4->GetZaxis()->SetTitleOffset(1);
   S18_diff__4->GetZaxis()->SetTitleFont(42);
   S18_diff__4->Draw("PL SAME");
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(22);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S12_diff","#plus1 mm","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("S18_diff","#minus1 mm","lpf");
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
