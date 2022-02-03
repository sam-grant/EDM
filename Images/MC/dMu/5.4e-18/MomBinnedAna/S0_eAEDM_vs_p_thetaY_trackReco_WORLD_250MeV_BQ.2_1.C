void S0_eAEDM_vs_p_thetaY_trackReco_WORLD_250MeV_BQ.2_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:33:57 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-168.118,-0.06420796,3409.577,0.8085043);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1067[11] = {
   451.7058,
   653.2488,
   879.8973,
   1122.993,
   1371.413,
   1620.679,
   1868.015,
   2116.494,
   2363.32,
   2615.509,
   2789.629};
   Double_t Graph0_fy1067[11] = {
   0.2127704,
   0.07093656,
   0.04101797,
   0.03369368,
   0.03079842,
   0.02927628,
   0.02882272,
   0.0296205,
   0.0306336,
   0.03043326,
   0.06512996};
   Double_t Graph0_fex1067[11] = {
   0.15762,
   0.1333984,
   0.09722522,
   0.09511307,
   0.1013248,
   0.1117834,
   0.1283377,
   0.1551935,
   0.1942938,
   0.2431966,
   0.2816604};
   Double_t Graph0_fey1067[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1067,Graph0_fy1067,Graph0_fex1067,Graph0_fey1067);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01067 = new TH1F("Graph_Graph01067","S0_",100,217.7119,3023.747);
   Graph_Graph01067->SetMinimum(0.02306328);
   Graph_Graph01067->SetMaximum(0.7212331);
   Graph_Graph01067->SetDirectory(0);
   Graph_Graph01067->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01067->SetLineColor(ci);
   Graph_Graph01067->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01067->GetXaxis()->SetRange(0,101);
   Graph_Graph01067->GetXaxis()->CenterTitle(true);
   Graph_Graph01067->GetXaxis()->SetLabelFont(42);
   Graph_Graph01067->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01067->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01067->GetXaxis()->SetTitleFont(42);
   Graph_Graph01067->GetYaxis()->SetTitle("#deltaA_{EDM} [mrad] / 250 MeV");
   Graph_Graph01067->GetYaxis()->CenterTitle(true);
   Graph_Graph01067->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01067->GetYaxis()->SetLabelFont(42);
   Graph_Graph01067->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01067->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01067->GetYaxis()->SetTitleFont(42);
   Graph_Graph01067->GetZaxis()->SetLabelFont(42);
   Graph_Graph01067->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01067->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01067);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
