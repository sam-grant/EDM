void S12S18_AEDM_vs_p_thetaY_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb  8 12:52:18 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.8434,-0.5282414,3408.106,0.2991979);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1169[11] = {
   451.6445,
   653.0488,
   880.2477,
   1123.215,
   1370.872,
   1619.829,
   1866.688,
   2114.471,
   2362.767,
   2613.86,
   2788.473};
   Double_t Graph0_fy1169[11] = {
   -0.0149945,
   0.1828438,
   0.102261,
   0.07387421,
   0.12006,
   0.1205329,
   0.1370054,
   0.0628526,
   0.0593611,
   0.1145372,
   0.110136};
   Double_t Graph0_fex1169[11] = {
   0.1241025,
   0.1054453,
   0.07653669,
   0.07512088,
   0.08042478,
   0.08940383,
   0.1047002,
   0.1320595,
   0.1734025,
   0.2110061,
   0.2692152};
   Double_t Graph0_fey1169[11] = {
   0.1643309,
   0.05550563,
   0.03211492,
   0.02642205,
   0.0243747,
   0.02332065,
   0.02352216,
   0.02509359,
   0.02721944,
   0.02690941,
   0.06184233};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1169,Graph0_fy1169,Graph0_fex1169,Graph0_fey1169);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01169 = new TH1F("Graph_Graph01169","S12S18_",100,217.7983,3022.464);
   Graph_Graph01169->SetMinimum(-0.4454975);
   Graph_Graph01169->SetMaximum(0.216454);
   Graph_Graph01169->SetDirectory(0);
   Graph_Graph01169->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01169->SetLineColor(ci);
   Graph_Graph01169->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01169->GetXaxis()->SetRange(0,101);
   Graph_Graph01169->GetXaxis()->CenterTitle(true);
   Graph_Graph01169->GetXaxis()->SetLabelFont(42);
   Graph_Graph01169->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01169->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01169->GetXaxis()->SetTitleFont(42);
   Graph_Graph01169->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01169->GetYaxis()->CenterTitle(true);
   Graph_Graph01169->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01169->GetYaxis()->SetLabelFont(42);
   Graph_Graph01169->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01169->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01169->GetYaxis()->SetTitleFont(42);
   Graph_Graph01169->GetZaxis()->SetLabelFont(42);
   Graph_Graph01169->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01169->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01169);
   
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
