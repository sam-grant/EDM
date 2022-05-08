void S12_AcceptanceCorrected_AEDM_vs_p_overlay()
{
//=========Macro generated from canvas: c/c
//=========  (Sat May  7 22:35:44 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(830.3881,-0.04375,2659.699,0.39375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1001[6] = {
   1122.829,
   1372.245,
   1621.478,
   1870.594,
   2119.355,
   2367.258};
   Double_t _fy1001[6] = {
   0.3053675,
   0.2809278,
   0.2539968,
   0.2316457,
   0.1671082,
   0.1612269};
   Double_t _fex1001[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1001[6] = {
   0.01485289,
   0.01322649,
   0.01204238,
   0.01118043,
   0.01053627,
   0.01009493};
   TGraphErrors *gre = new TGraphErrors(6,_fx1001,_fy1001,_fex1001,_fey1001);
   gre->SetName("");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","S12",100,998.3861,2491.701);
   Graph_Graph1001->SetMinimum(0);
   Graph_Graph1001->SetMaximum(0.35);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1001->GetXaxis()->SetRange(2,99);
   Graph_Graph1001->GetXaxis()->CenterTitle(true);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph1001->GetYaxis()->CenterTitle(true);
   Graph_Graph1001->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1001->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   gre->Draw("apl");
   
   Double_t _fx1002[6] = {
   1122.829,
   1372.245,
   1621.478,
   1870.594,
   2119.355,
   2367.258};
   Double_t _fy1002[6] = {
   0.1708381,
   0.1553626,
   0.1525257,
   0.146837,
   0.09871806,
   0.1185314};
   Double_t _fex1002[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1002[6] = {
   0.01327673,
   0.01194721,
   0.01089732,
   0.01020842,
   0.009689047,
   0.009420431};
   gre = new TGraphErrors(6,_fx1002,_fy1002,_fex1002,_fey1002);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","",100,998.3861,2491.701);
   Graph_Graph1002->SetMinimum(0.07952043);
   Graph_Graph1002->SetMaximum(0.1936234);
   Graph_Graph1002->SetDirectory(0);
   Graph_Graph1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1002->SetLineColor(ci);
   Graph_Graph1002->GetXaxis()->SetLabelFont(42);
   Graph_Graph1002->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1002->GetXaxis()->SetTitleFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph1002->GetYaxis()->SetTitleFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelFont(42);
   Graph_Graph1002->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1002);
   
   gre->Draw("pl ");
   
   Double_t _fx1003[6] = {
   1123.157,
   1371.168,
   1620.209,
   1866.98,
   2114.946,
   2362.647};
   Double_t _fy1003[6] = {
   0.1404079,
   0.1260699,
   0.1495787,
   0.1490699,
   0.1231835,
   0.08041457};
   Double_t _fex1003[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1003[6] = {
   0.02023076,
   0.01845655,
   0.01754713,
   0.01763438,
   0.01864525,
   0.02007888};
   gre = new TGraphErrors(6,_fx1003,_fy1003,_fex1003,_fey1003);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","",100,999.2077,2486.596);
   Graph_Graph1003->SetMinimum(0.04965667);
   Graph_Graph1003->SetMaximum(0.1778048);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1003->SetLineColor(ci);
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1003);
   
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
   entry=leg->AddEntry("","Truth vertices","lpf");
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
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
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
   entry=leg->AddEntry("","Truth vertices","lpf");
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
