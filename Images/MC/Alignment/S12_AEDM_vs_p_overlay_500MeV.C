void S12_AEDM_vs_p_overlay_500MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb  8 13:03:12 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-119.1061,-0.4475387,3153.691,1.171098);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12_AEDM_vs_p_thetaY_fx1009[6] = {
   426.5464,
   780.7845,
   1214.093,
   1700.115,
   2180.714,
   2607.869};
   Double_t S12_AEDM_vs_p_thetaY_fy1009[6] = {
   0.2099988,
   0.1402689,
   0.1088359,
   0.134498,
   0.08258894,
   0.0984721};
   Double_t S12_AEDM_vs_p_thetaY_fex1009[6] = {
   0.1863767,
   0.1675291,
   0.1619979,
   0.1967767,
   0.2962184,
   0.3556813};
   Double_t S12_AEDM_vs_p_thetaY_fey1009[6] = {
   0.2456739,
   0.04228445,
   0.02692379,
   0.02454883,
   0.02723186,
   0.03608361};
   TGraphErrors *gre = new TGraphErrors(6,S12_AEDM_vs_p_thetaY_fx1009,S12_AEDM_vs_p_thetaY_fy1009,S12_AEDM_vs_p_thetaY_fex1009,S12_AEDM_vs_p_thetaY_fey1009);
   gre->SetName("S12_AEDM_vs_p_thetaY");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_AEDM_vs_p_thetaY1009 = new TH1F("Graph_S12_AEDM_vs_p_thetaY1009","S12",100,208.1736,2826.411);
   Graph_S12_AEDM_vs_p_thetaY1009->SetMinimum(-0.2856751);
   Graph_S12_AEDM_vs_p_thetaY1009->SetMaximum(1.009234);
   Graph_S12_AEDM_vs_p_thetaY1009->SetDirectory(0);
   Graph_S12_AEDM_vs_p_thetaY1009->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12_AEDM_vs_p_thetaY1009->SetLineColor(ci);
   Graph_S12_AEDM_vs_p_thetaY1009->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12_AEDM_vs_p_thetaY1009->GetXaxis()->SetRange(1,100);
   Graph_S12_AEDM_vs_p_thetaY1009->GetXaxis()->CenterTitle(true);
   Graph_S12_AEDM_vs_p_thetaY1009->GetXaxis()->SetLabelFont(42);
   Graph_S12_AEDM_vs_p_thetaY1009->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_AEDM_vs_p_thetaY1009->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_AEDM_vs_p_thetaY1009->GetXaxis()->SetTitleFont(42);
   Graph_S12_AEDM_vs_p_thetaY1009->GetYaxis()->SetTitle("A_{EDM} [mrad] / 500 MeV");
   Graph_S12_AEDM_vs_p_thetaY1009->GetYaxis()->CenterTitle(true);
   Graph_S12_AEDM_vs_p_thetaY1009->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_AEDM_vs_p_thetaY1009->GetYaxis()->SetLabelFont(42);
   Graph_S12_AEDM_vs_p_thetaY1009->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_AEDM_vs_p_thetaY1009->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_AEDM_vs_p_thetaY1009->GetYaxis()->SetTitleFont(42);
   Graph_S12_AEDM_vs_p_thetaY1009->GetZaxis()->SetLabelFont(42);
   Graph_S12_AEDM_vs_p_thetaY1009->GetZaxis()->SetTitleOffset(1);
   Graph_S12_AEDM_vs_p_thetaY1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_AEDM_vs_p_thetaY1009);
   
   gre->Draw("ap");
   
   Double_t S12_AEDM_vs_p_thetaY_fx1010[6] = {
   476.5054,
   830.6182,
   1263.95,
   1749.84,
   2230.588,
   2657.909};
   Double_t S12_AEDM_vs_p_thetaY_fy1010[6] = {
   0.5297899,
   0.1441173,
   0.09773139,
   0.1159682,
   0.08551757,
   0.08741939};
   Double_t S12_AEDM_vs_p_thetaY_fex1010[6] = {
   0.1746068,
   0.1575889,
   0.152699,
   0.1858981,
   0.2809926,
   0.3382676};
   Double_t S12_AEDM_vs_p_thetaY_fey1010[6] = {
   0.229444,
   0.03979111,
   0.02540171,
   0.02322655,
   0.02585691,
   0.03433309};
   gre = new TGraphErrors(6,S12_AEDM_vs_p_thetaY_fx1010,S12_AEDM_vs_p_thetaY_fy1010,S12_AEDM_vs_p_thetaY_fex1010,S12_AEDM_vs_p_thetaY_fey1010);
   gre->SetName("S12_AEDM_vs_p_thetaY");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_S12_AEDM_vs_p_thetaY1010 = new TH1F("Graph_S12_AEDM_vs_p_thetaY1010","S12_",100,258.1391,2876.439);
   Graph_S12_AEDM_vs_p_thetaY1010->SetMinimum(0.04777767);
   Graph_S12_AEDM_vs_p_thetaY1010->SetMaximum(0.8298487);
   Graph_S12_AEDM_vs_p_thetaY1010->SetDirectory(0);
   Graph_S12_AEDM_vs_p_thetaY1010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_AEDM_vs_p_thetaY1010->SetLineColor(ci);
   Graph_S12_AEDM_vs_p_thetaY1010->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12_AEDM_vs_p_thetaY1010->GetXaxis()->CenterTitle(true);
   Graph_S12_AEDM_vs_p_thetaY1010->GetXaxis()->SetLabelFont(42);
   Graph_S12_AEDM_vs_p_thetaY1010->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_AEDM_vs_p_thetaY1010->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_AEDM_vs_p_thetaY1010->GetXaxis()->SetTitleFont(42);
   Graph_S12_AEDM_vs_p_thetaY1010->GetYaxis()->SetTitle("A_{EDM} [mrad] / 500 MeV");
   Graph_S12_AEDM_vs_p_thetaY1010->GetYaxis()->CenterTitle(true);
   Graph_S12_AEDM_vs_p_thetaY1010->GetYaxis()->SetLabelFont(42);
   Graph_S12_AEDM_vs_p_thetaY1010->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_AEDM_vs_p_thetaY1010->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_AEDM_vs_p_thetaY1010->GetYaxis()->SetTitleFont(42);
   Graph_S12_AEDM_vs_p_thetaY1010->GetZaxis()->SetLabelFont(42);
   Graph_S12_AEDM_vs_p_thetaY1010->GetZaxis()->SetTitleOffset(1);
   Graph_S12_AEDM_vs_p_thetaY1010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_AEDM_vs_p_thetaY1010);
   
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
