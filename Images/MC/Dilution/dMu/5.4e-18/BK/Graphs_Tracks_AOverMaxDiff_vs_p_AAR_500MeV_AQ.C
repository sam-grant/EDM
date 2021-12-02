void Graphs_Tracks_AOverMaxDiff_vs_p_AAR_500MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Sep  9 13:02:02 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-416.625,-0.0005401786,3419.625,0.002004464);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t trackReco_fx1003[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t trackReco_fy1003[6] = {
   5.967938e-05,
   0.0001019378,
   0.0002023097,
   0.0002479145,
   0.0003979124,
   0.0001209861};
   Double_t trackReco_fex1003[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t trackReco_fey1003[6] = {
   2.627758e-05,
   8.613143e-06,
   1.370709e-05,
   1.597936e-05,
   3.873528e-05,
   1.926344e-05};
   TGraphErrors *gre = new TGraphErrors(6,trackReco_fx1003,trackReco_fy1003,trackReco_fex1003,trackReco_fey1003);
   gre->SetName("trackReco");
   gre->SetTitle(";p [MeV]: in range p #minus 250 < p < p #plus 250;d_{EDM}(p) / #Delta_{max}#theta_{y}(p)");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_trackReco1003 = new TH1F("Graph_trackReco1003","",100,0,3300);
   Graph_trackReco1003->SetMinimum(-0.0002857143);
   Graph_trackReco1003->SetMaximum(0.00175);
   Graph_trackReco1003->SetDirectory(0);
   Graph_trackReco1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_trackReco1003->SetLineColor(ci);
   Graph_trackReco1003->GetXaxis()->SetTitle("p [MeV]: in range p #minus 250 < p < p #plus 250");
   Graph_trackReco1003->GetXaxis()->SetRange(0,92);
   Graph_trackReco1003->GetXaxis()->CenterTitle(true);
   Graph_trackReco1003->GetXaxis()->SetLabelFont(42);
   Graph_trackReco1003->GetXaxis()->SetTitleSize(0.04);
   Graph_trackReco1003->GetXaxis()->SetTitleOffset(1.1);
   Graph_trackReco1003->GetXaxis()->SetTitleFont(42);
   Graph_trackReco1003->GetYaxis()->SetTitle("d_{EDM}(p) / #Delta_{max}#theta_{y}(p)");
   Graph_trackReco1003->GetYaxis()->CenterTitle(true);
   Graph_trackReco1003->GetYaxis()->SetNdivisions(4000510);
   Graph_trackReco1003->GetYaxis()->SetLabelFont(42);
   Graph_trackReco1003->GetYaxis()->SetTitleSize(0.04);
   Graph_trackReco1003->GetYaxis()->SetTitleOffset(1.15);
   Graph_trackReco1003->GetYaxis()->SetTitleFont(42);
   Graph_trackReco1003->GetZaxis()->SetLabelFont(42);
   Graph_trackReco1003->GetZaxis()->SetTitleOffset(1);
   Graph_trackReco1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_trackReco1003);
   
   gre->Draw("ap");
   
   Double_t trackTruth_fx1004[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t trackTruth_fy1004[6] = {
   0.0002417696,
   0.0006439711,
   0.0009952299,
   0.001262461,
   0.001233119,
   0.001379331};
   Double_t trackTruth_fex1004[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t trackTruth_fey1004[6] = {
   8.675607e-05,
   6.112474e-05,
   7.890643e-05,
   0.0001078165,
   0.0001438197,
   0.0002435098};
   gre = new TGraphErrors(6,trackTruth_fx1004,trackTruth_fy1004,trackTruth_fex1004,trackTruth_fey1004);
   gre->SetName("trackTruth");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_trackTruth1004 = new TH1F("Graph_trackTruth1004","Graph",100,0,3300);
   Graph_trackTruth1004->SetMinimum(8.230797e-06);
   Graph_trackTruth1004->SetMaximum(0.001769623);
   Graph_trackTruth1004->SetDirectory(0);
   Graph_trackTruth1004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_trackTruth1004->SetLineColor(ci);
   Graph_trackTruth1004->GetXaxis()->SetLabelFont(42);
   Graph_trackTruth1004->GetXaxis()->SetTitleOffset(1);
   Graph_trackTruth1004->GetXaxis()->SetTitleFont(42);
   Graph_trackTruth1004->GetYaxis()->SetLabelFont(42);
   Graph_trackTruth1004->GetYaxis()->SetTitleFont(42);
   Graph_trackTruth1004->GetZaxis()->SetLabelFont(42);
   Graph_trackTruth1004->GetZaxis()->SetTitleOffset(1);
   Graph_trackTruth1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_trackTruth1004);
   
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
