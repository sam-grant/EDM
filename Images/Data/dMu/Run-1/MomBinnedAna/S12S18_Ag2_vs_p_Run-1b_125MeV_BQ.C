void S12S18_Ag2_vs_p_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:47:47 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(462.8774,-0.6052166,3034.328,0.1027656);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1173[22] = {
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
   Double_t Graph0_fy1173[22] = {
   0.1570931,
   -0.1620549,
   0.0070948,
   -0.02433609,
   -0.007167724,
   0.02030539,
   -0.01177782,
   -0.0246578,
   0.004562274,
   0.003139734,
   0.009529221,
   0.0219612,
   -0.02791333,
   -0.02428504,
   -0.01613658,
   -0.004113155,
   0.001601281,
   -0.03408556,
   0.01416263,
   -0.007507742,
   0.02694583,
   -1.219111};
   Double_t Graph0_fex1173[22] = {
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
   Double_t Graph0_fey1173[22] = {
   1.468152,
   0.1330959,
   0.06520308,
   0.03926207,
   0.0272299,
   0.02236249,
   0.01971084,
   0.0177865,
   0.01668494,
   0.01585187,
   0.01581044,
   0.01536053,
   0.01595287,
   0.01615649,
   0.01699607,
   0.01739606,
   0.01832222,
   0.02004054,
   0.02157862,
   0.0238562,
   0.06082678,
   0.5105293};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1173,Graph0_fy1173,Graph0_fex1173,Graph0_fey1173);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01173 = new TH1F("Graph_Graph01173","S12S18",100,114.9753,3140.211);
   Graph_Graph01173->SetMinimum(-0.5344184);
   Graph_Graph01173->SetMaximum(0.0319674);
   Graph_Graph01173->SetDirectory(0);
   Graph_Graph01173->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01173->SetLineColor(ci);
   Graph_Graph01173->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01173->GetXaxis()->SetRange(21,88);
   Graph_Graph01173->GetXaxis()->CenterTitle(true);
   Graph_Graph01173->GetXaxis()->SetLabelFont(42);
   Graph_Graph01173->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01173->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01173->GetXaxis()->SetTitleFont(42);
   Graph_Graph01173->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 125 MeV");
   Graph_Graph01173->GetYaxis()->CenterTitle(true);
   Graph_Graph01173->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01173->GetYaxis()->SetLabelFont(42);
   Graph_Graph01173->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01173->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01173->GetYaxis()->SetTitleFont(42);
   Graph_Graph01173->GetZaxis()->SetLabelFont(42);
   Graph_Graph01173->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01173->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01173);
   
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
