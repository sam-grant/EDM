void S12_AEDMOverThetaYRMS_vs_p_trackReco_WORLD_250MeV_BQ_acceptanceCorrected_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 22 00:12:14 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.4075,-0.03630284,3406.812,0.02346432);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1108[11] = {
   451.7667,
   653.3547,
   880.3777,
   1123.143,
   1371.135,
   1620.307,
   1866.82,
   2114.998,
   2362.65,
   2614.215,
   2787.527};
   Double_t Graph0_fy1108[11] = {
   -0.009157687,
   0.001346118,
   0.003554252,
   0.006875326,
   0.007714704,
   0.01328057,
   0.01437785,
   0.01457701,
   0.009108639,
   0.01228606,
   0.001260263};
   Double_t Graph0_fex1108[11] = {
   0.1100576,
   0.09282409,
   0.0672385,
   0.06570408,
   0.06990616,
   0.07732607,
   0.09012758,
   0.1129304,
   0.1472822,
   0.1813709,
   0.2204759};
   Double_t Graph0_fey1108[11] = {
   -0.005523313,
   0.002074565,
   0.001380011,
   0.001306002,
   0.001378143,
   0.001520363,
   0.001775921,
   0.002226735,
   0.002905358,
   0.003678785,
   0.01066635};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1108,Graph0_fy1108,Graph0_fex1108,Graph0_fey1108);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01108 = new TH1F("Graph_Graph01108","S12_",100,218.0475,3021.357);
   Graph_Graph01108->SetMinimum(-0.03032612);
   Graph_Graph01108->SetMaximum(0.0174876);
   Graph_Graph01108->SetDirectory(0);
   Graph_Graph01108->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01108->SetLineColor(ci);
   Graph_Graph01108->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01108->GetXaxis()->SetRange(0,101);
   Graph_Graph01108->GetXaxis()->CenterTitle(true);
   Graph_Graph01108->GetXaxis()->SetLabelFont(42);
   Graph_Graph01108->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01108->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01108->GetXaxis()->SetTitleFont(42);
   Graph_Graph01108->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01108->GetYaxis()->CenterTitle(true);
   Graph_Graph01108->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01108->GetYaxis()->SetLabelFont(42);
   Graph_Graph01108->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01108->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01108->GetYaxis()->SetTitleFont(42);
   Graph_Graph01108->GetZaxis()->SetLabelFont(42);
   Graph_Graph01108->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01108->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01108);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
