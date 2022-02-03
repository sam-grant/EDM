void S12S18_eAEDM_vs_p_thetaY_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 31 18:51:56 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.6841,-0.05331618,3407.769,0.6863892);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1178[11] = {
   451.7306,
   653.0293,
   880.2377,
   1123.173,
   1370.874,
   1619.772,
   1866.644,
   2114.45,
   2362.788,
   2613.838,
   2788.194};
   Double_t Graph0_fy1178[11] = {
   0.1813793,
   0.0613549,
   0.03550986,
   0.0292286,
   0.02698291,
   0.02581772,
   0.02607149,
   0.02781247,
   0.03019218,
   0.029862,
   0.06877094};
   Double_t Graph0_fex1178[11] = {
   0.1368425,
   0.1165268,
   0.08467203,
   0.08307226,
   0.08894359,
   0.09893527,
   0.1159263,
   0.1464981,
   0.1927436,
   0.2339641,
   0.2969636};
   Double_t Graph0_fey1178[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1178,Graph0_fy1178,Graph0_fex1178,Graph0_fey1178);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01178 = new TH1F("Graph_Graph01178","S12S18_",100,217.904,3022.181);
   Graph_Graph01178->SetMinimum(0.02065436);
   Graph_Graph01178->SetMaximum(0.6124187);
   Graph_Graph01178->SetDirectory(0);
   Graph_Graph01178->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01178->SetLineColor(ci);
   Graph_Graph01178->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01178->GetXaxis()->SetRange(0,101);
   Graph_Graph01178->GetXaxis()->CenterTitle(true);
   Graph_Graph01178->GetXaxis()->SetLabelFont(42);
   Graph_Graph01178->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01178->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01178->GetXaxis()->SetTitleFont(42);
   Graph_Graph01178->GetYaxis()->SetTitle("#deltaA_{EDM} [mrad] / 250 MeV");
   Graph_Graph01178->GetYaxis()->CenterTitle(true);
   Graph_Graph01178->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01178->GetYaxis()->SetLabelFont(42);
   Graph_Graph01178->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01178->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01178->GetYaxis()->SetTitleFont(42);
   Graph_Graph01178->GetZaxis()->SetLabelFont(42);
   Graph_Graph01178->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01178->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01178);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
