void S18_Ag2_vs_p_thetaY_trackReco_WORLD_250MeV_BQ.2_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:34:04 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.195,-0.527916,3407.047,2.178182);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1133[11] = {
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
   Double_t Graph0_fy1133[11] = {
   0.399131,
   -0.03499323,
   -0.1038995,
   -0.01102615,
   0.03581297,
   0.06500359,
   0.01034918,
   0.003796042,
   0.0138099,
   0.08484904,
   -0.03252089};
   Double_t Graph0_fex1133[11] = {
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
   Double_t Graph0_fey1133[11] = {
   0.2128574,
   0.07130888,
   0.04073283,
   0.03335182,
   0.03081894,
   0.02960226,
   0.03009307,
   0.03228359,
   0.03585285,
   0.03679705,
   0.0937778};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1133,Graph0_fy1133,Graph0_fex1133,Graph0_fey1133);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01133 = new TH1F("Graph_Graph01133","S18_",100,218.2625,3021.59);
   Graph_Graph01133->SetMinimum(-0.2573062);
   Graph_Graph01133->SetMaximum(1.907572);
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
