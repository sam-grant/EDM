void S0S12S18_AEDMOverThetaYRMS_vs_p_trackReco_WORLD_250MeV_pValQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:49:10 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.5489,-0.01110053,3406.94,0.02051018);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1229[12] = {
   188.806,
   430.8761,
   629.9556,
   874.0595,
   1123.015,
   1372.494,
   1621.768,
   1870.362,
   2119.125,
   2366.858,
   2612.578,
   2826.342};
   Double_t Graph0_fy1229[12] = {
   0.003176409,
   0.003478013,
   0.004460254,
   0.006901074,
   0.008158879,
   0.01081744,
   0.011713,
   0.01267094,
   0.01238442,
   0.0129989,
   0.01423122,
   0.00939953};
   Double_t Graph0_fex1229[12] = {
   0.2857912,
   0.02926991,
   0.02371629,
   0.02347953,
   0.02442359,
   0.02573198,
   0.02753266,
   0.03022268,
   0.03425174,
   0.04028754,
   0.05083544,
   0.06470776};
   Double_t Graph0_fey1229[12] = {
   0.009008489,
   0.0008221571,
   0.0004719007,
   0.0004603956,
   0.0004783719,
   0.0005044208,
   0.0005399203,
   0.0005930397,
   0.0006729145,
   0.0007936672,
   0.001010508,
   0.00172851};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1229,Graph0_fy1229,Graph0_fex1229,Graph0_fey1229);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01229 = new TH1F("Graph_Graph01229","S0S12S18_",100,0,3090.195);
   Graph_Graph01229->SetMinimum(-0.007939461);
   Graph_Graph01229->SetMaximum(0.01734911);
   Graph_Graph01229->SetDirectory(0);
   Graph_Graph01229->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01229->SetLineColor(ci);
   Graph_Graph01229->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01229->GetXaxis()->SetRange(1,98);
   Graph_Graph01229->GetXaxis()->CenterTitle(true);
   Graph_Graph01229->GetXaxis()->SetLabelFont(42);
   Graph_Graph01229->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01229->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01229->GetXaxis()->SetTitleFont(42);
   Graph_Graph01229->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01229->GetYaxis()->CenterTitle(true);
   Graph_Graph01229->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01229->GetYaxis()->SetLabelFont(42);
   Graph_Graph01229->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01229->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01229->GetYaxis()->SetTitleFont(42);
   Graph_Graph01229->GetZaxis()->SetLabelFont(42);
   Graph_Graph01229->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01229->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01229);
   
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
