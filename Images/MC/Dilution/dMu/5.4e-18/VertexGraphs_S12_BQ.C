void VertexGraphs_S12_BQ()
{
//=========Macro generated from canvas: S12/
//=========  (Tue Dec  7 01:11:48 2021) by ROOT version 6.24/04
   TCanvas *S12 = new TCanvas("S12", "",0,0,800,600);
   S12->SetHighLightColor(2);
   S12->Range(-133.2961,-0.015625,3376.908,0.140625);
   S12->SetFillColor(0);
   S12->SetBorderMode(0);
   S12->SetBorderSize(2);
   S12->SetFrameBorderMode(0);
   S12->SetFrameBorderMode(0);
   
   Double_t S12_trackTruth_fx1017[11] = {
   451.738,
   653.3893,
   880.2527,
   1123.051,
   1371.173,
   1620.272,
   1866.762,
   2114.836,
   2362.621,
   2614.182,
   2791.874};
   Double_t S12_trackTruth_fy1017[11] = {
   0.06785275,
   0.08141457,
   0.09818283,
   0.08552458,
   0.06604272,
   0.07539108,
   0.09298627,
   0.06949528,
   0.0351134,
   0.04557641,
   0.03866467};
   Double_t S12_trackTruth_fex1017[11] = {
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
   Double_t S12_trackTruth_fey1017[11] = {
   0.1100992,
   0.03694475,
   0.02118758,
   0.01742865,
   0.01591658,
   0.01513251,
   0.01521428,
   0.016058,
   0.01724904,
   0.01719824,
   0.03847322};
   TGraphErrors *gre = new TGraphErrors(11,S12_trackTruth_fx1017,S12_trackTruth_fy1017,S12_trackTruth_fex1017,S12_trackTruth_fey1017);
   gre->SetName("S12_trackTruth");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_trackTruth1017 = new TH1F("Graph_S12_trackTruth1017","S12_",100,217.7244,3025.888);
   Graph_S12_trackTruth1017->SetMinimum(0);
   Graph_S12_trackTruth1017->SetMaximum(0.125);
   Graph_S12_trackTruth1017->SetDirectory(0);
   Graph_S12_trackTruth1017->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12_trackTruth1017->SetLineColor(ci);
   Graph_S12_trackTruth1017->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12_trackTruth1017->GetXaxis()->SetRange(1,100);
   Graph_S12_trackTruth1017->GetXaxis()->CenterTitle(true);
   Graph_S12_trackTruth1017->GetXaxis()->SetLabelFont(42);
   Graph_S12_trackTruth1017->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_trackTruth1017->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_trackTruth1017->GetXaxis()->SetTitleFont(42);
   Graph_S12_trackTruth1017->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_S12_trackTruth1017->GetYaxis()->CenterTitle(true);
   Graph_S12_trackTruth1017->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_trackTruth1017->GetYaxis()->SetLabelFont(42);
   Graph_S12_trackTruth1017->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_trackTruth1017->GetYaxis()->SetTitleOffset(1.15);
   Graph_S12_trackTruth1017->GetYaxis()->SetTitleFont(42);
   Graph_S12_trackTruth1017->GetZaxis()->SetLabelFont(42);
   Graph_S12_trackTruth1017->GetZaxis()->SetTitleOffset(1);
   Graph_S12_trackTruth1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_trackTruth1017);
   
   gre->Draw("ap");
   
   Double_t S12_trackReco_fx1018[11] = {
   451.6071,
   653.3642,
   880.2183,
   1123.039,
   1371.147,
   1620.261,
   1866.732,
   2114.885,
   2362.567,
   2614.236,
   2787.767};
   Double_t S12_trackReco_fy1018[11] = {
   0.09422805,
   0.08314432,
   0.09243632,
   0.08986559,
   0.06310816,
   0.07876938,
   0.09399702,
   0.06839063,
   0.0349796,
   0.04932758,
   0.01166716};
   Double_t S12_trackReco_fex1018[11] = {
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
   Double_t S12_trackReco_fey1018[11] = {
   0.1100058,
   0.03699345,
   0.02125165,
   0.01748089,
   0.01598468,
   0.01518205,
   0.01527061,
   0.01614408,
   0.01732056,
   0.01728981,
   0.03988681};
   gre = new TGraphErrors(11,S12_trackReco_fx1018,S12_trackReco_fy1018,S12_trackReco_fex1018,S12_trackReco_fey1018);
   gre->SetName("S12_trackReco");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_S12_trackReco1018 = new TH1F("Graph_S12_trackReco1018","S12_",100,217.9912,3021.382);
   Graph_S12_trackReco1018->SetMinimum(0);
   Graph_S12_trackReco1018->SetMaximum(0.125);
   Graph_S12_trackReco1018->SetDirectory(0);
   Graph_S12_trackReco1018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_trackReco1018->SetLineColor(ci);
   Graph_S12_trackReco1018->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12_trackReco1018->GetXaxis()->SetRange(1,100);
   Graph_S12_trackReco1018->GetXaxis()->SetLabelFont(42);
   Graph_S12_trackReco1018->GetXaxis()->SetTitleOffset(1);
   Graph_S12_trackReco1018->GetXaxis()->SetTitleFont(42);
   Graph_S12_trackReco1018->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_S12_trackReco1018->GetYaxis()->SetLabelFont(42);
   Graph_S12_trackReco1018->GetYaxis()->SetTitleFont(42);
   Graph_S12_trackReco1018->GetZaxis()->SetLabelFont(42);
   Graph_S12_trackReco1018->GetZaxis()->SetTitleOffset(1);
   Graph_S12_trackReco1018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_trackReco1018);
   
   gre->Draw("p ");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   TLine *line = new TLine(750,0,750,0.125);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(3);
   line->Draw();
   line = new TLine(2750,0,2750,0.125);

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
   TLegendEntry *entry=leg->AddEntry("S12_trackTruth","Truth vertices","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("S12_trackReco","Reco vertices","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   S12->Modified();
   S12->cd();
   S12->SetSelected(S12);
}
