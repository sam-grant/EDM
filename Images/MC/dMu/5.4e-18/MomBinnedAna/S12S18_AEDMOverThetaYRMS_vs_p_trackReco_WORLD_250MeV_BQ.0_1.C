void S12S18_AEDMOverThetaYRMS_vs_p_trackReco_WORLD_250MeV_BQ.0_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:32:11 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.314,-0.03617591,3406.951,0.001783945);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1182[11] = {
   451.9422,
   653.2273,
   880.2966,
   1123.19,
   1371.008,
   1619.961,
   1866.763,
   2115.03,
   2362.81,
   2613.821,
   2787.502};
   Double_t Graph0_fy1182[11] = {
   -0.003656577,
   -0.001644439,
   -0.00470178,
   -0.004360313,
   -0.007892401,
   -0.007935976,
   -0.009633477,
   -0.01085647,
   -0.00841296,
   -0.01562634,
   -0.02274589};
   Double_t Graph0_fex1182[11] = {
   0.1840185,
   0.154634,
   0.1118548,
   0.1091122,
   0.1164788,
   0.1292152,
   0.1512967,
   0.189677,
   0.2474458,
   0.3009601,
   0.3776506};
   Double_t Graph0_fey1182[11] = {
   -0.007822269,
   -0.003169058,
   -0.002209584,
   -0.002141702,
   -0.002289152,
   -0.002541364,
   -0.002982359,
   -0.003747204,
   -0.004878993,
   -0.006116629,
   -0.01790294};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1182,Graph0_fy1182,Graph0_fex1182,Graph0_fey1182);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01182 = new TH1F("Graph_Graph01182","S12S18_",100,218.146,3021.491);
   Graph_Graph01182->SetMinimum(-0.03237992);
   Graph_Graph01182->SetMaximum(-0.002012041);
   Graph_Graph01182->SetDirectory(0);
   Graph_Graph01182->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01182->SetLineColor(ci);
   Graph_Graph01182->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01182->GetXaxis()->SetRange(0,101);
   Graph_Graph01182->GetXaxis()->CenterTitle(true);
   Graph_Graph01182->GetXaxis()->SetLabelFont(42);
   Graph_Graph01182->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01182->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01182->GetXaxis()->SetTitleFont(42);
   Graph_Graph01182->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01182->GetYaxis()->CenterTitle(true);
   Graph_Graph01182->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01182->GetYaxis()->SetLabelFont(42);
   Graph_Graph01182->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01182->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01182->GetYaxis()->SetTitleFont(42);
   Graph_Graph01182->GetZaxis()->SetLabelFont(42);
   Graph_Graph01182->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01182->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01182);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
