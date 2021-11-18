void S0S12S18_eAEDM_vs_p_trackRecoControl_WORLD_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:36:23 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(499.6469,-0.03048878,2744.532,0.3119783);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1072[11] = {
   453.0417,
   656.6012,
   884.5758,
   1123.455,
   1363.525,
   1601.494,
   1825.195,
   2101.26,
   2412.734,
   2638.441,
   2791.028};
   Double_t Graph0_fy1072[11] = {
   0.2349373,
   0.06724356,
   0.03489576,
   0.02683333,
   0.02658907,
   0.03316723,
   0.06573021,
   0.2549005,
   0.1058933,
   0.04106151,
   0.0604176};
   Double_t Graph0_fex1072[11] = {
   0.1633085,
   0.1217683,
   0.08184431,
   0.07528525,
   0.08685436,
   0.1236228,
   0.2559798,
   1.474004,
   0.5942343,
   0.3191259,
   0.2722142};
   Double_t Graph0_fey1072[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1072,Graph0_fy1072,Graph0_fex1072,Graph0_fey1072);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01072 = new TH1F("Graph_Graph01072","S0S12S18_",100,219.0363,3025.142);
   Graph_Graph01072->SetMinimum(0.003757931);
   Graph_Graph01072->SetMaximum(0.2777316);
   Graph_Graph01072->SetDirectory(0);
   Graph_Graph01072->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01072->SetLineColor(ci);
   Graph_Graph01072->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01072->GetXaxis()->SetRange(19,82);
   Graph_Graph01072->GetXaxis()->CenterTitle(true);
   Graph_Graph01072->GetXaxis()->SetLabelFont(42);
   Graph_Graph01072->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01072->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01072->GetXaxis()->SetTitleFont(42);
   Graph_Graph01072->GetYaxis()->SetTitle("#deltaA_{EDM} / 250 MeV");
   Graph_Graph01072->GetYaxis()->CenterTitle(true);
   Graph_Graph01072->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01072->GetYaxis()->SetLabelFont(42);
   Graph_Graph01072->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01072->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01072->GetYaxis()->SetTitleFont(42);
   Graph_Graph01072->GetZaxis()->SetLabelFont(42);
   Graph_Graph01072->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01072->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01072);
   
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
