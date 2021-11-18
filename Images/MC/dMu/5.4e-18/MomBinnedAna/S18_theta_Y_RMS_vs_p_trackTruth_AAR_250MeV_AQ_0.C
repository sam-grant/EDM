void S18_theta_Y_RMS_vs_p_trackTruth_AAR_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:37:58 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(521.7653,-2.974244,2724.774,43.04872);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1048[12] = {
   201.4826,
   433.6373,
   628.5893,
   873.0583,
   1121.633,
   1371.44,
   1620.022,
   1867.892,
   2115.773,
   2363.227,
   2613.952,
   2828.757};
   Double_t Graph0_fy1048[12] = {
   34.10713,
   33.10005,
   27.58005,
   22.73174,
   19.1295,
   16.299,
   13.97771,
   11.95561,
   10.10001,
   8.338443,
   6.516442,
   4.711037};
   Double_t Graph0_fex1048[12] = {
   1.86628,
   0.06961119,
   0.0636093,
   0.06389998,
   0.06862853,
   0.07422075,
   0.08181962,
   0.09423555,
   0.1140065,
   0.1472118,
   0.1894361,
   0.2470347};
   Double_t Graph0_fey1048[12] = {
   1.271098,
   0.03476152,
   0.01740792,
   0.01428054,
   0.01286234,
   0.01186772,
   0.01124659,
   0.01108641,
   0.01136323,
   0.01213286,
   0.0123046,
   0.01478639};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1048,Graph0_fy1048,Graph0_fex1048,Graph0_fey1048);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01048 = new TH1F("Graph_Graph01048","S18_",100,0,3091.942);
   Graph_Graph01048->SetMinimum(1.628053);
   Graph_Graph01048->SetMaximum(38.44642);
   Graph_Graph01048->SetDirectory(0);
   Graph_Graph01048->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01048->SetLineColor(ci);
   Graph_Graph01048->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01048->GetXaxis()->SetRange(25,81);
   Graph_Graph01048->GetXaxis()->CenterTitle(true);
   Graph_Graph01048->GetXaxis()->SetLabelFont(42);
   Graph_Graph01048->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01048->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01048->GetXaxis()->SetTitleFont(42);
   Graph_Graph01048->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01048->GetYaxis()->CenterTitle(true);
   Graph_Graph01048->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01048->GetYaxis()->SetLabelFont(42);
   Graph_Graph01048->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01048->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01048->GetYaxis()->SetTitleFont(42);
   Graph_Graph01048->GetZaxis()->SetLabelFont(42);
   Graph_Graph01048->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01048->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01048);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
