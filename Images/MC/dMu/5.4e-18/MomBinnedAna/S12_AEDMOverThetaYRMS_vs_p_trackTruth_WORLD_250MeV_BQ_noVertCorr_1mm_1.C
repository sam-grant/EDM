void S12_AEDMOverThetaYRMS_vs_p_trackTruth_WORLD_250MeV_BQ_noVertCorr_1mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr  6 12:54:48 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-165.0708,-0.005523916,3379.415,0.07599933);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1108[11] = {
   451.5581,
   653.2677,
   880.0203,
   1123.181,
   1371.166,
   1620.018,
   1867.098,
   2114.802,
   2362.547,
   2614.683,
   2790.673};
   Double_t Graph0_fy1108[11] = {
   0.009126424,
   0.007278169,
   0.006145341,
   0.006075216,
   0.009493791,
   0.006300679,
   0.01280702,
   0.007481917,
   0.01467258,
   0.01282122,
   0.04806271};
   Double_t Graph0_fex1108[11] = {
   0.1457006,
   0.1232532,
   0.0893564,
   0.0874833,
   0.09348105,
   0.1030946,
   0.1200829,
   0.1502603,
   0.1968533,
   0.2423922,
   0.3341954};
   Double_t Graph0_fey1108[11] = {
   0.00620597,
   0.002530201,
   0.0017679,
   0.00171573,
   0.001833201,
   0.002029799,
   0.002363763,
   0.002964145,
   0.003870064,
   0.004901812,
   0.01388188};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1108,Graph0_fy1108,Graph0_fex1108,Graph0_fey1108);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01108 = new TH1F("Graph_Graph01108","S12_",100,217.4529,3024.967);
   Graph_Graph01108->SetMinimum(0.002628409);
   Graph_Graph01108->SetMaximum(0.067847);
   Graph_Graph01108->SetDirectory(0);
   Graph_Graph01108->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01108->SetLineColor(ci);
   Graph_Graph01108->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01108->GetXaxis()->SetRange(0,100);
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
