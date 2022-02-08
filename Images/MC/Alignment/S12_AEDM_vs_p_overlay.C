void S12_AEDM_vs_p_overlay()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Feb  7 14:20:47 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-132.8722,-0.4285305,3372.511,0.9977617);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12_AEDM_vs_p_thetaY_fx1001[11] = {
   451.5447,
   653.1262,
   880.1324,
   1123.27,
   1371.162,
   1620.143,
   1867.01,
   2114.679,
   2362.312,
   2614.437,
   2787.897};
   Double_t S12_AEDM_vs_p_thetaY_fy1001[11] = {
   0.189353,
   0.1935776,
   0.08786761,
   0.06167738,
   0.1366003,
   0.1125944,
   0.1431732,
   0.06306952,
   0.09167692,
   0.06732363,
   0.2082785};
   Double_t S12_AEDM_vs_p_thetaY_fex1001[11] = {
   0.1863812,
   0.1576647,
   0.1142621,
   0.1117432,
   0.1192156,
   0.1316466,
   0.1529769,
   0.1919183,
   0.2512301,
   0.3071742,
   0.3838265};
   Double_t S12_AEDM_vs_p_thetaY_fey1001[11] = {
   0.2252542,
   0.07622964,
   0.04407339,
   0.03610719,
   0.03313242,
   0.03151894,
   0.03144514,
   0.03345686,
   0.03610088,
   0.0357752,
   0.08103644};
   TGraphErrors *gre = new TGraphErrors(11,S12_AEDM_vs_p_thetaY_fx1001,S12_AEDM_vs_p_thetaY_fy1001,S12_AEDM_vs_p_thetaY_fex1001,S12_AEDM_vs_p_thetaY_fey1001);
   gre->SetName("S12_AEDM_vs_p_thetaY");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_AEDM_vs_p_thetaY1001 = new TH1F("Graph_S12_AEDM_vs_p_thetaY1001","S12",100,217.6661,3021.973);
   Graph_S12_AEDM_vs_p_thetaY1001->SetMinimum(-0.2859013);
   Graph_S12_AEDM_vs_p_thetaY1001->SetMaximum(0.8551325);
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
   451.5772,
   653.0552,
   880.0811,
   1123.256,
   1371.053,
   1620.101,
   1866.93,
   2114.522,
   2362.279,
   2614.457,
   2787.823};
   Double_t S12_AEDM_vs_p_thetaY_fy1002[11] = {
   0.3516847,
   0.2425923,
   0.1182957,
   0.08983178,
   0.1242222,
   0.1270852,
   0.1490283,
   0.05768946,
   0.1010388,
   0.06423135,
   0.1982577};
   Double_t S12_AEDM_vs_p_thetaY_fex1002[11] = {
   0.1924069,
   0.1635947,
   0.1188262,
   0.1164574,
   0.124175,
   0.1375161,
   0.160136,
   0.20159,
   0.2639137,
   0.3238621,
   0.40328};
   Double_t S12_AEDM_vs_p_thetaY_fey1002[11] = {
   0.2534477,
   0.08634473,
   0.04999432,
   0.04104196,
   0.03768096,
   0.03589507,
   0.0359471,
   0.03834456,
   0.0413507,
   0.04107431,
   0.09386439};
   gre = new TGraphErrors(11,S12_AEDM_vs_p_thetaY_fx1002,S12_AEDM_vs_p_thetaY_fy1002,S12_AEDM_vs_p_thetaY_fex1002,S12_AEDM_vs_p_thetaY_fey1002);
   gre->SetName("S12_AEDM_vs_p_thetaY");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_S12_AEDM_vs_p_thetaY1002 = new TH1F("Graph_S12_AEDM_vs_p_thetaY1002","S12_",100,217.7007,3021.911);
   Graph_S12_AEDM_vs_p_thetaY1002->SetMinimum(0.04691839);
   Graph_S12_AEDM_vs_p_thetaY1002->SetMaximum(0.7804106);
   Graph_S12_AEDM_vs_p_thetaY1002->SetDirectory(0);
   Graph_S12_AEDM_vs_p_thetaY1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_AEDM_vs_p_thetaY1002->SetLineColor(ci);
   Graph_S12_AEDM_vs_p_thetaY1002->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12_AEDM_vs_p_thetaY1002->GetXaxis()->SetRange(0,101);
   Graph_S12_AEDM_vs_p_thetaY1002->GetXaxis()->CenterTitle(true);
   Graph_S12_AEDM_vs_p_thetaY1002->GetXaxis()->SetLabelFont(42);
   Graph_S12_AEDM_vs_p_thetaY1002->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_AEDM_vs_p_thetaY1002->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_AEDM_vs_p_thetaY1002->GetXaxis()->SetTitleFont(42);
   Graph_S12_AEDM_vs_p_thetaY1002->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_S12_AEDM_vs_p_thetaY1002->GetYaxis()->CenterTitle(true);
   Graph_S12_AEDM_vs_p_thetaY1002->GetYaxis()->SetNdivisions(4000510);
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
