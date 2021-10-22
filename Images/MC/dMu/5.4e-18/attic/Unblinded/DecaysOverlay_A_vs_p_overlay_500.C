void DecaysOverlay_A_vs_p_overlay_500()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 22 12:52:59 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,53,800,600);
   c->Range(-420.75,-1.9875,3456.75,16.8875);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t A_vs_p_fx1001[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t A_vs_p_fy1001[6] = {
   1.242049,
   5.893826,
   10.11468,
   11.08605,
   8.470286,
   4.433844};
   Double_t A_vs_p_fex1001[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t A_vs_p_fey1001[6] = {
   0.2254446,
   0.3391218,
   0.3807454,
   0.3874117,
   0.3862708,
   0.4164463};
   TGraphErrors *gre = new TGraphErrors(6,A_vs_p_fx1001,A_vs_p_fy1001,A_vs_p_fex1001,A_vs_p_fey1001);
   gre->SetName("A_vs_p");
   gre->SetTitle("MRF");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_A_vs_p1001 = new TH1F("Graph_A_vs_p1001","MRF",100,0,3300);
   Graph_A_vs_p1001->SetMinimum(-0.1);
   Graph_A_vs_p1001->SetMaximum(15);
   Graph_A_vs_p1001->SetDirectory(0);
   Graph_A_vs_p1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_A_vs_p1001->SetLineColor(ci);
   Graph_A_vs_p1001->GetXaxis()->SetTitle("e^{+}_{LAB} p [MeV] in range: p #minus 250 < p < p #plus 250 MeV");
   Graph_A_vs_p1001->GetXaxis()->SetRange(0,93);
   Graph_A_vs_p1001->GetXaxis()->CenterTitle(true);
   Graph_A_vs_p1001->GetXaxis()->SetLabelFont(42);
   Graph_A_vs_p1001->GetXaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_A_vs_p1001->GetXaxis()->SetTitleFont(42);
   Graph_A_vs_p1001->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_A_vs_p1001->GetYaxis()->CenterTitle(true);
   Graph_A_vs_p1001->GetYaxis()->SetNdivisions(4000510);
   Graph_A_vs_p1001->GetYaxis()->SetLabelFont(42);
   Graph_A_vs_p1001->GetYaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1001->GetYaxis()->SetTitleOffset(1.2);
   Graph_A_vs_p1001->GetYaxis()->SetTitleFont(42);
   Graph_A_vs_p1001->GetZaxis()->SetLabelFont(42);
   Graph_A_vs_p1001->GetZaxis()->SetTitleOffset(1);
   Graph_A_vs_p1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_A_vs_p1001);
   
   gre->Draw("ap");
   
   Double_t A_vs_p_fx1002[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t A_vs_p_fy1002[6] = {
   1.069862,
   5.005359,
   8.919205,
   10.1216,
   8.703798,
   5.301467};
   Double_t A_vs_p_fex1002[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t A_vs_p_fey1002[6] = {
   0.2014781,
   0.2121389,
   0.2116467,
   0.205205,
   0.2020589,
   0.2155501};
   gre = new TGraphErrors(6,A_vs_p_fx1002,A_vs_p_fy1002,A_vs_p_fex1002,A_vs_p_fey1002);
   gre->SetName("A_vs_p");
   gre->SetTitle(";e^{+}_{LAB} p [MeV] in range: p #minus 250 < p < p #plus 250 MeV;A_{EDM} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_A_vs_p1002 = new TH1F("Graph_A_vs_p1002","",100,0,3300);
   Graph_A_vs_p1002->SetMinimum(0.7815459);
   Graph_A_vs_p1002->SetMaximum(11.27265);
   Graph_A_vs_p1002->SetDirectory(0);
   Graph_A_vs_p1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_A_vs_p1002->SetLineColor(ci);
   Graph_A_vs_p1002->GetXaxis()->SetTitle("e^{+}_{LAB} p [MeV] in range: p #minus 250 < p < p #plus 250 MeV");
   Graph_A_vs_p1002->GetXaxis()->SetRange(4,88);
   Graph_A_vs_p1002->GetXaxis()->CenterTitle(true);
   Graph_A_vs_p1002->GetXaxis()->SetLabelFont(42);
   Graph_A_vs_p1002->GetXaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1002->GetXaxis()->SetTitleOffset(1.1);
   Graph_A_vs_p1002->GetXaxis()->SetTitleFont(42);
   Graph_A_vs_p1002->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_A_vs_p1002->GetYaxis()->CenterTitle(true);
   Graph_A_vs_p1002->GetYaxis()->SetNdivisions(4000510);
   Graph_A_vs_p1002->GetYaxis()->SetLabelFont(42);
   Graph_A_vs_p1002->GetYaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1002->GetYaxis()->SetTitleOffset(1.2);
   Graph_A_vs_p1002->GetYaxis()->SetTitleFont(42);
   Graph_A_vs_p1002->GetZaxis()->SetLabelFont(42);
   Graph_A_vs_p1002->GetZaxis()->SetTitleOffset(1);
   Graph_A_vs_p1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_A_vs_p1002);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.11,0.79,0.49,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("A_vs_p","All decays","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("A_vs_p","Tracker decays","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4511529,0.94,0.5488471,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("MRF");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
