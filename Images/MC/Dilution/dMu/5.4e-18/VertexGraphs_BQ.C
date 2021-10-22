void VertexGraphs_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 21 16:06:46 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-137.5,-0.015625,3387.5,0.140625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t trackTruth_fx1007[11] = {
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
   Double_t trackTruth_fy1007[11] = {
   -0.02351028,
   0.09526525,
   0.0725111,
   0.08264627,
   0.07771398,
   0.09148936,
   0.07940486,
   0.05895626,
   0.03816785,
   0.05767948,
   -0.0079906};
   Double_t trackTruth_fex1007[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t trackTruth_fey1007[11] = {
   0.06375102,
   0.02131359,
   0.01224355,
   0.0100481,
   0.00920587,
   0.008766033,
   0.008785909,
   0.00919343,
   0.009767184,
   0.009697446,
   0.02117012};
   TGraphErrors *gre = new TGraphErrors(11,trackTruth_fx1007,trackTruth_fy1007,trackTruth_fex1007,trackTruth_fey1007);
   gre->SetName("trackTruth");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;d_{EDM}(p)");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_trackTruth1007 = new TH1F("Graph_trackTruth1007","",100,125,3125);
   Graph_trackTruth1007->SetMinimum(0);
   Graph_trackTruth1007->SetMaximum(0.125);
   Graph_trackTruth1007->SetDirectory(0);
   Graph_trackTruth1007->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_trackTruth1007->SetLineColor(ci);
   Graph_trackTruth1007->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_trackTruth1007->GetXaxis()->SetRange(4,97);
   Graph_trackTruth1007->GetXaxis()->CenterTitle(true);
   Graph_trackTruth1007->GetXaxis()->SetLabelFont(42);
   Graph_trackTruth1007->GetXaxis()->SetTitleSize(0.04);
   Graph_trackTruth1007->GetXaxis()->SetTitleOffset(1.1);
   Graph_trackTruth1007->GetXaxis()->SetTitleFont(42);
   Graph_trackTruth1007->GetYaxis()->SetTitle("d_{EDM}(p)");
   Graph_trackTruth1007->GetYaxis()->CenterTitle(true);
   Graph_trackTruth1007->GetYaxis()->SetNdivisions(4000510);
   Graph_trackTruth1007->GetYaxis()->SetLabelFont(42);
   Graph_trackTruth1007->GetYaxis()->SetTitleSize(0.04);
   Graph_trackTruth1007->GetYaxis()->SetTitleOffset(1.15);
   Graph_trackTruth1007->GetYaxis()->SetTitleFont(42);
   Graph_trackTruth1007->GetZaxis()->SetLabelFont(42);
   Graph_trackTruth1007->GetZaxis()->SetTitleOffset(1);
   Graph_trackTruth1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_trackTruth1007);
   
   gre->Draw("ap");
   
   Double_t trackReco_fx1008[11] = {
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
   Double_t trackReco_fy1008[11] = {
   -0.004967018,
   0.09179145,
   0.07287521,
   0.08094454,
   0.08019789,
   0.09042406,
   0.07861684,
   0.06185731,
   0.04010342,
   0.05523299,
   -0.007845745};
   Double_t trackReco_fex1008[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t trackReco_fey1008[11] = {
   0.06372932,
   0.02134454,
   0.01227204,
   0.01008123,
   0.009241647,
   0.008794506,
   0.008816491,
   0.009233293,
   0.009812533,
   0.009733407,
   0.02198099};
   gre = new TGraphErrors(11,trackReco_fx1008,trackReco_fy1008,trackReco_fex1008,trackReco_fey1008);
   gre->SetName("trackReco");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;d_{EDM}(p)");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_trackReco1008 = new TH1F("Graph_trackReco1008","",100,125,3125);
   Graph_trackReco1008->SetMinimum(0);
   Graph_trackReco1008->SetMaximum(0.125);
   Graph_trackReco1008->SetDirectory(0);
   Graph_trackReco1008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_trackReco1008->SetLineColor(ci);
   Graph_trackReco1008->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_trackReco1008->GetXaxis()->SetRange(4,97);
   Graph_trackReco1008->GetXaxis()->SetLabelFont(42);
   Graph_trackReco1008->GetXaxis()->SetTitleOffset(1);
   Graph_trackReco1008->GetXaxis()->SetTitleFont(42);
   Graph_trackReco1008->GetYaxis()->SetTitle("d_{EDM}(p)");
   Graph_trackReco1008->GetYaxis()->SetLabelFont(42);
   Graph_trackReco1008->GetYaxis()->SetTitleFont(42);
   Graph_trackReco1008->GetZaxis()->SetLabelFont(42);
   Graph_trackReco1008->GetZaxis()->SetTitleOffset(1);
   Graph_trackReco1008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_trackReco1008);
   
   gre->Draw("p ");
   TLine *line = new TLine(750,0,750,0.125);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(3);
   line->Draw();
   line = new TLine(2500,0,2500,0.125);

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
