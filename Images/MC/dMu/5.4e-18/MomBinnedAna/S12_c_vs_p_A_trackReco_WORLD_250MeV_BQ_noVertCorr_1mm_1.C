void S12_c_vs_p_A_trackReco_WORLD_250MeV_BQ_noVertCorr_1mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr  5 16:33:05 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.1786,-0.0002212959,3375.742,0.000130315);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1097[11] = {
   451.6434,
   653.2791,
   880.0417,
   1123.23,
   1371.169,
   1620.035,
   1867.131,
   2114.768,
   2362.473,
   2614.547,
   2787.815};
   Double_t Graph0_fy1097[11] = {
   6.983235e-05,
   -1.16786e-06,
   -9.16165e-07,
   -6.92006e-07,
   -6.867437e-07,
   -9.380811e-07,
   -9.255025e-07,
   -1.447159e-06,
   -4.012596e-06,
   -5.870272e-06,
   -0.0001277493};
   Double_t Graph0_fex1097[11] = {
   0.1328533,
   0.1124893,
   0.08162341,
   0.07988011,
   0.085199,
   0.09418247,
   0.109743,
   0.1378075,
   0.179929,
   0.2210366,
   0.2769383};
   Double_t Graph0_fey1097[11] = {
   1.880839e-06,
   1.284556e-07,
   4.342831e-08,
   3.949598e-08,
   4.820511e-08,
   6.656952e-08,
   1.096333e-07,
   2.339421e-07,
   5.832957e-07,
   1.333653e-06,
   3.494478e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1097,Graph0_fy1097,Graph0_fex1097,Graph0_fey1097);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01097 = new TH1F("Graph_Graph01097","S12_",100,217.8525,3021.75);
   Graph_Graph01097->SetMinimum(-0.0001861348);
   Graph_Graph01097->SetMaximum(9.515392e-05);
   Graph_Graph01097->SetDirectory(0);
   Graph_Graph01097->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01097->SetLineColor(ci);
   Graph_Graph01097->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01097->GetXaxis()->SetRange(0,100);
   Graph_Graph01097->GetXaxis()->CenterTitle(true);
   Graph_Graph01097->GetXaxis()->SetLabelFont(42);
   Graph_Graph01097->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01097->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01097->GetXaxis()->SetTitleFont(42);
   Graph_Graph01097->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01097->GetYaxis()->CenterTitle(true);
   Graph_Graph01097->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01097->GetYaxis()->SetLabelFont(42);
   Graph_Graph01097->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01097->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01097->GetYaxis()->SetTitleFont(42);
   Graph_Graph01097->GetZaxis()->SetLabelFont(42);
   Graph_Graph01097->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01097->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01097);
   
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
