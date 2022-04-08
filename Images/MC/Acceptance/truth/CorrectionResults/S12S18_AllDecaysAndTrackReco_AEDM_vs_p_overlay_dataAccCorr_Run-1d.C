void S12S18_AllDecaysAndTrackReco_AEDM_vs_p_overlay_dataAccCorr_Run-1d()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr  8 16:23:17 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(516.5561,-0.04375,2969.914,0.39375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1045[8] = {
   873.25,
   1122.829,
   1372.245,
   1621.478,
   1870.594,
   2119.355,
   2367.258,
   2613.22};
   Double_t _fy1045[8] = {
   0.318886,
   0.3053675,
   0.2809278,
   0.2539968,
   0.2316457,
   0.1671082,
   0.1612269,
   0.09530915};
   Double_t _fex1045[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1045[8] = {
   0.01725572,
   0.01485289,
   0.01322649,
   0.01204238,
   0.01118043,
   0.01053627,
   0.01009493,
   0.009871124};
   TGraphErrors *gre = new TGraphErrors(8,_fx1045,_fy1045,_fex1045,_fey1045);
   gre->SetName("");
   gre->SetTitle("Run-1d: S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1045 = new TH1F("Graph_Graph1045","Run-1d: S12S18",100,699.253,2787.217);
   Graph_Graph1045->SetMinimum(0);
   Graph_Graph1045->SetMaximum(0.35);
   Graph_Graph1045->SetDirectory(0);
   Graph_Graph1045->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1045->SetLineColor(ci);
   Graph_Graph1045->GetXaxis()->SetRange(4,97);
   Graph_Graph1045->GetXaxis()->CenterTitle(true);
   Graph_Graph1045->GetXaxis()->SetLabelFont(42);
   Graph_Graph1045->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1045->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1045->GetXaxis()->SetTitleFont(42);
   Graph_Graph1045->GetYaxis()->CenterTitle(true);
   Graph_Graph1045->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1045->GetYaxis()->SetLabelFont(42);
   Graph_Graph1045->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1045->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1045->GetYaxis()->SetTitleFont(42);
   Graph_Graph1045->GetZaxis()->SetLabelFont(42);
   Graph_Graph1045->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1045);
   
   gre->Draw("apl");
   
   Double_t _fx1046[8] = {
   873.25,
   1122.829,
   1372.245,
   1621.478,
   1870.594,
   2119.355,
   2367.258,
   2613.22};
   Double_t _fy1046[8] = {
   0.04285927,
   0.0626228,
   0.07109073,
   0.07605383,
   0.07596578,
   0.0480498,
   0.05695157,
   0.04826774};
   Double_t _fex1046[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1046[8] = {
   0.00539526,
   0.005576215,
   0.005706023,
   0.005438639,
   0.005139567,
   0.004736683,
   0.004444077,
   0.005615981};
   gre = new TGraphErrors(8,_fx1046,_fy1046,_fex1046,_fey1046);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph1046 = new TH1F("Graph_Graph1046","",100,699.253,2787.217);
   Graph_Graph1046->SetMinimum(0.03306117);
   Graph_Graph1046->SetMaximum(0.08589531);
   Graph_Graph1046->SetDirectory(0);
   Graph_Graph1046->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1046->SetLineColor(ci);
   Graph_Graph1046->GetXaxis()->SetLabelFont(42);
   Graph_Graph1046->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1046->GetXaxis()->SetTitleFont(42);
   Graph_Graph1046->GetYaxis()->SetLabelFont(42);
   Graph_Graph1046->GetYaxis()->SetTitleFont(42);
   Graph_Graph1046->GetZaxis()->SetLabelFont(42);
   Graph_Graph1046->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1046->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1046);
   
   gre->Draw("pl ");
   
   Double_t _fx1047[8] = {
   880.4168,
   1123.105,
   1371.026,
   1619.994,
   1866.738,
   2115.059,
   2362.927,
   2613.265};
   Double_t _fy1047[8] = {
   0.1175941,
   0.1240392,
   0.1331659,
   0.140145,
   0.1350216,
   0.1029133,
   0.09235081,
   0.1034036};
   Double_t _fex1047[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1047[8] = {
   0.01740631,
   0.01429778,
   0.01312438,
   0.01250206,
   0.01263204,
   0.0133803,
   0.01444543,
   0.01428206};
   gre = new TGraphErrors(8,_fx1047,_fy1047,_fex1047,_fey1047);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph1047 = new TH1F("Graph_Graph1047","",100,707.132,2786.55);
   Graph_Graph1047->SetMinimum(0.07043122);
   Graph_Graph1047->SetMaximum(0.1601212);
   Graph_Graph1047->SetDirectory(0);
   Graph_Graph1047->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1047->SetLineColor(ci);
   Graph_Graph1047->GetXaxis()->SetLabelFont(42);
   Graph_Graph1047->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1047->GetXaxis()->SetTitleFont(42);
   Graph_Graph1047->GetYaxis()->SetLabelFont(42);
   Graph_Graph1047->GetYaxis()->SetTitleFont(42);
   Graph_Graph1047->GetZaxis()->SetLabelFont(42);
   Graph_Graph1047->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1047);
   
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
   TText *pt_LaTex = pt->AddText("Run-1d: S12S18");
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
