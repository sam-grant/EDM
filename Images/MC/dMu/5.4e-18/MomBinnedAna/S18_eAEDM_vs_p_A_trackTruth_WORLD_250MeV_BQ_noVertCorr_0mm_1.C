void S18_eAEDM_vs_p_A_trackTruth_WORLD_250MeV_BQ_noVertCorr_0mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr  6 12:52:36 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.701,-4.789001e-06,3381.025,4.376673e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1142[11] = {
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
   Double_t Graph0_fy1142[11] = {
   3.435707e-06,
   2.371621e-07,
   8.085723e-08,
   7.39686e-08,
   9.198524e-08,
   1.25744e-07,
   2.031524e-07,
   3.947729e-07,
   8.709548e-07,
   1.629574e-06,
   3.53805e-05};
   Double_t Graph0_fex1142[11] = {
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
   Double_t Graph0_fey1142[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1142,Graph0_fy1142,Graph0_fex1142,Graph0_fey1142);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01142 = new TH1F("Graph_Graph01142","S18_",100,217.9566,3026.453);
   Graph_Graph01142->SetMinimum(6.657174e-08);
   Graph_Graph01142->SetMaximum(3.891115e-05);
   Graph_Graph01142->SetDirectory(0);
   Graph_Graph01142->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01142->SetLineColor(ci);
   Graph_Graph01142->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01142->GetXaxis()->SetRange(0,100);
   Graph_Graph01142->GetXaxis()->CenterTitle(true);
   Graph_Graph01142->GetXaxis()->SetLabelFont(42);
   Graph_Graph01142->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01142->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01142->GetXaxis()->SetTitleFont(42);
   Graph_Graph01142->GetYaxis()->SetTitle("#deltaA_{EDM} / 250 MeV");
   Graph_Graph01142->GetYaxis()->CenterTitle(true);
   Graph_Graph01142->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01142->GetYaxis()->SetLabelFont(42);
   Graph_Graph01142->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01142->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01142->GetYaxis()->SetTitleFont(42);
   Graph_Graph01142->GetZaxis()->SetLabelFont(42);
   Graph_Graph01142->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01142->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01142);
   
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
