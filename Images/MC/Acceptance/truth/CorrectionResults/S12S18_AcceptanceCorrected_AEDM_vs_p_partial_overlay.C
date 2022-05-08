void S12S18_AcceptanceCorrected_AEDM_vs_p_partial_overlay()
{
//=========Macro generated from canvas: c/c
//=========  (Sat May  7 22:38:27 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(830.3881,0.0125,2659.699,0.3875);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1004[6] = {
   1122.829,
   1372.245,
   1621.478,
   1870.594,
   2119.355,
   2367.258};
   Double_t _fy1004[6] = {
   0.3053675,
   0.2809278,
   0.2539968,
   0.2316457,
   0.1671082,
   0.1612269};
   Double_t _fex1004[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1004[6] = {
   0.01485289,
   0.01322649,
   0.01204238,
   0.01118043,
   0.01053627,
   0.01009493};
   TGraphErrors *gre = new TGraphErrors(6,_fx1004,_fy1004,_fex1004,_fey1004);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10011004 = new TH1F("Graph_Graph_Graph10011004","S12S18",100,998.3861,2491.701);
   Graph_Graph_Graph10011004->SetMinimum(0.05);
   Graph_Graph_Graph10011004->SetMaximum(0.35);
   Graph_Graph_Graph10011004->SetDirectory(0);
   Graph_Graph_Graph10011004->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10011004->SetLineColor(ci);
   Graph_Graph_Graph10011004->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_Graph10011004->GetXaxis()->SetRange(2,99);
   Graph_Graph_Graph10011004->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10011004->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011004->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10011004->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10011004->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10011004->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph_Graph10011004->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10011004->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10011004->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011004->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10011004->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph10011004->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10011004->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011004->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10011004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10011004);
   
   gre->Draw("apl");
   
   Double_t _fx1005[6] = {
   1122.829,
   1372.245,
   1621.478,
   1870.594,
   2119.355,
   2367.258};
   Double_t _fy1005[6] = {
   0.1686502,
   0.1559337,
   0.1533017,
   0.1449414,
   0.09802927,
   0.1165172};
   Double_t _fex1005[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1005[6] = {
   0.01323489,
   0.01193267,
   0.01088825,
   0.01016347,
   0.009656763,
   0.009353082};
   gre = new TGraphErrors(6,_fx1005,_fy1005,_fex1005,_fey1005);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10021005 = new TH1F("Graph_Graph_Graph10021005","",100,998.3861,2491.701);
   Graph_Graph_Graph10021005->SetMinimum(0.07902126);
   Graph_Graph_Graph10021005->SetMaximum(0.1912363);
   Graph_Graph_Graph10021005->SetDirectory(0);
   Graph_Graph_Graph10021005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10021005->SetLineColor(ci);
   Graph_Graph_Graph10021005->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10021005->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10021005->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10021005->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10021005->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10021005->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10021005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10021005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10021005);
   
   gre->Draw("pl ");
   
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
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
