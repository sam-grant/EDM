void S12_Ag2_vs_p_thetaY_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 31 18:51:49 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.8782,-1.195586,3407.489,2.430879);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1096[11] = {
   451.5772,
   653.0552,
   880.0811,
   1123.256,
   1371.053,
   1620.101,
   1866.93,
   2114.522,
   2362.279,
   2614.457,
   2787.823};
   Double_t Graph0_fy1096[11] = {
   0.5678647,
   0.1457289,
   -0.09244986,
   -0.03549104,
   -0.02746052,
   -0.03237925,
   -0.04556212,
   -0.06221345,
   0.009047053,
   0.1015633,
   -0.2256005};
   Double_t Graph0_fex1096[11] = {
   0.1924069,
   0.1635947,
   0.1188262,
   0.1164574,
   0.124175,
   0.1375161,
   0.160136,
   0.20159,
   0.2639137,
   0.3238621,
   0.40328};
   Double_t Graph0_fey1096[11] = {
   0.2559202,
   0.08679458,
   0.04991223,
   0.04114829,
   0.03786564,
   0.03602445,
   0.03637654,
   0.03910255,
   0.04365325,
   0.04502199,
   0.1080552};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1096,Graph0_fy1096,Graph0_fex1096,Graph0_fey1096);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01096 = new TH1F("Graph_Graph01096","S12_",100,217.7007,3021.911);
   Graph_Graph01096->SetMinimum(-0.8329393);
   Graph_Graph01096->SetMaximum(2.068233);
   Graph_Graph01096->SetDirectory(0);
   Graph_Graph01096->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01096->SetLineColor(ci);
   Graph_Graph01096->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01096->GetXaxis()->SetRange(0,101);
   Graph_Graph01096->GetXaxis()->CenterTitle(true);
   Graph_Graph01096->GetXaxis()->SetLabelFont(42);
   Graph_Graph01096->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01096->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01096->GetXaxis()->SetTitleFont(42);
   Graph_Graph01096->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01096->GetYaxis()->CenterTitle(true);
   Graph_Graph01096->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01096->GetYaxis()->SetLabelFont(42);
   Graph_Graph01096->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01096->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01096->GetYaxis()->SetTitleFont(42);
   Graph_Graph01096->GetZaxis()->SetLabelFont(42);
   Graph_Graph01096->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01096->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01096);
   
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
