void Graphs_Tracks_AOverMaxDiff_vs_p_AAR_500MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Sep  9 13:03:40 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-416.625,-0.001025611,3419.625,0.002087641);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t trackReco_fx1001[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t trackReco_fy1001[6] = {
   -3.7457e-05,
   0.0005056647,
   0.0007664037,
   0.0009910227,
   0.0007613674,
   0.001141139};
   Double_t trackReco_fex1001[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t trackReco_fey1001[6] = {
   -0.0004056538,
   7.76498e-05,
   7.019033e-05,
   9.00936e-05,
   0.0001175981,
   0.000263704};
   TGraphErrors *gre = new TGraphErrors(6,trackReco_fx1001,trackReco_fy1001,trackReco_fex1001,trackReco_fey1001);
   gre->SetName("trackReco");
   gre->SetTitle(";p [MeV]: in range p #minus 250 < p < p #plus 250;d_{EDM}(p) / #Delta_{max}#theta_{y}(p)");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_trackReco1001 = new TH1F("Graph_trackReco1001","",100,0,3300);
   Graph_trackReco1001->SetMinimum(-0.0007142857);
   Graph_trackReco1001->SetMaximum(0.001776316);
   Graph_trackReco1001->SetDirectory(0);
   Graph_trackReco1001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_trackReco1001->SetLineColor(ci);
   Graph_trackReco1001->GetXaxis()->SetTitle("p [MeV]: in range p #minus 250 < p < p #plus 250");
   Graph_trackReco1001->GetXaxis()->SetRange(0,92);
   Graph_trackReco1001->GetXaxis()->CenterTitle(true);
   Graph_trackReco1001->GetXaxis()->SetLabelFont(42);
   Graph_trackReco1001->GetXaxis()->SetTitleSize(0.04);
   Graph_trackReco1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_trackReco1001->GetXaxis()->SetTitleFont(42);
   Graph_trackReco1001->GetYaxis()->SetTitle("d_{EDM}(p) / #Delta_{max}#theta_{y}(p)");
   Graph_trackReco1001->GetYaxis()->CenterTitle(true);
   Graph_trackReco1001->GetYaxis()->SetNdivisions(4000510);
   Graph_trackReco1001->GetYaxis()->SetLabelFont(42);
   Graph_trackReco1001->GetYaxis()->SetTitleSize(0.04);
   Graph_trackReco1001->GetYaxis()->SetTitleOffset(1.15);
   Graph_trackReco1001->GetYaxis()->SetTitleFont(42);
   Graph_trackReco1001->GetZaxis()->SetLabelFont(42);
   Graph_trackReco1001->GetZaxis()->SetTitleOffset(1);
   Graph_trackReco1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_trackReco1001);
   
   gre->Draw("ap");
   
   Double_t trackTruth_fx1002[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t trackTruth_fy1002[6] = {
   3.398824e-05,
   0.0005136212,
   0.0008593024,
   0.001151483,
   0.0008948435,
   0.001426209};
   Double_t trackTruth_fex1002[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t trackTruth_fey1002[6] = {
   0.0004395405,
   8.629436e-05,
   8.738382e-05,
   0.000119418,
   0.0001637554,
   0.0003219124};
   gre = new TGraphErrors(6,trackTruth_fx1002,trackTruth_fy1002,trackTruth_fex1002,trackTruth_fey1002);
   gre->SetName("trackTruth");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_trackTruth1002 = new TH1F("Graph_trackTruth1002","Graph",100,0,3300);
   Graph_trackTruth1002->SetMinimum(-0.0006209197);
   Graph_trackTruth1002->SetMaximum(0.001963489);
   Graph_trackTruth1002->SetDirectory(0);
   Graph_trackTruth1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_trackTruth1002->SetLineColor(ci);
   Graph_trackTruth1002->GetXaxis()->SetLabelFont(42);
   Graph_trackTruth1002->GetXaxis()->SetTitleOffset(1);
   Graph_trackTruth1002->GetXaxis()->SetTitleFont(42);
   Graph_trackTruth1002->GetYaxis()->SetLabelFont(42);
   Graph_trackTruth1002->GetYaxis()->SetTitleFont(42);
   Graph_trackTruth1002->GetZaxis()->SetLabelFont(42);
   Graph_trackTruth1002->GetZaxis()->SetTitleOffset(1);
   Graph_trackTruth1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_trackTruth1002);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.11,0.75,0.51,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("trackReco","#bf{Tracked reco decays}","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("trackTruth","#bf{Tracked truth decays}","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
