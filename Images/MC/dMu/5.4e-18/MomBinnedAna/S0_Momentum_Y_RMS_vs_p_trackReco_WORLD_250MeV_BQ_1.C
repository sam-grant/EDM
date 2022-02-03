void S0_Momentum_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan 19 11:03:09 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-168.1412,3.03757,3409.454,28.36528);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1065[11] = {
   451.647,
   653.2691,
   879.9271,
   1123.054,
   1371.406,
   1620.739,
   1868.003,
   2116.569,
   2363.182,
   2615.294,
   2789.557};
   Double_t Graph0_fy1065[11] = {
   14.15755,
   16.78713,
   18.69863,
   20.18243,
   21.15896,
   21.52818,
   21.24456,
   20.38693,
   18.72946,
   16.25546,
   13.83093};
   Double_t Graph0_fex1065[11] = {
   0.1393887,
   0.1178843,
   0.08603329,
   0.08412219,
   0.08954517,
   0.09886073,
   0.113464,
   0.1373979,
   0.1719514,
   0.2153495,
   0.2483519};
   Double_t Graph0_fey1065[11] = {
   0.04247479,
   0.02033258,
   0.01588938,
   0.01669279,
   0.01862167,
   0.02091051,
   0.0237181,
   0.02758999,
   0.03192261,
   0.03518382,
   0.08019849};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1065,Graph0_fy1065,Graph0_fex1065,Graph0_fey1065);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01065 = new TH1F("Graph_Graph01065","S0_",100,217.6779,3023.635);
   Graph_Graph01065->SetMinimum(5.570341);
   Graph_Graph01065->SetMaximum(25.83251);
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
