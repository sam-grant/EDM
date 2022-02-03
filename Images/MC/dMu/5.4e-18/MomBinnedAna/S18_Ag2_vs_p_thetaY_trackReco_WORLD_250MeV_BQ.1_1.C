void S18_Ag2_vs_p_thetaY_trackReco_WORLD_250MeV_BQ.1_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:33:05 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.3688,-0.5325788,3407.305,0.3045214);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1133[11] = {
   451.9647,
   653.4925,
   880.767,
   1123.136,
   1370.893,
   1619.751,
   1866.448,
   2115.026,
   2363.115,
   2612.439,
   2787.761};
   Double_t Graph0_fy1133[11] = {
   0.06460008,
   0.02100254,
   -0.02460908,
   0.004641982,
   0.03432009,
   0.03439871,
   0.008794259,
   0.02780056,
   -0.00847675,
   0.06479189,
   -0.1158161};
   Double_t Graph0_fex1133[11] = {
   0.1907078,
   0.160043,
   0.1156315,
   0.1125663,
   0.1209118,
   0.1340669,
   0.1579088,
   0.1985804,
   0.2601144,
   0.3119886,
   0.4006198};
   Double_t Graph0_fey1133[11] = {
   0.2532254,
   0.08450909,
   0.04826481,
   0.03953002,
   0.03661139,
   0.03512545,
   0.03566364,
   0.03839109,
   0.04255423,
   0.04368353,
   0.109224};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1133,Graph0_fy1133,Graph0_fex1133,Graph0_fey1133);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01133 = new TH1F("Graph_Graph01133","S18_",100,218.1353,3021.801);
   Graph_Graph01133->SetMinimum(-0.4488688);
   Graph_Graph01133->SetMaximum(0.2208114);
   Graph_Graph01133->SetDirectory(0);
   Graph_Graph01133->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01133->SetLineColor(ci);
   Graph_Graph01133->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01133->GetXaxis()->SetRange(0,101);
   Graph_Graph01133->GetXaxis()->CenterTitle(true);
   Graph_Graph01133->GetXaxis()->SetLabelFont(42);
   Graph_Graph01133->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01133->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01133->GetXaxis()->SetTitleFont(42);
   Graph_Graph01133->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01133->GetYaxis()->CenterTitle(true);
   Graph_Graph01133->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01133->GetYaxis()->SetLabelFont(42);
   Graph_Graph01133->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01133->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01133->GetYaxis()->SetTitleFont(42);
   Graph_Graph01133->GetZaxis()->SetLabelFont(42);
   Graph_Graph01133->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01133->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01133);
   
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
