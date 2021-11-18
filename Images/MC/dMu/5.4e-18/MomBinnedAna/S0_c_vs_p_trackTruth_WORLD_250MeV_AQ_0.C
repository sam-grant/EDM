void S0_c_vs_p_trackTruth_WORLD_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:37:23 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522.1561,-3.134406,2726.815,0.6897293);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1025[12] = {
   199.4327,
   434.1114,
   628.3355,
   872.9688,
   1121.628,
   1371.699,
   1620.466,
   1869.06,
   2118.01,
   2364.35,
   2613.115,
   2830.689};
   Double_t Graph0_fy1025[12] = {
   -2.114367,
   -2.078022,
   -0.534537,
   -0.1170529,
   -0.05562394,
   -0.0329069,
   -0.05349448,
   -0.04475278,
   -0.01423366,
   -0.01505102,
   0.03500504,
   -0.01514589};
   Double_t Graph0_fex1025[12] = {
   2.039757,
   0.06911025,
   0.06321361,
   0.06370373,
   0.06830711,
   0.07373666,
   0.08117881,
   0.0921306,
   0.1073358,
   0.1311309,
   0.1731962,
   0.2184321};
   Double_t Graph0_fey1025[12] = {
   0.3826836,
   0.04958324,
   0.02465305,
   0.02025664,
   0.01826415,
   0.01676684,
   0.01586562,
   0.01546404,
   0.01548699,
   0.01606038,
   0.01736825,
   0.02178942};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1025,Graph0_fy1025,Graph0_fex1025,Graph0_fey1025);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01025 = new TH1F("Graph_Graph01025","S0_",100,0,3094.258);
   Graph_Graph01025->SetMinimum(-2.751993);
   Graph_Graph01025->SetMaximum(0.3073157);
   Graph_Graph01025->SetDirectory(0);
   Graph_Graph01025->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01025->SetLineColor(ci);
   Graph_Graph01025->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01025->GetXaxis()->SetRange(25,81);
   Graph_Graph01025->GetXaxis()->CenterTitle(true);
   Graph_Graph01025->GetXaxis()->SetLabelFont(42);
   Graph_Graph01025->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01025->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01025->GetXaxis()->SetTitleFont(42);
   Graph_Graph01025->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01025->GetYaxis()->CenterTitle(true);
   Graph_Graph01025->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01025->GetYaxis()->SetLabelFont(42);
   Graph_Graph01025->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01025->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01025->GetYaxis()->SetTitleFont(42);
   Graph_Graph01025->GetZaxis()->SetLabelFont(42);
   Graph_Graph01025->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01025);
   
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
