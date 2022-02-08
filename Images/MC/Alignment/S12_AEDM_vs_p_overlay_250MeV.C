void S12_AEDM_vs_p_overlay_250MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb  8 13:03:12 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-157.8698,-0.4221515,3347.509,1.168277);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12_AEDM_vs_p_thetaY_fx1001[11] = {
   426.5464,
   628.1315,
   855.1343,
   1098.27,
   1346.158,
   1595.134,
   1842.01,
   2089.682,
   2337.305,
   2589.435,
   2762.895};
   Double_t S12_AEDM_vs_p_thetaY_fy1001[11] = {
   0.232466,
   0.2297183,
   0.09648389,
   0.0713918,
   0.1497354,
   0.1208495,
   0.1497443,
   0.07244881,
   0.0961263,
   0.08776861,
   0.1913207};
   Double_t S12_AEDM_vs_p_thetaY_fex1001[11] = {
   0.1863767,
   0.1576667,
   0.1142577,
   0.1117406,
   0.1192129,
   0.1316415,
   0.15298,
   0.1919052,
   0.2512123,
   0.3071617,
   0.383766};
   Double_t S12_AEDM_vs_p_thetaY_fey1001[11] = {
   0.2455747,
   0.08314074,
   0.04804812,
   0.03936556,
   0.03612121,
   0.03436211,
   0.03426336,
   0.0364721,
   0.03933923,
   0.03897168,
   0.0878871};
   TGraphErrors *gre = new TGraphErrors(11,S12_AEDM_vs_p_thetaY_fx1001,S12_AEDM_vs_p_thetaY_fy1001,S12_AEDM_vs_p_thetaY_fex1001,S12_AEDM_vs_p_thetaY_fey1001);
   gre->SetName("S12_AEDM_vs_p_thetaY");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_AEDM_vs_p_thetaY1001 = new TH1F("Graph_S12_AEDM_vs_p_thetaY1001","S12",100,192.6681,2996.971);
   Graph_S12_AEDM_vs_p_thetaY1001->SetMinimum(-0.2631087);
   Graph_S12_AEDM_vs_p_thetaY1001->SetMaximum(1.009234);
   Graph_S12_AEDM_vs_p_thetaY1001->SetDirectory(0);
   Graph_S12_AEDM_vs_p_thetaY1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12_AEDM_vs_p_thetaY1001->SetLineColor(ci);
   Graph_S12_AEDM_vs_p_thetaY1001->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12_AEDM_vs_p_thetaY1001->GetXaxis()->SetRange(1,100);
   Graph_S12_AEDM_vs_p_thetaY1001->GetXaxis()->CenterTitle(true);
   Graph_S12_AEDM_vs_p_thetaY1001->GetXaxis()->SetLabelFont(42);
   Graph_S12_AEDM_vs_p_thetaY1001->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_AEDM_vs_p_thetaY1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_AEDM_vs_p_thetaY1001->GetXaxis()->SetTitleFont(42);
   Graph_S12_AEDM_vs_p_thetaY1001->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_S12_AEDM_vs_p_thetaY1001->GetYaxis()->CenterTitle(true);
   Graph_S12_AEDM_vs_p_thetaY1001->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_AEDM_vs_p_thetaY1001->GetYaxis()->SetLabelFont(42);
   Graph_S12_AEDM_vs_p_thetaY1001->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_AEDM_vs_p_thetaY1001->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_AEDM_vs_p_thetaY1001->GetYaxis()->SetTitleFont(42);
   Graph_S12_AEDM_vs_p_thetaY1001->GetZaxis()->SetLabelFont(42);
   Graph_S12_AEDM_vs_p_thetaY1001->GetZaxis()->SetTitleOffset(1);
   Graph_S12_AEDM_vs_p_thetaY1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_AEDM_vs_p_thetaY1001);
   
   gre->Draw("ap");
   
   Double_t S12_AEDM_vs_p_thetaY_fx1002[11] = {
   476.5054,
   678.0137,
   905.0764,
   1148.293,
   1396.046,
   1645.096,
   1891.799,
   2139.579,
   2387.372,
   2639.474,
   2813.051};
   Double_t S12_AEDM_vs_p_thetaY_fy1002[11] = {
   0.5297899,
   0.2116135,
   0.1109006,
   0.06469793,
   0.1351322,
   0.09771829,
   0.1403922,
   0.07464374,
   0.1053782,
   0.06790264,
   0.2438837};
   Double_t S12_AEDM_vs_p_thetaY_fex1002[11] = {
   0.1746068,
   0.1481296,
   0.1074338,
   0.1054126,
   0.1123676,
   0.1243792,
   0.1447545,
   0.1818773,
   0.2380875,
   0.2919507,
   0.3677595};
   Double_t S12_AEDM_vs_p_thetaY_fey1002[11] = {
   0.229444,
   0.07817715,
   0.04524546,
   0.03715295,
   0.0340821,
   0.03246959,
   0.03250119,
   0.03463864,
   0.0373333,
   0.03703444,
   0.08444891};
   gre = new TGraphErrors(11,S12_AEDM_vs_p_thetaY_fx1002,S12_AEDM_vs_p_thetaY_fy1002,S12_AEDM_vs_p_thetaY_fex1002,S12_AEDM_vs_p_thetaY_fey1002);
   gre->SetName("S12_AEDM_vs_p_thetaY");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_S12_AEDM_vs_p_thetaY1002 = new TH1F("Graph_S12_AEDM_vs_p_thetaY1002","S12_",100,242.622,3047.128);
   Graph_S12_AEDM_vs_p_thetaY1002->SetMinimum(0.02479048);
   Graph_S12_AEDM_vs_p_thetaY1002->SetMaximum(0.8324029);
   Graph_S12_AEDM_vs_p_thetaY1002->SetDirectory(0);
   Graph_S12_AEDM_vs_p_thetaY1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_AEDM_vs_p_thetaY1002->SetLineColor(ci);
   Graph_S12_AEDM_vs_p_thetaY1002->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12_AEDM_vs_p_thetaY1002->GetXaxis()->CenterTitle(true);
   Graph_S12_AEDM_vs_p_thetaY1002->GetXaxis()->SetLabelFont(42);
   Graph_S12_AEDM_vs_p_thetaY1002->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_AEDM_vs_p_thetaY1002->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_AEDM_vs_p_thetaY1002->GetXaxis()->SetTitleFont(42);
   Graph_S12_AEDM_vs_p_thetaY1002->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_S12_AEDM_vs_p_thetaY1002->GetYaxis()->CenterTitle(true);
   Graph_S12_AEDM_vs_p_thetaY1002->GetYaxis()->SetLabelFont(42);
   Graph_S12_AEDM_vs_p_thetaY1002->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_AEDM_vs_p_thetaY1002->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_AEDM_vs_p_thetaY1002->GetYaxis()->SetTitleFont(42);
   Graph_S12_AEDM_vs_p_thetaY1002->GetZaxis()->SetLabelFont(42);
   Graph_S12_AEDM_vs_p_thetaY1002->GetZaxis()->SetTitleOffset(1);
   Graph_S12_AEDM_vs_p_thetaY1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_AEDM_vs_p_thetaY1002);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.49,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S12_AEDM_vs_p_thetaY","Nominal","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_AEDM_vs_p_thetaY","#plus1 mm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
