void S0S12S18_AEDM_vs_p_thetaY_trackRecoControl_AAR_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 19 17:31:05 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(8.578306,-0.6628884,3235.6,0.8757179);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1092[11] = {
   453.0417,
   656.6012,
   884.5758,
   1123.455,
   1363.525,
   1601.494,
   1825.195,
   2101.26,
   2412.734,
   2638.441,
   2791.028};
   Double_t Graph0_fy1092[11] = {
   -0.1715123,
   0.1840567,
   0.08424844,
   0.08551763,
   0.1176675,
   0.1139844,
   0.1579406,
   0.3644125,
   0.06557247,
   0.06537091,
   0.1107197};
   Double_t Graph0_fex1092[11] = {
   0.1633085,
   0.1217683,
   0.08184431,
   0.07528525,
   0.08685436,
   0.1236228,
   0.2559798,
   1.474004,
   0.5942343,
   0.3191259,
   0.2722142};
   Double_t Graph0_fey1092[11] = {
   0.2349417,
   0.06724446,
   0.03489572,
   0.0268336,
   0.02659029,
   0.0331716,
   0.06573094,
   0.254871,
   0.1059015,
   0.0410519,
   0.06045198};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1092,Graph0_fy1092,Graph0_fex1092,Graph0_fey1092);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01092 = new TH1F("Graph_Graph01092","S0S12S18_",100,219.0363,3025.142);
   Graph_Graph01092->SetMinimum(-0.5090278);
   Graph_Graph01092->SetMaximum(0.7218572);
   Graph_Graph01092->SetDirectory(0);
   Graph_Graph01092->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01092->SetLineColor(ci);
   Graph_Graph01092->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01092->GetXaxis()->SetRange(5,96);
   Graph_Graph01092->GetXaxis()->CenterTitle(true);
   Graph_Graph01092->GetXaxis()->SetLabelFont(42);
   Graph_Graph01092->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01092->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01092->GetXaxis()->SetTitleFont(42);
   Graph_Graph01092->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01092->GetYaxis()->CenterTitle(true);
   Graph_Graph01092->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01092->GetYaxis()->SetLabelFont(42);
   Graph_Graph01092->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01092->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01092->GetYaxis()->SetTitleFont(42);
   Graph_Graph01092->GetZaxis()->SetLabelFont(42);
   Graph_Graph01092->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01092->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01092);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
