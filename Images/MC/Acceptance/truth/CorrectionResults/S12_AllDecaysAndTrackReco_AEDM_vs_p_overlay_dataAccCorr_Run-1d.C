void S12_AllDecaysAndTrackReco_AEDM_vs_p_overlay_dataAccCorr_Run-1d()
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
   
   Double_t _fx1037[8] = {
   873.25,
   1122.829,
   1372.245,
   1621.478,
   1870.594,
   2119.355,
   2367.258,
   2613.22};
   Double_t _fy1037[8] = {
   0.318886,
   0.3053675,
   0.2809278,
   0.2539968,
   0.2316457,
   0.1671082,
   0.1612269,
   0.09530915};
   Double_t _fex1037[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1037[8] = {
   0.01725572,
   0.01485289,
   0.01322649,
   0.01204238,
   0.01118043,
   0.01053627,
   0.01009493,
   0.009871124};
   TGraphErrors *gre = new TGraphErrors(8,_fx1037,_fy1037,_fex1037,_fey1037);
   gre->SetName("");
   gre->SetTitle("Run-1d: S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1037 = new TH1F("Graph_Graph1037","Run-1d: S12",100,699.253,2787.217);
   Graph_Graph1037->SetMinimum(0);
   Graph_Graph1037->SetMaximum(0.35);
   Graph_Graph1037->SetDirectory(0);
   Graph_Graph1037->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1037->SetLineColor(ci);
   Graph_Graph1037->GetXaxis()->SetRange(4,97);
   Graph_Graph1037->GetXaxis()->CenterTitle(true);
   Graph_Graph1037->GetXaxis()->SetLabelFont(42);
   Graph_Graph1037->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1037->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1037->GetXaxis()->SetTitleFont(42);
   Graph_Graph1037->GetYaxis()->CenterTitle(true);
   Graph_Graph1037->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1037->GetYaxis()->SetLabelFont(42);
   Graph_Graph1037->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1037->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1037->GetYaxis()->SetTitleFont(42);
   Graph_Graph1037->GetZaxis()->SetLabelFont(42);
   Graph_Graph1037->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1037);
   
   gre->Draw("apl");
   
   Double_t _fx1038[8] = {
   873.25,
   1122.829,
   1372.245,
   1621.478,
   1870.594,
   2119.355,
   2367.258,
   2613.22};
   Double_t _fy1038[8] = {
   0.06281012,
   0.08440174,
   0.09069056,
   0.09687749,
   0.1001339,
   0.06253278,
   0.08084658,
   0.06218677};
   Double_t _fex1038[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1038[8] = {
   0.007331573,
   0.00704142,
   0.006954939,
   0.00661466,
   0.006416441,
   0.006030634,
   0.006065966,
   0.006942888};
   gre = new TGraphErrors(8,_fx1038,_fy1038,_fex1038,_fey1038);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph1038 = new TH1F("Graph_Graph1038","",100,699.253,2787.217);
   Graph_Graph1038->SetMinimum(0.05011323);
   Graph_Graph1038->SetMaximum(0.111681);
   Graph_Graph1038->SetDirectory(0);
   Graph_Graph1038->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1038->SetLineColor(ci);
   Graph_Graph1038->GetXaxis()->SetLabelFont(42);
   Graph_Graph1038->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1038->GetXaxis()->SetTitleFont(42);
   Graph_Graph1038->GetYaxis()->SetLabelFont(42);
   Graph_Graph1038->GetYaxis()->SetTitleFont(42);
   Graph_Graph1038->GetZaxis()->SetLabelFont(42);
   Graph_Graph1038->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1038->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1038);
   
   gre->Draw("pl ");
   
   Double_t _fx1039[8] = {
   880.2814,
   1123.172,
   1371.155,
   1620.23,
   1866.957,
   2115.041,
   2362.635,
   2614.361};
   Double_t _fy1039[8] = {
   0.1055045,
   0.144956,
   0.1240867,
   0.1461097,
   0.1496318,
   0.1256292,
   0.08608835,
   0.0814938};
   Double_t _fex1039[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1039[8] = {
   0.0246748,
   0.02029052,
   0.01853614,
   0.01760011,
   0.01769914,
   0.01873548,
   0.02016337,
   0.02006182};
   gre = new TGraphErrors(8,_fx1039,_fy1039,_fex1039,_fey1039);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph1039 = new TH1F("Graph_Graph1039","",100,706.8735,2787.769);
   Graph_Graph1039->SetMinimum(0.05084208);
   Graph_Graph1039->SetMaximum(0.1779208);
   Graph_Graph1039->SetDirectory(0);
   Graph_Graph1039->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1039->SetLineColor(ci);
   Graph_Graph1039->GetXaxis()->SetLabelFont(42);
   Graph_Graph1039->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1039->GetXaxis()->SetTitleFont(42);
   Graph_Graph1039->GetYaxis()->SetLabelFont(42);
   Graph_Graph1039->GetYaxis()->SetTitleFont(42);
   Graph_Graph1039->GetZaxis()->SetLabelFont(42);
   Graph_Graph1039->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1039);
   
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
   
   TPaveText *pt = new TPaveText(0.3844724,0.94,0.6155276,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Run-1d: S12");
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
