void Overlay_AAR_500MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Aug 25 00:08:18 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-420.75,-0.00045625,3456.75,0.00410625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0S12S18_AOverMaxDiff_vs_p_fx1001[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t S0S12S18_AOverMaxDiff_vs_p_fy1001[6] = {
   9.10352e-05,
   0.0001992966,
   0.0002114051,
   0.0002173824,
   0.0002457014,
   0.0001226481};
   Double_t S0S12S18_AOverMaxDiff_vs_p_fex1001[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t S0S12S18_AOverMaxDiff_vs_p_fey1001[6] = {
   6.943051e-05,
   2.141423e-05,
   2.457345e-05,
   2.235393e-05,
   3.189189e-05,
   2.644115e-05};
   TGraphErrors *gre = new TGraphErrors(6,S0S12S18_AOverMaxDiff_vs_p_fx1001,S0S12S18_AOverMaxDiff_vs_p_fy1001,S0S12S18_AOverMaxDiff_vs_p_fex1001,S0S12S18_AOverMaxDiff_vs_p_fey1001);
   gre->SetName("S0S12S18_AOverMaxDiff_vs_p");
   gre->SetTitle(";e^{+}_{LAB} p [MeV] in range: p #minus 250 < p < p #plus 250 MeV;A_{EDM}/(#Delta#theta_{y})_{MAX}");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_AOverMaxDiff_vs_p1001 = new TH1F("Graph_S0S12S18_AOverMaxDiff_vs_p1001","",100,0,3300);
   Graph_S0S12S18_AOverMaxDiff_vs_p1001->SetMinimum(0);
   Graph_S0S12S18_AOverMaxDiff_vs_p1001->SetMaximum(0.00365);
   Graph_S0S12S18_AOverMaxDiff_vs_p1001->SetDirectory(0);
   Graph_S0S12S18_AOverMaxDiff_vs_p1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_AOverMaxDiff_vs_p1001->SetLineColor(ci);
   Graph_S0S12S18_AOverMaxDiff_vs_p1001->GetXaxis()->SetTitle("e^{+}_{LAB} p [MeV] in range: p #minus 250 < p < p #plus 250 MeV");
   Graph_S0S12S18_AOverMaxDiff_vs_p1001->GetXaxis()->SetRange(0,93);
   Graph_S0S12S18_AOverMaxDiff_vs_p1001->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_AOverMaxDiff_vs_p1001->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_AOverMaxDiff_vs_p1001->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_AOverMaxDiff_vs_p1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_AOverMaxDiff_vs_p1001->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_AOverMaxDiff_vs_p1001->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX}");
   Graph_S0S12S18_AOverMaxDiff_vs_p1001->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_AOverMaxDiff_vs_p1001->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_AOverMaxDiff_vs_p1001->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_AOverMaxDiff_vs_p1001->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_AOverMaxDiff_vs_p1001->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_AOverMaxDiff_vs_p1001->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_AOverMaxDiff_vs_p1001->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_AOverMaxDiff_vs_p1001->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_AOverMaxDiff_vs_p1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_AOverMaxDiff_vs_p1001);
   
   gre->Draw("ap");
   
   Double_t AOverMaxDiff_vs_p_fx1002[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t AOverMaxDiff_vs_p_fy1002[6] = {
   0.0002377077,
   0.001670847,
   0.002569735,
   0.002987726,
   0.003166946,
   0.002656491};
   Double_t AOverMaxDiff_vs_p_fex1002[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t AOverMaxDiff_vs_p_fey1002[6] = {
   2.203537e-05,
   6.217635e-05,
   9.501101e-05,
   0.0001343237,
   0.0001934595,
   0.0002456637};
   gre = new TGraphErrors(6,AOverMaxDiff_vs_p_fx1002,AOverMaxDiff_vs_p_fy1002,AOverMaxDiff_vs_p_fex1002,AOverMaxDiff_vs_p_fey1002);
   gre->SetName("AOverMaxDiff_vs_p");
   gre->SetTitle(";e^{+}_{LAB} p [MeV] in range: p #minus 250 < p < p #plus 250 MeV;A_{EDM}/(#Delta#theta_{y})_{MAX}");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_AOverMaxDiff_vs_p1002 = new TH1F("Graph_AOverMaxDiff_vs_p1002","",100,0,3300);
   Graph_AOverMaxDiff_vs_p1002->SetMinimum(0.0001941051);
   Graph_AOverMaxDiff_vs_p1002->SetMaximum(0.003674879);
   Graph_AOverMaxDiff_vs_p1002->SetDirectory(0);
   Graph_AOverMaxDiff_vs_p1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_AOverMaxDiff_vs_p1002->SetLineColor(ci);
   Graph_AOverMaxDiff_vs_p1002->GetXaxis()->SetTitle("e^{+}_{LAB} p [MeV] in range: p #minus 250 < p < p #plus 250 MeV");
   Graph_AOverMaxDiff_vs_p1002->GetXaxis()->SetRange(0,93);
   Graph_AOverMaxDiff_vs_p1002->GetXaxis()->CenterTitle(true);
   Graph_AOverMaxDiff_vs_p1002->GetXaxis()->SetLabelFont(42);
   Graph_AOverMaxDiff_vs_p1002->GetXaxis()->SetTitleSize(0.04);
   Graph_AOverMaxDiff_vs_p1002->GetXaxis()->SetTitleOffset(1.1);
   Graph_AOverMaxDiff_vs_p1002->GetXaxis()->SetTitleFont(42);
   Graph_AOverMaxDiff_vs_p1002->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX}");
   Graph_AOverMaxDiff_vs_p1002->GetYaxis()->CenterTitle(true);
   Graph_AOverMaxDiff_vs_p1002->GetYaxis()->SetNdivisions(4000510);
   Graph_AOverMaxDiff_vs_p1002->GetYaxis()->SetLabelFont(42);
   Graph_AOverMaxDiff_vs_p1002->GetYaxis()->SetTitleSize(0.04);
   Graph_AOverMaxDiff_vs_p1002->GetYaxis()->SetTitleOffset(1.2);
   Graph_AOverMaxDiff_vs_p1002->GetYaxis()->SetTitleFont(42);
   Graph_AOverMaxDiff_vs_p1002->GetZaxis()->SetLabelFont(42);
   Graph_AOverMaxDiff_vs_p1002->GetZaxis()->SetTitleOffset(1);
   Graph_AOverMaxDiff_vs_p1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_AOverMaxDiff_vs_p1002);
   
   gre->Draw("p");
   
   Double_t AOverMaxDiff_vs_p_fx1003[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t AOverMaxDiff_vs_p_fy1003[6] = {
   0.000279419,
   0.002026828,
   0.002911309,
   0.003276394,
   0.003078948,
   0.002209897};
   Double_t AOverMaxDiff_vs_p_fex1003[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t AOverMaxDiff_vs_p_fey1003[6] = {
   3.655345e-05,
   9.664759e-05,
   0.0001330975,
   0.0001730612,
   0.0002232485,
   0.0002770707};
   gre = new TGraphErrors(6,AOverMaxDiff_vs_p_fx1003,AOverMaxDiff_vs_p_fy1003,AOverMaxDiff_vs_p_fex1003,AOverMaxDiff_vs_p_fey1003);
   gre->SetName("AOverMaxDiff_vs_p");
   gre->SetTitle(";e^{+}_{LAB} p [MeV] in range: p #minus 250 < p < p #plus 250 MeV;A_{EDM}/(#Delta#theta_{y})_{MAX}");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_AOverMaxDiff_vs_p1003 = new TH1F("Graph_AOverMaxDiff_vs_p1003","",100,0,3300);
   Graph_AOverMaxDiff_vs_p1003->SetMinimum(0.000218579);
   Graph_AOverMaxDiff_vs_p1003->SetMaximum(0.003770115);
   Graph_AOverMaxDiff_vs_p1003->SetDirectory(0);
   Graph_AOverMaxDiff_vs_p1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_AOverMaxDiff_vs_p1003->SetLineColor(ci);
   Graph_AOverMaxDiff_vs_p1003->GetXaxis()->SetTitle("e^{+}_{LAB} p [MeV] in range: p #minus 250 < p < p #plus 250 MeV");
   Graph_AOverMaxDiff_vs_p1003->GetXaxis()->SetRange(0,93);
   Graph_AOverMaxDiff_vs_p1003->GetXaxis()->CenterTitle(true);
   Graph_AOverMaxDiff_vs_p1003->GetXaxis()->SetLabelFont(42);
   Graph_AOverMaxDiff_vs_p1003->GetXaxis()->SetTitleSize(0.04);
   Graph_AOverMaxDiff_vs_p1003->GetXaxis()->SetTitleOffset(1.1);
   Graph_AOverMaxDiff_vs_p1003->GetXaxis()->SetTitleFont(42);
   Graph_AOverMaxDiff_vs_p1003->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX}");
   Graph_AOverMaxDiff_vs_p1003->GetYaxis()->CenterTitle(true);
   Graph_AOverMaxDiff_vs_p1003->GetYaxis()->SetNdivisions(4000510);
   Graph_AOverMaxDiff_vs_p1003->GetYaxis()->SetLabelFont(42);
   Graph_AOverMaxDiff_vs_p1003->GetYaxis()->SetTitleSize(0.04);
   Graph_AOverMaxDiff_vs_p1003->GetYaxis()->SetTitleOffset(1.2);
   Graph_AOverMaxDiff_vs_p1003->GetYaxis()->SetTitleFont(42);
   Graph_AOverMaxDiff_vs_p1003->GetZaxis()->SetLabelFont(42);
   Graph_AOverMaxDiff_vs_p1003->GetZaxis()->SetTitleOffset(1);
   Graph_AOverMaxDiff_vs_p1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_AOverMaxDiff_vs_p1003);
   
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.15,0.69,0.35,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0S12S18_AOverMaxDiff_vs_p","Track reco","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("AOverMaxDiff_vs_p","Track truth","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("AOverMaxDiff_vs_p","All truth","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
