void S0S12S18_Ag2_vs_p_thetaY_trackRecoControl_AAR_250MeV_BQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 19 17:37:26 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(8.578306,-0.2844334,3235.6,0.5927311);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1093[11] = {
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
   Double_t Graph0_fy1093[11] = {
   0.2107035,
   -0.02693963,
   -0.06714694,
   -0.02819532,
   0.02204326,
   0.01676706,
   -0.07281147,
   0.127617,
   0.04125642,
   -0.06928722,
   0.03936927};
   Double_t Graph0_fex1093[11] = {
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
   Double_t Graph0_fey1093[11] = {
   0.2358335,
   0.06686589,
   0.03472702,
   0.02675478,
   0.02647765,
   0.03316804,
   0.06542782,
   0.2569818,
   0.1089675,
   0.0445114,
   0.06931155};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1093,Graph0_fy1093,Graph0_fex1093,Graph0_fey1093);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01093 = new TH1F("Graph_Graph01093","S0S12S18_",100,219.0363,3025.142);
   Graph_Graph01093->SetMinimum(-0.1967169);
   Graph_Graph01093->SetMaximum(0.5050147);
   Graph_Graph01093->SetDirectory(0);
   Graph_Graph01093->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01093->SetLineColor(ci);
   Graph_Graph01093->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01093->GetXaxis()->SetRange(5,96);
   Graph_Graph01093->GetXaxis()->CenterTitle(true);
   Graph_Graph01093->GetXaxis()->SetLabelFont(42);
   Graph_Graph01093->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01093->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01093->GetXaxis()->SetTitleFont(42);
   Graph_Graph01093->GetYaxis()->SetTitle("A_{g#minus2} [mrad]");
   Graph_Graph01093->GetYaxis()->CenterTitle(true);
   Graph_Graph01093->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01093->GetYaxis()->SetLabelFont(42);
   Graph_Graph01093->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01093->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01093->GetYaxis()->SetTitleFont(42);
   Graph_Graph01093->GetZaxis()->SetLabelFont(42);
   Graph_Graph01093->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01093->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01093);
   
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
