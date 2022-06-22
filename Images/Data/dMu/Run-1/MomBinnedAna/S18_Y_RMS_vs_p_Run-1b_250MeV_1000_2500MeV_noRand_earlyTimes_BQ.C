void S18_Y_RMS_vs_p_Run-1b_250MeV_1000_2500MeV_noRand_earlyTimes_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 11:32:48 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.1745,9.41709,2704.816,16.04356);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1077[11] = {
   456.1318,
   654.071,
   883.837,
   1127.315,
   1372.855,
   1619.53,
   1866.631,
   2116.181,
   2359.178,
   2607.068,
   2782.296};
   Double_t Graph0_fy1077[11] = {
   13.72943,
   12.90705,
   12.82195,
   12.75379,
   12.75991,
   12.77101,
   12.71775,
   12.62169,
   12.59902,
   12.79647,
   14.62922};
   Double_t Graph0_fex1077[11] = {
   0.204919,
   0.1452344,
   0.0989208,
   0.08986107,
   0.0890273,
   0.09879951,
   0.1211641,
   0.1529851,
   0.2016002,
   0.274891,
   0.4687828};
   Double_t Graph0_fey1077[11] = {
   0.06323101,
   0.01945559,
   0.01264256,
   0.01123344,
   0.01127665,
   0.01254203,
   0.01522363,
   0.01904007,
   0.02535491,
   0.03675843,
   0.1826656};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1077,Graph0_fy1077,Graph0_fex1077,Graph0_fey1077);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01077 = new TH1F("Graph_Graph01077","S18",100,223.2431,3015.449);
   Graph_Graph01077->SetMinimum(10.07974);
   Graph_Graph01077->SetMaximum(15.38091);
   Graph_Graph01077->SetDirectory(0);
   Graph_Graph01077->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01077->SetLineColor(ci);
   Graph_Graph01077->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01077->GetXaxis()->SetRange(28,82);
   Graph_Graph01077->GetXaxis()->CenterTitle(true);
   Graph_Graph01077->GetXaxis()->SetLabelFont(42);
   Graph_Graph01077->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01077->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01077->GetXaxis()->SetTitleFont(42);
   Graph_Graph01077->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
   Graph_Graph01077->GetYaxis()->CenterTitle(true);
   Graph_Graph01077->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01077->GetYaxis()->SetLabelFont(42);
   Graph_Graph01077->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01077->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01077->GetYaxis()->SetTitleFont(42);
   Graph_Graph01077->GetZaxis()->SetLabelFont(42);
   Graph_Graph01077->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01077->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01077);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
