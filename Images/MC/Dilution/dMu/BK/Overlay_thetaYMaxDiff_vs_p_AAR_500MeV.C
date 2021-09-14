void Overlay_thetaYMaxDiff_vs_p_AAR_500MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Aug 25 14:53:05 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-420.75,-150,3456.75,1350);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0S12S18thetaYMaxDiff_vs_p_fx1001[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t S0S12S18thetaYMaxDiff_vs_p_fy1001[6] = {
   1024.918,
   1050.649,
   718.3005,
   707.5796,
   514.6034,
   724.7331};
   Double_t S0S12S18thetaYMaxDiff_vs_p_fex1001[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t S0S12S18thetaYMaxDiff_vs_p_fey1001[6] = {
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329};
   TGraphErrors *gre = new TGraphErrors(6,S0S12S18thetaYMaxDiff_vs_p_fx1001,S0S12S18thetaYMaxDiff_vs_p_fy1001,S0S12S18thetaYMaxDiff_vs_p_fex1001,S0S12S18thetaYMaxDiff_vs_p_fey1001);
   gre->SetName("S0S12S18thetaYMaxDiff_vs_p");
   gre->SetTitle(";p [MeV]: in range p #minus 250 < p < p #plus 250;#Delta_{max}#theta_{y} [mrad];");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18thetaYMaxDiff_vs_p1001 = new TH1F("Graph_S0S12S18thetaYMaxDiff_vs_p1001","",100,0,3300);
   Graph_S0S12S18thetaYMaxDiff_vs_p1001->SetMinimum(0);
   Graph_S0S12S18thetaYMaxDiff_vs_p1001->SetMaximum(1200);
   Graph_S0S12S18thetaYMaxDiff_vs_p1001->SetDirectory(0);
   Graph_S0S12S18thetaYMaxDiff_vs_p1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0S12S18thetaYMaxDiff_vs_p1001->SetLineColor(ci);
   Graph_S0S12S18thetaYMaxDiff_vs_p1001->GetXaxis()->SetTitle("p [MeV]: in range p #minus 250 < p < p #plus 250");
   Graph_S0S12S18thetaYMaxDiff_vs_p1001->GetXaxis()->SetRange(0,93);
   Graph_S0S12S18thetaYMaxDiff_vs_p1001->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18thetaYMaxDiff_vs_p1001->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18thetaYMaxDiff_vs_p1001->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18thetaYMaxDiff_vs_p1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18thetaYMaxDiff_vs_p1001->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18thetaYMaxDiff_vs_p1001->GetYaxis()->SetTitle("#Delta_{max}#theta_{y} [mrad]");
   Graph_S0S12S18thetaYMaxDiff_vs_p1001->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18thetaYMaxDiff_vs_p1001->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18thetaYMaxDiff_vs_p1001->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18thetaYMaxDiff_vs_p1001->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18thetaYMaxDiff_vs_p1001->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18thetaYMaxDiff_vs_p1001->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18thetaYMaxDiff_vs_p1001->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18thetaYMaxDiff_vs_p1001->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18thetaYMaxDiff_vs_p1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18thetaYMaxDiff_vs_p1001);
   
   gre->Draw("ap");
   
   Double_t thetaYMaxDiff_vs_p_fx1002[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t thetaYMaxDiff_vs_p_fy1002[6] = {
   1069.946,
   156.5252,
   100.7765,
   75.04632,
   53.60452,
   36.45107};
   Double_t thetaYMaxDiff_vs_p_fex1002[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t thetaYMaxDiff_vs_p_fey1002[6] = {
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329};
   gre = new TGraphErrors(6,thetaYMaxDiff_vs_p_fx1002,thetaYMaxDiff_vs_p_fy1002,thetaYMaxDiff_vs_p_fex1002,thetaYMaxDiff_vs_p_fey1002);
   gre->SetName("thetaYMaxDiff_vs_p");
   gre->SetTitle(";e^{+}_{LAB} p [MeV] in range: p #minus 250 < p < p #plus 250 MeV;(#Delta#theta_{y})_{MAX} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_thetaYMaxDiff_vs_p1002 = new TH1F("Graph_thetaYMaxDiff_vs_p1002","",100,0,3300);
   Graph_thetaYMaxDiff_vs_p1002->SetMinimum(30.07687);
   Graph_thetaYMaxDiff_vs_p1002->SetMaximum(1176.934);
   Graph_thetaYMaxDiff_vs_p1002->SetDirectory(0);
   Graph_thetaYMaxDiff_vs_p1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_thetaYMaxDiff_vs_p1002->SetLineColor(ci);
   Graph_thetaYMaxDiff_vs_p1002->GetXaxis()->SetTitle("e^{+}_{LAB} p [MeV] in range: p #minus 250 < p < p #plus 250 MeV");
   Graph_thetaYMaxDiff_vs_p1002->GetXaxis()->SetRange(0,93);
   Graph_thetaYMaxDiff_vs_p1002->GetXaxis()->CenterTitle(true);
   Graph_thetaYMaxDiff_vs_p1002->GetXaxis()->SetLabelFont(42);
   Graph_thetaYMaxDiff_vs_p1002->GetXaxis()->SetTitleSize(0.04);
   Graph_thetaYMaxDiff_vs_p1002->GetXaxis()->SetTitleOffset(1.1);
   Graph_thetaYMaxDiff_vs_p1002->GetXaxis()->SetTitleFont(42);
   Graph_thetaYMaxDiff_vs_p1002->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad]");
   Graph_thetaYMaxDiff_vs_p1002->GetYaxis()->CenterTitle(true);
   Graph_thetaYMaxDiff_vs_p1002->GetYaxis()->SetNdivisions(4000510);
   Graph_thetaYMaxDiff_vs_p1002->GetYaxis()->SetLabelFont(42);
   Graph_thetaYMaxDiff_vs_p1002->GetYaxis()->SetTitleSize(0.04);
   Graph_thetaYMaxDiff_vs_p1002->GetYaxis()->SetTitleOffset(1.2);
   Graph_thetaYMaxDiff_vs_p1002->GetYaxis()->SetTitleFont(42);
   Graph_thetaYMaxDiff_vs_p1002->GetZaxis()->SetLabelFont(42);
   Graph_thetaYMaxDiff_vs_p1002->GetZaxis()->SetTitleOffset(1);
   Graph_thetaYMaxDiff_vs_p1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_thetaYMaxDiff_vs_p1002);
   
   gre->Draw("p");
   
   Double_t thetaYMaxDiff_vs_p_fx1003[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t thetaYMaxDiff_vs_p_fy1003[6] = {
   1069.946,
   156.5252,
   100.7765,
   75.04632,
   53.60452,
   36.45107};
   Double_t thetaYMaxDiff_vs_p_fex1003[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t thetaYMaxDiff_vs_p_fey1003[6] = {
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329};
   gre = new TGraphErrors(6,thetaYMaxDiff_vs_p_fx1003,thetaYMaxDiff_vs_p_fy1003,thetaYMaxDiff_vs_p_fex1003,thetaYMaxDiff_vs_p_fey1003);
   gre->SetName("thetaYMaxDiff_vs_p");
   gre->SetTitle(";e^{+}_{LAB} p [MeV] in range: p #minus 250 < p < p #plus 250 MeV;(#Delta#theta_{y})_{MAX} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_thetaYMaxDiff_vs_p1003 = new TH1F("Graph_thetaYMaxDiff_vs_p1003","",100,0,3300);
   Graph_thetaYMaxDiff_vs_p1003->SetMinimum(30.07687);
   Graph_thetaYMaxDiff_vs_p1003->SetMaximum(1176.934);
   Graph_thetaYMaxDiff_vs_p1003->SetDirectory(0);
   Graph_thetaYMaxDiff_vs_p1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_thetaYMaxDiff_vs_p1003->SetLineColor(ci);
   Graph_thetaYMaxDiff_vs_p1003->GetXaxis()->SetTitle("e^{+}_{LAB} p [MeV] in range: p #minus 250 < p < p #plus 250 MeV");
   Graph_thetaYMaxDiff_vs_p1003->GetXaxis()->SetRange(0,93);
   Graph_thetaYMaxDiff_vs_p1003->GetXaxis()->CenterTitle(true);
   Graph_thetaYMaxDiff_vs_p1003->GetXaxis()->SetLabelFont(42);
   Graph_thetaYMaxDiff_vs_p1003->GetXaxis()->SetTitleSize(0.04);
   Graph_thetaYMaxDiff_vs_p1003->GetXaxis()->SetTitleOffset(1.1);
   Graph_thetaYMaxDiff_vs_p1003->GetXaxis()->SetTitleFont(42);
   Graph_thetaYMaxDiff_vs_p1003->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad]");
   Graph_thetaYMaxDiff_vs_p1003->GetYaxis()->CenterTitle(true);
   Graph_thetaYMaxDiff_vs_p1003->GetYaxis()->SetNdivisions(4000510);
   Graph_thetaYMaxDiff_vs_p1003->GetYaxis()->SetLabelFont(42);
   Graph_thetaYMaxDiff_vs_p1003->GetYaxis()->SetTitleSize(0.04);
   Graph_thetaYMaxDiff_vs_p1003->GetYaxis()->SetTitleOffset(1.2);
   Graph_thetaYMaxDiff_vs_p1003->GetYaxis()->SetTitleFont(42);
   Graph_thetaYMaxDiff_vs_p1003->GetZaxis()->SetLabelFont(42);
   Graph_thetaYMaxDiff_vs_p1003->GetZaxis()->SetTitleOffset(1);
   Graph_thetaYMaxDiff_vs_p1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_thetaYMaxDiff_vs_p1003);
   
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.69,0.69,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0S12S18thetaYMaxDiff_vs_p","Reco (tracks)","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("thetaYMaxDiff_vs_p","Truth (tracks)","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("thetaYMaxDiff_vs_p","Truth (all decays)","lpf");
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
