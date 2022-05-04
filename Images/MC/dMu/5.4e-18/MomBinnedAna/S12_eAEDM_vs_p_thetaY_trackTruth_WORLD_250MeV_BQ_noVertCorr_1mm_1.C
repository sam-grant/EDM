void S12_eAEDM_vs_p_thetaY_trackTruth_WORLD_250MeV_BQ_noVertCorr_1mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Apr 25 18:52:03 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-165.3732,-0.01868349,3381.354,0.3065316);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1104[11] = {
   451.6922,
   653.1475,
   880.0831,
   1123.158,
   1371.055,
   1620.208,
   1867.024,
   2114.681,
   2362.403,
   2614.687,
   2792.117};
   Double_t Graph0_fy1104[11] = {
   0.2523291,
   0.08567328,
   0.04956545,
   0.04060898,
   0.03735013,
   0.03551903,
   0.03553447,
   0.03770465,
   0.04058649,
   0.04045129,
   0.08806967};
   Double_t Graph0_fex1104[11] = {
   0.1923977,
   0.1627575,
   0.1181711,
   0.1156644,
   0.1235822,
   0.13654,
   0.1587764,
   0.1987261,
   0.2604182,
   0.3222644,
   0.4569726};
   Double_t Graph0_fey1104[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1104,Graph0_fy1104,Graph0_fex1104,Graph0_fey1104);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01104 = new TH1F("Graph_Graph01104","S12_",100,217.3924,3026.681);
   Graph_Graph01104->SetMinimum(0.01383802);
   Graph_Graph01104->SetMaximum(0.2740101);
   Graph_Graph01104->SetDirectory(0);
   Graph_Graph01104->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01104->SetLineColor(ci);
   Graph_Graph01104->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01104->GetXaxis()->SetRange(0,100);
   Graph_Graph01104->GetXaxis()->CenterTitle(true);
   Graph_Graph01104->GetXaxis()->SetLabelFont(42);
   Graph_Graph01104->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01104->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01104->GetXaxis()->SetTitleFont(42);
   Graph_Graph01104->GetYaxis()->SetTitle("#deltaA_{EDM} [mrad] / 250 MeV");
   Graph_Graph01104->GetYaxis()->CenterTitle(true);
   Graph_Graph01104->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01104->GetYaxis()->SetLabelFont(42);
   Graph_Graph01104->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01104->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01104->GetYaxis()->SetTitleFont(42);
   Graph_Graph01104->GetZaxis()->SetLabelFont(42);
   Graph_Graph01104->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01104->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01104);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
