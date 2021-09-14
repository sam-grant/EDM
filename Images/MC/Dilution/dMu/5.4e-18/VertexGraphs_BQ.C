void VertexGraphs_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Sep 14 11:03:32 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-118.7188,-0.128125,3360.969,0.153125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t trackTruth_fx1009[11] = {
   375,
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625,
   2875};
   Double_t trackTruth_fy1009[11] = {
   -0.02567572,
   0.09509227,
   0.07148026,
   0.08233936,
   0.07848344,
   0.09218393,
   0.08046866,
   0.05880107,
   0.0377722,
   0.05774846,
   -0.008504013};
   Double_t trackTruth_fex1009[11] = {
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125};
   Double_t trackTruth_fey1009[11] = {
   0.06369066,
   0.02129351,
   0.01223112,
   0.01003911,
   0.009197576,
   0.00875924,
   0.00877848,
   0.009186698,
   0.009760662,
   0.009691082,
   0.02115107};
   TGraphErrors *gre = new TGraphErrors(11,trackTruth_fx1009,trackTruth_fy1009,trackTruth_fex1009,trackTruth_fey1009);
   gre->SetName("trackTruth");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;d_{EDM}(p)");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_trackTruth1009 = new TH1F("Graph_trackTruth1009","",100,0,3275);
   Graph_trackTruth1009->SetMinimum(-0.1);
   Graph_trackTruth1009->SetMaximum(0.125);
   Graph_trackTruth1009->SetDirectory(0);
   Graph_trackTruth1009->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_trackTruth1009->SetLineColor(ci);
   Graph_trackTruth1009->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_trackTruth1009->GetXaxis()->SetRange(8,92);
   Graph_trackTruth1009->GetXaxis()->CenterTitle(true);
   Graph_trackTruth1009->GetXaxis()->SetLabelFont(42);
   Graph_trackTruth1009->GetXaxis()->SetTitleSize(0.04);
   Graph_trackTruth1009->GetXaxis()->SetTitleOffset(1.1);
   Graph_trackTruth1009->GetXaxis()->SetTitleFont(42);
   Graph_trackTruth1009->GetYaxis()->SetTitle("d_{EDM}(p)");
   Graph_trackTruth1009->GetYaxis()->CenterTitle(true);
   Graph_trackTruth1009->GetYaxis()->SetNdivisions(4000510);
   Graph_trackTruth1009->GetYaxis()->SetLabelFont(42);
   Graph_trackTruth1009->GetYaxis()->SetTitleSize(0.04);
   Graph_trackTruth1009->GetYaxis()->SetTitleOffset(1.15);
   Graph_trackTruth1009->GetYaxis()->SetTitleFont(42);
   Graph_trackTruth1009->GetZaxis()->SetLabelFont(42);
   Graph_trackTruth1009->GetZaxis()->SetTitleOffset(1);
   Graph_trackTruth1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_trackTruth1009);
   
   gre->Draw("ap");
   
   Double_t trackReco_fx1010[11] = {
   375,
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625,
   2875};
   Double_t trackReco_fy1010[11] = {
   -0.01376143,
   0.09264648,
   0.07297922,
   0.08156121,
   0.08076189,
   0.09118542,
   0.07949435,
   0.06144624,
   0.03915688,
   0.05483956,
   -0.008982683};
   Double_t trackReco_fex1010[11] = {
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125};
   Double_t trackReco_fey1010[11] = {
   0.0636869,
   0.02132924,
   0.01226297,
   0.01007448,
   0.009235815,
   0.008789589,
   0.008812048,
   0.009229503,
   0.009809752,
   0.009732171,
   0.02197126};
   gre = new TGraphErrors(11,trackReco_fx1010,trackReco_fy1010,trackReco_fex1010,trackReco_fey1010);
   gre->SetName("trackReco");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;d_{EDM}(p)");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_trackReco1010 = new TH1F("Graph_trackReco1010","",100,0,3275);
   Graph_trackReco1010->SetMinimum(-0.1);
   Graph_trackReco1010->SetMaximum(0.125);
   Graph_trackReco1010->SetDirectory(0);
   Graph_trackReco1010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_trackReco1010->SetLineColor(ci);
   Graph_trackReco1010->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_trackReco1010->GetXaxis()->SetRange(8,92);
   Graph_trackReco1010->GetXaxis()->SetLabelFont(42);
   Graph_trackReco1010->GetXaxis()->SetTitleOffset(1);
   Graph_trackReco1010->GetXaxis()->SetTitleFont(42);
   Graph_trackReco1010->GetYaxis()->SetTitle("d_{EDM}(p)");
   Graph_trackReco1010->GetYaxis()->SetLabelFont(42);
   Graph_trackReco1010->GetYaxis()->SetTitleFont(42);
   Graph_trackReco1010->GetZaxis()->SetLabelFont(42);
   Graph_trackReco1010->GetZaxis()->SetTitleOffset(1);
   Graph_trackReco1010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_trackReco1010);
   
   gre->Draw("p ");
   TLine *line = new TLine(750,-0.1,750,0.125);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(3);
   line->Draw();
   line = new TLine(2500,-0.1,2500,0.125);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(3);
   line->Draw();
   
   TLegend *leg = new TLegend(0.25,0.91,0.75,0.99,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("trackTruth","Truth vertices","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("trackReco","Reco vertices","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
