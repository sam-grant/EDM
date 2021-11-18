void S12_c_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 10:59:22 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8664,-0.6181286,2727.341,2.526447);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1017[22] = {
   367.2264,
   456.6616,
   570.2511,
   695.0728,
   815.9922,
   938.5583,
   1062.66,
   1188.291,
   1312.787,
   1435.903,
   1561.974,
   1685.264,
   1810.607,
   1935.13,
   2060.293,
   2185.026,
   2309.146,
   2432.958,
   2559.535,
   2679.195,
   2781.14,
   2886.432};
   Double_t Graph0_fy1017[22] = {
   1.105779,
   0.04595225,
   -0.05427587,
   0.0540959,
   0.06020039,
   0.06846563,
   0.07086673,
   0.03112201,
   -0.005928162,
   -0.03293396,
   0.001203188,
   0.03905737,
   0.03617912,
   0.02243729,
   0.006254008,
   0.01528448,
   0.01190021,
   0.03325077,
   0.04338969,
   0.08575117,
   0.2316642,
   0.3408915};
   Double_t Graph0_fex1017[22] = {
   0.1560151,
   0.07824154,
   0.05252292,
   0.03553039,
   0.02848522,
   0.025669,
   0.02434069,
   0.02350631,
   0.02380413,
   0.02386992,
   0.02563485,
   0.0268977,
   0.03016952,
   0.03304359,
   0.03766603,
   0.04149162,
   0.04786816,
   0.05746284,
   0.06891139,
   0.07858218,
   0.1570593,
   0.9491119};
   Double_t Graph0_fey1017[22] = {
   0.8965719,
   0.0815068,
   0.03975683,
   0.02370447,
   0.01627473,
   0.01335476,
   0.01175109,
   0.01059786,
   0.009927314,
   0.009370014,
   0.009379401,
   0.009060727,
   0.009383954,
   0.009464568,
   0.009931525,
   0.01010071,
   0.01068022,
   0.01165442,
   0.01267081,
   0.01398011,
   0.03461302,
   0.2406907};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1017,Graph0_fy1017,Graph0_fex1017,Graph0_fey1017);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01017 = new TH1F("Graph_Graph01017","S12",100,115.0394,3139.412);
   Graph_Graph01017->SetMinimum(-0.303671);
   Graph_Graph01017->SetMaximum(2.211989);
   Graph_Graph01017->SetDirectory(0);
   Graph_Graph01017->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01017->SetLineColor(ci);
   Graph_Graph01017->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01017->GetXaxis()->SetRange(21,79);
   Graph_Graph01017->GetXaxis()->CenterTitle(true);
   Graph_Graph01017->GetXaxis()->SetLabelFont(42);
   Graph_Graph01017->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01017->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01017->GetXaxis()->SetTitleFont(42);
   Graph_Graph01017->GetYaxis()->SetTitle("c [mrad] / 125 MeV");
   Graph_Graph01017->GetYaxis()->CenterTitle(true);
   Graph_Graph01017->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01017->GetYaxis()->SetLabelFont(42);
   Graph_Graph01017->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01017->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01017->GetYaxis()->SetTitleFont(42);
   Graph_Graph01017->GetZaxis()->SetLabelFont(42);
   Graph_Graph01017->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01017);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
