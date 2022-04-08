void S0S12S18_N_vs_p_trackTruth_WORLD_250MeV_BQ_noVertCorr_0mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr  6 12:52:43 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.9312,-221370.6,3380.604,2269535);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1214[11] = {
   451.8229,
   653.3956,
   880.1993,
   1123.077,
   1371.188,
   1620.216,
   1867.292,
   2115.256,
   2363.138,
   2614.496,
   2791.826};
   Double_t Graph0_fy1214[11] = {
   139214,
   845998,
   1735211,
   1839568,
   1607846,
   1311119,
   967723,
   628997,
   372827,
   234936,
   30800};
   Double_t Graph0_fex1214[11] = {
   0.08842653,
   0.07486159,
   0.05431044,
   0.05307049,
   0.05677049,
   0.06274887,
   0.07298439,
   0.09042414,
   0.1174052,
   0.1441228,
   0.1959949};
   Double_t Graph0_fey1214[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1214,Graph0_fy1214,Graph0_fex1214,Graph0_fey1214);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01214 = new TH1F("Graph_Graph01214","S0S12S18_",100,217.7058,3026.051);
   Graph_Graph01214->SetMinimum(27720);
   Graph_Graph01214->SetMaximum(2020445);
   Graph_Graph01214->SetDirectory(0);
   Graph_Graph01214->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01214->SetLineColor(ci);
   Graph_Graph01214->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01214->GetXaxis()->SetRange(0,100);
   Graph_Graph01214->GetXaxis()->CenterTitle(true);
   Graph_Graph01214->GetXaxis()->SetLabelFont(42);
   Graph_Graph01214->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01214->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01214->GetXaxis()->SetTitleFont(42);
   Graph_Graph01214->GetYaxis()->SetTitle("Positrons / 250 MeV");
   Graph_Graph01214->GetYaxis()->CenterTitle(true);
   Graph_Graph01214->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01214->GetYaxis()->SetLabelFont(42);
   Graph_Graph01214->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01214->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01214->GetYaxis()->SetTitleFont(42);
   Graph_Graph01214->GetZaxis()->SetLabelFont(42);
   Graph_Graph01214->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01214->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01214);
   
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
