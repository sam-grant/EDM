void S18_AcceptanceCorrected_AEDM_vs_p_partial_overlay()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jun  3 03:41:26 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(830.3881,0.0125,2659.699,0.3875);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1011[6] = {
   1122.829,
   1372.245,
   1621.478,
   1870.594,
   2119.355,
   2367.258};
   Double_t _fy1011[6] = {
   0.3053643,
   0.2809277,
   0.2540005,
   0.2316335,
   0.1671032,
   0.1612248};
   Double_t _fex1011[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1011[6] = {
   0.01485295,
   0.01322656,
   0.01204244,
   0.01118049,
   0.01053632,
   0.010095};
   TGraphErrors *gre = new TGraphErrors(6,_fx1011,_fy1011,_fex1011,_fey1011);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10081011 = new TH1F("Graph_Graph_Graph10081011","S18",100,998.3861,2491.701);
   Graph_Graph_Graph10081011->SetMinimum(0.05);
   Graph_Graph_Graph10081011->SetMaximum(0.35);
   Graph_Graph_Graph10081011->SetDirectory(0);
   Graph_Graph_Graph10081011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10081011->SetLineColor(ci);
   Graph_Graph_Graph10081011->GetXaxis()->SetTitle("Momentum [MeV]");
   Graph_Graph_Graph10081011->GetXaxis()->SetRange(2,99);
   Graph_Graph_Graph10081011->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10081011->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10081011->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10081011->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10081011->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10081011->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph_Graph10081011->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10081011->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10081011->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10081011->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10081011->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph10081011->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10081011->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10081011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10081011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10081011);
   
   gre->Draw("ap");
   
   Double_t _fx1012[6] = {
   1122.829,
   1372.245,
   1621.478,
   1870.594,
   2119.355,
   2367.258};
   Double_t _fy1012[6] = {
   0.1664158,
   0.15648,
   0.1540877,
   0.1429134,
   0.09729628,
   0.1144277};
   Double_t _fex1012[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1012[6] = {
   0.01322669,
   0.01194902,
   0.01091056,
   0.0101513,
   0.009671209,
   0.009359121};
   gre = new TGraphErrors(6,_fx1012,_fy1012,_fex1012,_fey1012);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10091012 = new TH1F("Graph_Graph_Graph10091012","",100,998.3861,2491.701);
   Graph_Graph_Graph10091012->SetMinimum(0.07842333);
   Graph_Graph_Graph10091012->SetMaximum(0.1888442);
   Graph_Graph_Graph10091012->SetDirectory(0);
   Graph_Graph_Graph10091012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10091012->SetLineColor(ci);
   Graph_Graph_Graph10091012->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10091012->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10091012->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10091012->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10091012->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10091012->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10091012->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10091012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10091012);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.65,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","All decays","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
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
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   
   leg = new TLegend(0.65,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("","All decays","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
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
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
