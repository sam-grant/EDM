void S18_c_vs_p_A_trackReco_WORLD_250MeV_BQ.2_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:34:04 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.195,-0.0001252653,3407.047,0.0001585227);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1134[11] = {
   452.0334,
   653.3342,
   880.5877,
   1123.032,
   1370.863,
   1619.695,
   1866.296,
   2115.184,
   2363.104,
   2612.119,
   2787.642};
   Double_t Graph0_fy1134[11] = {
   2.876033e-05,
   -2.999616e-07,
   -1.025402e-07,
   -2.448377e-07,
   -1.944519e-07,
   2.162078e-08,
   -7.327859e-08,
   -5.9719e-08,
   8.768766e-07,
   2.110734e-06,
   -3.346821e-05};
   Double_t Graph0_fex1134[11] = {
   0.1603305,
   0.1350596,
   0.09736021,
   0.09490607,
   0.1018511,
   0.1129718,
   0.1330762,
   0.1674427,
   0.2190467,
   0.2626988,
   0.3366573};
   Double_t Graph0_fey1134[11] = {
   3.354193e-06,
   2.206765e-07,
   7.359767e-08,
   6.650438e-08,
   8.234821e-08,
   1.147181e-07,
   1.975199e-07,
   4.16631e-07,
   1.037609e-06,
   2.402769e-06,
   7.004454e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1134,Graph0_fy1134,Graph0_fex1134,Graph0_fey1134);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01134 = new TH1F("Graph_Graph01134","S18_",100,218.2625,3021.59);
   Graph_Graph01134->SetMinimum(-9.688653e-05);
   Graph_Graph01134->SetMaximum(0.0001301439);
   Graph_Graph01134->SetDirectory(0);
   Graph_Graph01134->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01134->SetLineColor(ci);
   Graph_Graph01134->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01134->GetXaxis()->SetRange(0,101);
   Graph_Graph01134->GetXaxis()->CenterTitle(true);
   Graph_Graph01134->GetXaxis()->SetLabelFont(42);
   Graph_Graph01134->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01134->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01134->GetXaxis()->SetTitleFont(42);
   Graph_Graph01134->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01134->GetYaxis()->CenterTitle(true);
   Graph_Graph01134->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01134->GetYaxis()->SetLabelFont(42);
   Graph_Graph01134->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01134->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01134->GetYaxis()->SetTitleFont(42);
   Graph_Graph01134->GetZaxis()->SetLabelFont(42);
   Graph_Graph01134->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01134->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01134);
   
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
