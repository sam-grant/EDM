void S18_AEDMOverThetaYRMS_vs_p_trackTruth_WORLD_250MeV_BQ_noVertCorr_0mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr 26 12:13:21 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.701,-0.01603068,3381.025,0.03506533);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1145[11] = {
   452.1447,
   653.3571,
   880.6174,
   1122.952,
   1370.903,
   1620.012,
   1866.685,
   2114.399,
   2363.275,
   2613.247,
   2792.063};
   Double_t Graph0_fy1145[11] = {
   -0.006760249,
   0.007380786,
   0.005932093,
   0.006421833,
   0.009063204,
   0.01159793,
   0.008682461,
   0.008008511,
   0.006898698,
   0.02153086,
   -0.007514675};
   Double_t Graph0_fex1145[11] = {
   0.1468164,
   0.1240094,
   0.0897857,
   0.08771491,
   0.09427707,
   0.1045591,
   0.122761,
   0.1539366,
   0.2036003,
   0.2448893,
   0.3479271};
   Double_t Graph0_fey1145[11] = {
   -0.006269207,
   0.00254387,
   0.00177624,
   0.001722882,
   0.001851401,
   0.002056518,
   0.002422396,
   0.00304189,
   0.003998908,
   0.005018473,
   -0.01407121};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1145,Graph0_fy1145,Graph0_fex1145,Graph0_fey1145);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01145 = new TH1F("Graph_Graph01145","S18_",100,217.9566,3026.453);
   Graph_Graph01145->SetMinimum(-0.01092108);
   Graph_Graph01145->SetMaximum(0.02995573);
   Graph_Graph01145->SetDirectory(0);
   Graph_Graph01145->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01145->SetLineColor(ci);
   Graph_Graph01145->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01145->GetXaxis()->SetRange(0,100);
   Graph_Graph01145->GetXaxis()->CenterTitle(true);
   Graph_Graph01145->GetXaxis()->SetLabelFont(42);
   Graph_Graph01145->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01145->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01145->GetXaxis()->SetTitleFont(42);
   Graph_Graph01145->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01145->GetYaxis()->CenterTitle(true);
   Graph_Graph01145->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01145->GetYaxis()->SetLabelFont(42);
   Graph_Graph01145->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01145->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01145->GetYaxis()->SetTitleFont(42);
   Graph_Graph01145->GetZaxis()->SetLabelFont(42);
   Graph_Graph01145->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01145->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01145);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
