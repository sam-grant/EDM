void S0S12S18_c_vs_p_A_trackReco_WORLD_250MeV_hitVolQ_noVertCorr_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 30 19:38:45 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-378.4284,-5.950324e-06,3405.856,2.682173e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1218[12] = {
   184.5396,
   431.4896,
   629.4626,
   873.9653,
   1122.547,
   1372.117,
   1620.879,
   1869.288,
   2117.216,
   2364.558,
   2614.887,
   2825.064};
   Double_t Graph0_fy1218[12] = {
   1.807557e-05,
   -4.8333e-07,
   -6.542477e-08,
   -2.981429e-08,
   -2.309261e-08,
   -2.464057e-08,
   -2.964408e-08,
   -3.697941e-08,
   -6.212701e-08,
   -1.100797e-07,
   -1.287998e-07,
   2.609811e-07};
   Double_t Graph0_fex1218[12] = {
   0.1775194,
   0.02718726,
   0.02363225,
   0.02322172,
   0.02433921,
   0.02587656,
   0.02805353,
   0.03152848,
   0.03685818,
   0.04604195,
   0.05834598,
   0.07008294};
   Double_t Graph0_fey1218[12] = {
   3.28415e-06,
   4.985516e-09,
   1.072536e-09,
   9.812102e-10,
   1.116443e-09,
   1.343065e-09,
   1.7475e-09,
   2.589349e-09,
   4.484389e-09,
   9.750693e-09,
   2.287436e-08,
   1.157741e-07};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1218,Graph0_fy1218,Graph0_fex1218,Graph0_fey1218);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01218 = new TH1F("Graph_Graph01218","S0S12S18_",100,0,3089.212);
   Graph_Graph01218->SetMinimum(-2.673119e-06);
   Graph_Graph01218->SetMaximum(2.354452e-05);
   Graph_Graph01218->SetDirectory(0);
   Graph_Graph01218->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01218->SetLineColor(ci);
   Graph_Graph01218->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01218->GetXaxis()->SetRange(1,98);
   Graph_Graph01218->GetXaxis()->CenterTitle(true);
   Graph_Graph01218->GetXaxis()->SetLabelFont(42);
   Graph_Graph01218->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01218->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01218->GetXaxis()->SetTitleFont(42);
   Graph_Graph01218->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01218->GetYaxis()->CenterTitle(true);
   Graph_Graph01218->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01218->GetYaxis()->SetLabelFont(42);
   Graph_Graph01218->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01218->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01218->GetYaxis()->SetTitleFont(42);
   Graph_Graph01218->GetZaxis()->SetLabelFont(42);
   Graph_Graph01218->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01218->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01218);
   
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
