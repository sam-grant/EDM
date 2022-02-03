void S12S18_AEDM_vs_p_A_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 31 18:51:56 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.6841,-3.39224e-05,3407.769,0.0001960654);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1172[11] = {
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
   Double_t Graph0_fy1172[11] = {
   -3.347658e-06,
   4.127953e-07,
   1.832435e-07,
   1.739978e-07,
   2.444612e-07,
   5.156926e-07,
   7.049238e-07,
   5.911957e-07,
   1.018573e-06,
   4.389858e-06,
   4.461117e-05};
   Double_t Graph0_fex1172[11] = {
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
   Double_t Graph0_fey1172[11] = {
   2.881073e-06,
   1.959642e-07,
   6.789397e-08,
   6.248585e-08,
   7.727037e-08,
   1.064205e-07,
   1.764045e-07,
   3.369123e-07,
   7.440884e-07,
   1.398625e-06,
   3.420386e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1172,Graph0_fy1172,Graph0_fex1172,Graph0_fey1172);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01172 = new TH1F("Graph_Graph01172","S12S18_",100,217.904,3022.181);
   Graph_Graph01172->SetMinimum(-1.092362e-05);
   Graph_Graph01172->SetMaximum(0.0001730667);
   Graph_Graph01172->SetDirectory(0);
   Graph_Graph01172->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01172->SetLineColor(ci);
   Graph_Graph01172->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01172->GetXaxis()->SetRange(0,101);
   Graph_Graph01172->GetXaxis()->CenterTitle(true);
   Graph_Graph01172->GetXaxis()->SetLabelFont(42);
   Graph_Graph01172->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01172->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01172->GetXaxis()->SetTitleFont(42);
   Graph_Graph01172->GetYaxis()->SetTitle("A_{EDM} / 250 MeV");
   Graph_Graph01172->GetYaxis()->CenterTitle(true);
   Graph_Graph01172->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01172->GetYaxis()->SetLabelFont(42);
   Graph_Graph01172->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01172->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01172->GetYaxis()->SetTitleFont(42);
   Graph_Graph01172->GetZaxis()->SetLabelFont(42);
   Graph_Graph01172->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01172->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01172);
   
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
