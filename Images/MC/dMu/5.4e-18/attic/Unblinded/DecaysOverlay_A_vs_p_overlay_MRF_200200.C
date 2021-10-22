void DecaysOverlay_A_vs_p_overlay_MRF_200200()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 22 13:33:50 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-420.75,-3.42097,3456.75,16.09062);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t A_vs_p_fx1001[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t A_vs_p_fy1001[15] = {
   0.08016442,
   1.362396,
   4.085895,
   4.864728,
   7.640853,
   9.095763,
   10.78248,
   10.55449,
   12.22825,
   10.4641,
   8.459376,
   8.543845,
   7.028202,
   4.702405,
   2.592409};
   Double_t A_vs_p_fex1001[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t A_vs_p_fey1001[15] = {
   0.2492031,
   0.3945467,
   0.4764866,
   0.5299871,
   0.5667886,
   0.5916406,
   0.6064705,
   0.6123481,
   0.6104377,
   0.60655,
   0.6028241,
   0.6016263,
   0.6035354,
   0.6110637,
   0.6368995};
   TGraphErrors *gre = new TGraphErrors(15,A_vs_p_fx1001,A_vs_p_fy1001,A_vs_p_fex1001,A_vs_p_fey1001);
   gre->SetName("A_vs_p");
   gre->SetTitle("MRF");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_A_vs_p1001 = new TH1F("Graph_A_vs_p1001","MRF",100,0,3300);
   Graph_A_vs_p1001->SetMinimum(-1.469811);
   Graph_A_vs_p1001->SetMaximum(14.13946);
   Graph_A_vs_p1001->SetDirectory(0);
   Graph_A_vs_p1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_A_vs_p1001->SetLineColor(ci);
   Graph_A_vs_p1001->GetXaxis()->SetTitle("e^{+}_{LAB} p [MeV] in range: p #minus 100 < p < p #plus 100 MeV");
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
   
   Double_t A_vs_p_fx1002[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t A_vs_p_fy1002[15] = {
   0.09879166,
   1.356614,
   2.249015,
   4.471707,
   6.462895,
   7.855685,
   9.570279,
   10.01233,
   9.957642,
   10.27696,
   9.437971,
   8.658353,
   6.63752,
   5.756982,
   2.442772};
   Double_t A_vs_p_fex1002[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t A_vs_p_fey1002[15] = {
   0.2685076,
   0.3197222,
   0.3328843,
   0.3354748,
   0.3339772,
   0.3347366,
   0.3352901,
   0.3309019,
   0.323798,
   0.3191728,
   0.3160877,
   0.3151326,
   0.3139416,
   0.315873,
   0.3300827};
   gre = new TGraphErrors(15,A_vs_p_fx1002,A_vs_p_fy1002,A_vs_p_fex1002,A_vs_p_fey1002);
   gre->SetName("A_vs_p");
   gre->SetTitle(";e^{+}_{LAB} p [MeV] in range: p #minus 100 < p < p #plus 100 MeV;A_{EDM} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_A_vs_p1002 = new TH1F("Graph_A_vs_p1002","",100,0,3300);
   Graph_A_vs_p1002->SetMinimum(-1.246301);
   Graph_A_vs_p1002->SetMaximum(11.67272);
   Graph_A_vs_p1002->SetDirectory(0);
   Graph_A_vs_p1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_A_vs_p1002->SetLineColor(ci);
   Graph_A_vs_p1002->GetXaxis()->SetTitle("e^{+}_{LAB} p [MeV] in range: p #minus 100 < p < p #plus 100 MeV");
   Graph_A_vs_p1002->GetXaxis()->SetRange(0,93);
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
   
   TPaveText *pt = new TPaveText(0.4510553,0.94,0.5489447,0.995,"blNDC");
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
