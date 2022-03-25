void S12S18_chi2NDF_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:47:47 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.8774,0.155536,3034.328,2.502268);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1174[22] = {
   367.2599,
   456.702,
   570.109,
   694.7359,
   815.8153,
   938.6517,
   1062.738,
   1188.104,
   1312.708,
   1435.78,
   1562.009,
   1685.106,
   1810.596,
   1935.088,
   2060.306,
   2184.998,
   2309.084,
   2433.154,
   2559.736,
   2678.654,
   2780.909,
   2886.857};
   Double_t Graph0_fy1174[22] = {
   0.9379637,
   0.7667659,
   0.8355974,
   1.079163,
   1.342351,
   0.8589639,
   1.452792,
   1.202754,
   0.9003951,
   0.8943904,
   1.28359,
   0.7420181,
   0.5458432,
   0.8499052,
   0.4868729,
   1.068221,
   1.115213,
   1.440604,
   1.423612,
   1.064459,
   1.581712,
   2.133857};
   Double_t Graph0_fex1174[22] = {
   0.1816034,
   0.09112972,
   0.06120878,
   0.04181207,
   0.03380812,
   0.0304767,
   0.02899594,
   0.02800799,
   0.02844741,
   0.02864512,
   0.03070991,
   0.03243555,
   0.03645912,
   0.03999234,
   0.04578523,
   0.05047818,
   0.05834179,
   0.07036082,
   0.08349635,
   0.0956473,
   0.1938715,
   1.250899};
   Double_t Graph0_fey1174[22] = {
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
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1174,Graph0_fy1174,Graph0_fex1174,Graph0_fey1174);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01174 = new TH1F("Graph_Graph01174","S12S18",100,114.9753,3140.211);
   Graph_Graph01174->SetMinimum(0.3902092);
   Graph_Graph01174->SetMaximum(2.267595);
   Graph_Graph01174->SetDirectory(0);
   Graph_Graph01174->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01174->SetLineColor(ci);
   Graph_Graph01174->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01174->GetXaxis()->SetRange(21,88);
   Graph_Graph01174->GetXaxis()->CenterTitle(true);
   Graph_Graph01174->GetXaxis()->SetLabelFont(42);
   Graph_Graph01174->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01174->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01174->GetXaxis()->SetTitleFont(42);
   Graph_Graph01174->GetYaxis()->SetTitle("#chi^{2}_{NDF} / 125 MeV");
   Graph_Graph01174->GetYaxis()->CenterTitle(true);
   Graph_Graph01174->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01174->GetYaxis()->SetLabelFont(42);
   Graph_Graph01174->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01174->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01174->GetYaxis()->SetTitleFont(42);
   Graph_Graph01174->GetZaxis()->SetLabelFont(42);
   Graph_Graph01174->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01174->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01174);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
