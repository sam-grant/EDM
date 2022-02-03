void S0_Momentum_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ.reweight_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb  3 10:51:45 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-168.1328,3.029769,3409.443,28.36597);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1065[11] = {
   451.6521,
   653.2702,
   879.9265,
   1123.052,
   1371.41,
   1620.742,
   1868,
   2116.568,
   2363.186,
   2615.293,
   2789.549};
   Double_t Graph0_fy1065[11] = {
   14.15582,
   16.78785,
   18.69903,
   20.18297,
   21.15861,
   21.52806,
   21.24469,
   20.38586,
   18.72964,
   16.25626,
   13.83048};
   Double_t Graph0_fex1065[11] = {
   0.1393969,
   0.1178818,
   0.08603497,
   0.08412457,
   0.08954346,
   0.09886091,
   0.1134618,
   0.1374016,
   0.1719492,
   0.2153454,
   0.2482986};
   Double_t Graph0_fey1065[11] = {
   0.0424711,
   0.0203328,
   0.0158898,
   0.01669359,
   0.01862106,
   0.02091,
   0.02371789,
   0.02758899,
   0.03192171,
   0.03518539,
   0.08019859};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1065,Graph0_fy1065,Graph0_fex1065,Graph0_fey1065);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01065 = new TH1F("Graph_Graph01065","S0_",100,217.6843,3023.626);
   Graph_Graph01065->SetMinimum(5.563389);
   Graph_Graph01065->SetMaximum(25.83235);
   Graph_Graph01065->SetDirectory(0);
   Graph_Graph01065->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01065->SetLineColor(ci);
   Graph_Graph01065->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01065->GetXaxis()->SetRange(0,101);
   Graph_Graph01065->GetXaxis()->CenterTitle(true);
   Graph_Graph01065->GetXaxis()->SetLabelFont(42);
   Graph_Graph01065->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01065->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01065->GetXaxis()->SetTitleFont(42);
   Graph_Graph01065->GetYaxis()->CenterTitle(true);
   Graph_Graph01065->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01065->GetYaxis()->SetLabelFont(42);
   Graph_Graph01065->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01065->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01065->GetYaxis()->SetTitleFont(42);
   Graph_Graph01065->GetZaxis()->SetLabelFont(42);
   Graph_Graph01065->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01065->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01065);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
