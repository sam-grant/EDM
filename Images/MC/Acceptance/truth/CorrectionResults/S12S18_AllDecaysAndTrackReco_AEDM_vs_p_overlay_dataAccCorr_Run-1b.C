void S12S18_AllDecaysAndTrackReco_AEDM_vs_p_overlay_dataAccCorr_Run-1b()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr  8 16:23:16 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(516.5561,-0.04375,2969.914,0.39375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1021[8] = {
   873.25,
   1122.829,
   1372.245,
   1621.478,
   1870.594,
   2119.355,
   2367.258,
   2613.22};
   Double_t _fy1021[8] = {
   0.318886,
   0.3053675,
   0.2809278,
   0.2539968,
   0.2316457,
   0.1671082,
   0.1612269,
   0.09530915};
   Double_t _fex1021[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1021[8] = {
   0.01725572,
   0.01485289,
   0.01322649,
   0.01204238,
   0.01118043,
   0.01053627,
   0.01009493,
   0.009871124};
   TGraphErrors *gre = new TGraphErrors(8,_fx1021,_fy1021,_fex1021,_fey1021);
   gre->SetName("");
   gre->SetTitle("Run-1b: S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1021 = new TH1F("Graph_Graph1021","Run-1b: S12S18",100,699.253,2787.217);
   Graph_Graph1021->SetMinimum(0);
   Graph_Graph1021->SetMaximum(0.35);
   Graph_Graph1021->SetDirectory(0);
   Graph_Graph1021->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1021->SetLineColor(ci);
   Graph_Graph1021->GetXaxis()->SetRange(4,97);
   Graph_Graph1021->GetXaxis()->CenterTitle(true);
   Graph_Graph1021->GetXaxis()->SetLabelFont(42);
   Graph_Graph1021->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1021->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1021->GetXaxis()->SetTitleFont(42);
   Graph_Graph1021->GetYaxis()->CenterTitle(true);
   Graph_Graph1021->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1021->GetYaxis()->SetLabelFont(42);
   Graph_Graph1021->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1021->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1021->GetYaxis()->SetTitleFont(42);
   Graph_Graph1021->GetZaxis()->SetLabelFont(42);
   Graph_Graph1021->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1021);
   
   gre->Draw("apl");
   
   Double_t _fx1022[8] = {
   873.25,
   1122.829,
   1372.245,
   1621.478,
   1870.594,
   2119.355,
   2367.258,
   2613.22};
   Double_t _fy1022[8] = {
   0.04201148,
   0.06340167,
   0.07135283,
   0.07534399,
   0.07704356,
   0.04816519,
   0.05827171,
   0.04682753};
   Double_t _fex1022[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1022[8] = {
   0.005350799,
   0.005616778,
   0.005698623,
   0.005423895,
   0.005191188,
   0.00480032,
   0.004525222,
   0.005614531};
   gre = new TGraphErrors(8,_fx1022,_fy1022,_fex1022,_fey1022);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph1022 = new TH1F("Graph_Graph1022","",100,699.253,2787.217);
   Graph_Graph1022->SetMinimum(0.03210328);
   Graph_Graph1022->SetMaximum(0.08679216);
   Graph_Graph1022->SetDirectory(0);
   Graph_Graph1022->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1022->SetLineColor(ci);
   Graph_Graph1022->GetXaxis()->SetLabelFont(42);
   Graph_Graph1022->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1022->GetXaxis()->SetTitleFont(42);
   Graph_Graph1022->GetYaxis()->SetLabelFont(42);
   Graph_Graph1022->GetYaxis()->SetTitleFont(42);
   Graph_Graph1022->GetZaxis()->SetLabelFont(42);
   Graph_Graph1022->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1022);
   
   gre->Draw("pl ");
   
   Double_t _fx1023[8] = {
   880.4168,
   1123.105,
   1371.026,
   1619.994,
   1866.738,
   2115.059,
   2362.927,
   2613.265};
   Double_t _fy1023[8] = {
   0.1175941,
   0.1240392,
   0.1331659,
   0.140145,
   0.1350216,
   0.1029133,
   0.09235081,
   0.1034036};
   Double_t _fex1023[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1023[8] = {
   0.01740631,
   0.01429778,
   0.01312438,
   0.01250206,
   0.01263204,
   0.0133803,
   0.01444543,
   0.01428206};
   gre = new TGraphErrors(8,_fx1023,_fy1023,_fex1023,_fey1023);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph1023 = new TH1F("Graph_Graph1023","",100,707.132,2786.55);
   Graph_Graph1023->SetMinimum(0.07043122);
   Graph_Graph1023->SetMaximum(0.1601212);
   Graph_Graph1023->SetDirectory(0);
   Graph_Graph1023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1023->SetLineColor(ci);
   Graph_Graph1023->GetXaxis()->SetLabelFont(42);
   Graph_Graph1023->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1023->GetXaxis()->SetTitleFont(42);
   Graph_Graph1023->GetYaxis()->SetLabelFont(42);
   Graph_Graph1023->GetYaxis()->SetTitleFont(42);
   Graph_Graph1023->GetZaxis()->SetLabelFont(42);
   Graph_Graph1023->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1023);
   
   gre->Draw("pl ");
   
   TLegend *leg = new TLegend(0.49,0.75,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","All decays (unweighted)","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("","All decays (weighted)","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("","Reco vertices","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.351809,0.94,0.648191,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Run-1b: S12S18");
   pt->Draw();
   
   leg = new TLegend(0.49,0.75,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("","All decays (unweighted)","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("","All decays (weighted)","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("","Reco vertices","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
