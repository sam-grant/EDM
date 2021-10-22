void c_vs_p_simple_overlay_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May 13 01:18:45 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-0.5000001,-2.5,8.5,2.5);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_fx1413[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t S0_c_vs_p_fy1413[7] = {
   -0.1778714,
   -0.05222131,
   -0.02358424,
   -0.02189752,
   -0.002607397,
   -0.02471492,
   -0.04076063};
   Double_t S0_c_vs_p_fex1413[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0_c_vs_p_fey1413[7] = {
   0.01270949,
   0.01258078,
   0.01267162,
   0.01322991,
   0.01462691,
   0.01796981,
   0.03019955};
   TGraphErrors *gre = new TGraphErrors(7,S0_c_vs_p_fx1413,S0_c_vs_p_fy1413,S0_c_vs_p_fex1413,S0_c_vs_p_fey1413);
   gre->SetName("S0_c_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p1413 = new TH1F("Graph_S0_c_vs_p1413","",100,0.4,7.6);
   Graph_S0_c_vs_p1413->SetMinimum(-2);
   Graph_S0_c_vs_p1413->SetMaximum(2);
   Graph_S0_c_vs_p1413->SetDirectory(0);
   Graph_S0_c_vs_p1413->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p1413->SetLineColor(ci);
   Graph_S0_c_vs_p1413->GetXaxis()->SetTitle("Symmetric cut");
   Graph_S0_c_vs_p1413->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1413->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1413->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1413->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1413->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1413->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p1413->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1413->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p1413->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1413->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1413->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1413->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1413->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1413->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p1413->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p1413);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_fx1414[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t S12_c_vs_p_fy1414[7] = {
   -0.4534408,
   -0.3227776,
   -0.2578547,
   -0.2225994,
   -0.188458,
   -0.1743134,
   -0.1496941};
   Double_t S12_c_vs_p_fex1414[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12_c_vs_p_fey1414[7] = {
   0.01288616,
   0.01275947,
   0.01286349,
   0.01339663,
   0.01475726,
   0.01806616,
   0.03035247};
   gre = new TGraphErrors(7,S12_c_vs_p_fx1414,S12_c_vs_p_fy1414,S12_c_vs_p_fex1414,S12_c_vs_p_fey1414);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1414 = new TH1F("Graph_S12_c_vs_p1414","S12",100,0.4,7.6);
   Graph_S12_c_vs_p1414->SetMinimum(-0.5010255);
   Graph_S12_c_vs_p1414->SetMaximum(-0.08464306);
   Graph_S12_c_vs_p1414->SetDirectory(0);
   Graph_S12_c_vs_p1414->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p1414->SetLineColor(ci);
   Graph_S12_c_vs_p1414->GetXaxis()->SetTitle("Symmetric cut");
   Graph_S12_c_vs_p1414->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1414->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1414->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1414->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p1414->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1414->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p1414->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1414->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p1414->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1414->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1414->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p1414->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1414->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1414->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p1414->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p1414);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_fx1415[7] = {
   1,
   2,
   3,
   4,
   5,
   6,
   7};
   Double_t S18_c_vs_p_fy1415[7] = {
   -0.4073787,
   -0.277311,
   -0.2297717,
   -0.2000478,
   -0.1750029,
   -0.1454359,
   -0.09701132};
   Double_t S18_c_vs_p_fex1415[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S18_c_vs_p_fey1415[7] = {
   0.01298257,
   0.01286163,
   0.01298602,
   0.01354537,
   0.01491203,
   0.01824721,
   0.03070376};
   gre = new TGraphErrors(7,S18_c_vs_p_fx1415,S18_c_vs_p_fy1415,S18_c_vs_p_fex1415,S18_c_vs_p_fey1415);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p1415 = new TH1F("Graph_S18_c_vs_p1415","S18",100,0.4,7.6);
   Graph_S18_c_vs_p1415->SetMinimum(-0.4557667);
   Graph_S18_c_vs_p1415->SetMaximum(-0.03090219);
   Graph_S18_c_vs_p1415->SetDirectory(0);
   Graph_S18_c_vs_p1415->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p1415->SetLineColor(ci);
   Graph_S18_c_vs_p1415->GetXaxis()->SetTitle("Symmetric cut");
   Graph_S18_c_vs_p1415->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1415->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1415->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1415->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p1415->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1415->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p1415->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1415->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p1415->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1415->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1415->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p1415->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1415->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1415->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p1415->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p1415);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_c_vs_p","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_c_vs_p","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_c_vs_p","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
