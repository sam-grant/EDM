void S0_Momentum_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ.0_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:31:59 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-168.7171,3.047668,3409.979,28.39193);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1065[11] = {
   451.3795,
   653.2084,
   880.0107,
   1122.885,
   1371.272,
   1620.698,
   1868.122,
   2116.398,
   2362.901,
   2615.842,
   2789.677};
   Double_t Graph0_fy1065[11] = {
   14.15453,
   16.78159,
   18.69773,
   20.18658,
   21.13741,
   21.54907,
   21.26215,
   20.37359,
   18.76343,
   16.20198,
   13.8241};
   Double_t Graph0_fex1065[11] = {
   0.2570146,
   0.2168445,
   0.1578235,
   0.1543579,
   0.1647142,
   0.1816809,
   0.208312,
   0.2527105,
   0.3151618,
   0.3975541,
   0.4627629};
   Double_t Graph0_fey1065[11] = {
   0.07793701,
   0.03733577,
   0.02915838,
   0.03062287,
   0.03420625,
   0.0384697,
   0.04360552,
   0.05068057,
   0.05866953,
   0.06457995,
   0.1481078};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1065,Graph0_fy1065,Graph0_fex1065,Graph0_fey1065);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01065 = new TH1F("Graph_Graph01065","S0_",100,217.2208,3024.042);
   Graph_Graph01065->SetMinimum(5.582095);
   Graph_Graph01065->SetMaximum(25.85751);
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
