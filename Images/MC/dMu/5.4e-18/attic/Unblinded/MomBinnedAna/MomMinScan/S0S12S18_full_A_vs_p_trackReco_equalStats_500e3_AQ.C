void S0S12S18_full_A_vs_p_trackReco_equalStats_500e3_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:10:34 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-329.725,0.05357625,2725.525,0.2105737);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1388[12] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t Graph0_fy1388[12] = {
   0.1367509,
   0.1364384,
   0.1441265,
   0.1270212,
   0.1448073,
   0.1299103,
   0.1153041,
   0.1403771,
   0.1124672,
   0.1058759,
   0.0978898,
   0.1044346};
   Double_t Graph0_fex1388[12] = {
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
   0,
   0};
   Double_t Graph0_fey1388[12] = {
   0.04073533,
   0.04072887,
   0.04028094,
   0.03735381,
   0.03375318,
   0.03044228,
   0.02756459,
   0.02496807,
   0.02259508,
   0.02035576,
   0.01814731,
   0.01594745};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1388,Graph0_fy1388,Graph0_fex1388,Graph0_fey1388);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01388 = new TH1F("Graph_Graph01388","S0S12S18",100,0,2420);
   Graph_Graph01388->SetMinimum(0.069276);
   Graph_Graph01388->SetMaximum(0.1948739);
   Graph_Graph01388->SetDirectory(0);
   Graph_Graph01388->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01388->SetLineColor(ci);
   Graph_Graph01388->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01388->GetXaxis()->SetRange(0,100);
   Graph_Graph01388->GetXaxis()->CenterTitle(true);
   Graph_Graph01388->GetXaxis()->SetLabelFont(42);
   Graph_Graph01388->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01388->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01388->GetXaxis()->SetTitleFont(42);
   Graph_Graph01388->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01388->GetYaxis()->CenterTitle(true);
   Graph_Graph01388->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01388->GetYaxis()->SetLabelFont(42);
   Graph_Graph01388->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01388->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01388->GetYaxis()->SetTitleFont(42);
   Graph_Graph01388->GetZaxis()->SetLabelFont(42);
   Graph_Graph01388->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01388->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01388);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4033166,0.94,0.5966834,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
