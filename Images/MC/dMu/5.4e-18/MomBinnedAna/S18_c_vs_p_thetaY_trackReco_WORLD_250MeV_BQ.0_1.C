void S18_c_vs_p_thetaY_trackReco_WORLD_250MeV_BQ.0_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:32:07 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.4911,-0.3787716,3407.421,0.1195436);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1131[11] = {
   451.955,
   653.2003,
   880.4912,
   1123.059,
   1370.838,
   1619.616,
   1866.457,
   2115.103,
   2363.145,
   2612.952,
   2787.692};
   Double_t Graph0_fy1131[11] = {
   -0.1140793,
   -0.005756773,
   -0.008777415,
   -0.02158728,
   -0.01262513,
   0.01715101,
   0.006610559,
   0.03626462,
   0.03553015,
   0.05836319,
   0.03459904};
   Double_t Graph0_fex1131[11] = {
   0.2619298,
   0.2197995,
   0.1585408,
   0.1542059,
   0.1651759,
   0.1833712,
   0.2162876,
   0.2717578,
   0.3567738,
   0.4271346,
   0.5445739};
   Double_t Graph0_fey1131[11] = {
   0.2441737,
   0.08197501,
   0.04680109,
   0.03824832,
   0.0353445,
   0.03388953,
   0.03459011,
   0.03712684,
   0.04131438,
   0.04197659,
   0.1012832};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1131,Graph0_fy1131,Graph0_fex1131,Graph0_fey1131);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01131 = new TH1F("Graph_Graph01131","S18_",100,218.0387,3021.891);
   Graph_Graph01131->SetMinimum(-0.3289401);
   Graph_Graph01131->SetMaximum(0.06971209);
   Graph_Graph01131->SetDirectory(0);
   Graph_Graph01131->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01131->SetLineColor(ci);
   Graph_Graph01131->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01131->GetXaxis()->SetRange(0,101);
   Graph_Graph01131->GetXaxis()->CenterTitle(true);
   Graph_Graph01131->GetXaxis()->SetLabelFont(42);
   Graph_Graph01131->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01131->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01131->GetXaxis()->SetTitleFont(42);
   Graph_Graph01131->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_Graph01131->GetYaxis()->CenterTitle(true);
   Graph_Graph01131->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01131->GetYaxis()->SetLabelFont(42);
   Graph_Graph01131->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01131->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01131->GetYaxis()->SetTitleFont(42);
   Graph_Graph01131->GetZaxis()->SetLabelFont(42);
   Graph_Graph01131->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01131->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01131);
   
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
