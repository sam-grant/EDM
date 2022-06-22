void AEDMAcceptanceUncOverlay()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jun  3 12:58:48 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(811.7217,-0.2,2678.365,0.3);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12_diff_fx1013[6] = {
   1122.829,
   1372.245,
   1621.478,
   1870.594,
   2119.355,
   2367.258};
   Double_t S12_diff_fy1013[6] = {
   0.1579578,
   0.06891659,
   -0.07608932,
   0.06706285,
   0.1460793,
   0.1092785};
   Double_t S12_diff_fex1013[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12_diff_fey1013[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(6,S12_diff_fx1013,S12_diff_fy1013,S12_diff_fex1013,S12_diff_fey1013);
   gre->SetName("S12_diff");
   gre->SetTitle(";Decay vertex momentum [MeV];#Delta A_{EDM} acceptance fraction per mm / 250 MeV");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_diff1013 = new TH1F("Graph_S12_diff1013","",100,998.3861,2491.701);
   Graph_S12_diff1013->SetMinimum(-0.15);
   Graph_S12_diff1013->SetMaximum(0.25);
   Graph_S12_diff1013->SetDirectory(0);
   Graph_S12_diff1013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_diff1013->SetLineColor(ci);
   Graph_S12_diff1013->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12_diff1013->GetXaxis()->SetRange(1,100);
   Graph_S12_diff1013->GetXaxis()->CenterTitle(true);
   Graph_S12_diff1013->GetXaxis()->SetLabelFont(42);
   Graph_S12_diff1013->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_diff1013->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_diff1013->GetXaxis()->SetTitleFont(42);
   Graph_S12_diff1013->GetYaxis()->SetTitle("#Delta A_{EDM} acceptance fraction per mm / 250 MeV");
   Graph_S12_diff1013->GetYaxis()->CenterTitle(true);
   Graph_S12_diff1013->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_diff1013->GetYaxis()->SetLabelFont(42);
   Graph_S12_diff1013->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_diff1013->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_diff1013->GetYaxis()->SetTitleFont(42);
   Graph_S12_diff1013->GetZaxis()->SetLabelFont(42);
   Graph_S12_diff1013->GetZaxis()->SetTitleOffset(1);
   Graph_S12_diff1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_diff1013);
   
   gre->Draw("apl");
   
   Double_t S18_diff_fx1014[6] = {
   1122.829,
   1372.245,
   1621.478,
   1870.594,
   2119.355,
   2367.258};
   Double_t S18_diff_fy1014[6] = {
   0.1607359,
   -0.01441377,
   0.0527602,
   -0.02212633,
   -0.08606629,
   0.06834537};
   Double_t S18_diff_fex1014[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S18_diff_fey1014[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(6,S18_diff_fx1014,S18_diff_fy1014,S18_diff_fex1014,S18_diff_fey1014);
   gre->SetName("S18_diff");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_diff1014 = new TH1F("Graph_S18_diff1014","S18",100,998.3861,2491.701);
   Graph_S18_diff1014->SetMinimum(-0.1107465);
   Graph_S18_diff1014->SetMaximum(0.1854161);
   Graph_S18_diff1014->SetDirectory(0);
   Graph_S18_diff1014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_diff1014->SetLineColor(ci);
   Graph_S18_diff1014->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S18_diff1014->GetXaxis()->CenterTitle(true);
   Graph_S18_diff1014->GetXaxis()->SetLabelFont(42);
   Graph_S18_diff1014->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_diff1014->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_diff1014->GetXaxis()->SetTitleFont(42);
   Graph_S18_diff1014->GetYaxis()->SetTitle("#Delta A_{EDM} acceptance fraction / 250 MeV");
   Graph_S18_diff1014->GetYaxis()->CenterTitle(true);
   Graph_S18_diff1014->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_diff1014->GetYaxis()->SetLabelFont(42);
   Graph_S18_diff1014->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_diff1014->GetYaxis()->SetTitleOffset(1.25);
   Graph_S18_diff1014->GetYaxis()->SetTitleFont(42);
   Graph_S18_diff1014->GetZaxis()->SetLabelFont(42);
   Graph_S18_diff1014->GetZaxis()->SetTitleOffset(1);
   Graph_S18_diff1014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_diff1014);
   
   gre->Draw("pl ");
   
   TLegend *leg = new TLegend(0.59,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S12_diff","#plus1 mm","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_diff","#minus1 mm","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
