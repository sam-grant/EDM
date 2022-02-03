void S0S12S18_eAEDM_vs_p_thetaY_trackReco_WORLD_250MeV_BQ.1_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:33:13 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.7499,-0.04345761,3408.061,0.551576);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1215[11] = {
   451.6989,
   653.3673,
   880.3254,
   1123.144,
   1371.143,
   1620.226,
   1867.221,
   2115.543,
   2362.981,
   2614.165,
   2788.507};
   Double_t Graph0_fy1215[11] = {
   0.1453902,
   0.04864242,
   0.02799681,
   0.02296898,
   0.0210757,
   0.02005627,
   0.02009681,
   0.02106189,
   0.0223566,
   0.02214968,
   0.04971132};
   Double_t Graph0_fex1215[11] = {
   0.1090345,
   0.09195276,
   0.06666504,
   0.06508974,
   0.06952338,
   0.07686814,
   0.08948912,
   0.1108082,
   0.1425331,
   0.1752943,
   0.2141166};
   Double_t Graph0_fey1215[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1215,Graph0_fy1215,Graph0_fex1215,Graph0_fey1215);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01215 = new TH1F("Graph_Graph01215","S0S12S18_",100,217.8768,3022.434);
   Graph_Graph01215->SetMinimum(0.01604575);
   Graph_Graph01215->SetMaximum(0.4920726);
   Graph_Graph01215->SetDirectory(0);
   Graph_Graph01215->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01215->SetLineColor(ci);
   Graph_Graph01215->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01215->GetXaxis()->SetRange(0,101);
   Graph_Graph01215->GetXaxis()->CenterTitle(true);
   Graph_Graph01215->GetXaxis()->SetLabelFont(42);
   Graph_Graph01215->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01215->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01215->GetXaxis()->SetTitleFont(42);
   Graph_Graph01215->GetYaxis()->SetTitle("#deltaA_{EDM} [mrad] / 250 MeV");
   Graph_Graph01215->GetYaxis()->CenterTitle(true);
   Graph_Graph01215->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01215->GetYaxis()->SetLabelFont(42);
   Graph_Graph01215->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01215->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01215->GetYaxis()->SetTitleFont(42);
   Graph_Graph01215->GetZaxis()->SetLabelFont(42);
   Graph_Graph01215->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01215->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01215);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
