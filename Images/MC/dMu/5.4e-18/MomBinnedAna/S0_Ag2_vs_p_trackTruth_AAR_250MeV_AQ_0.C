void S0_Ag2_vs_p_trackTruth_AAR_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:37:58 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522.1561,-11.13582,2726.815,2.353532);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1027[12] = {
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
   Double_t Graph0_fy1027[12] = {
   -8.543166,
   0.03525757,
   -0.1462144,
   0.01767127,
   -0.03185318,
   0.02759438,
   0.01174255,
   -0.002269339,
   -0.03453116,
   0.04320402,
   -0.005054467,
   -0.04065582};
   Double_t Graph0_fex1027[12] = {
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
   Double_t Graph0_fey1027[12] = {
   0.34443,
   0.07004867,
   0.03493796,
   0.02865452,
   0.02586439,
   0.02372428,
   0.02245334,
   0.02188297,
   0.02187912,
   0.02273475,
   0.02460993,
   0.03077582};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1027,Graph0_fy1027,Graph0_fex1027,Graph0_fey1027);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01027 = new TH1F("Graph_Graph01027","S0_",100,0,3094.258);
   Graph_Graph01027->SetMinimum(-9.786886);
   Graph_Graph01027->SetMaximum(1.004596);
   Graph_Graph01027->SetDirectory(0);
   Graph_Graph01027->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01027->SetLineColor(ci);
   Graph_Graph01027->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01027->GetXaxis()->SetRange(25,81);
   Graph_Graph01027->GetXaxis()->CenterTitle(true);
   Graph_Graph01027->GetXaxis()->SetLabelFont(42);
   Graph_Graph01027->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01027->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01027->GetXaxis()->SetTitleFont(42);
   Graph_Graph01027->GetYaxis()->SetTitle("A_{g#minus2} [mrad]");
   Graph_Graph01027->GetYaxis()->CenterTitle(true);
   Graph_Graph01027->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01027->GetYaxis()->SetLabelFont(42);
   Graph_Graph01027->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01027->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01027->GetYaxis()->SetTitleFont(42);
   Graph_Graph01027->GetZaxis()->SetLabelFont(42);
   Graph_Graph01027->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01027);
   
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
