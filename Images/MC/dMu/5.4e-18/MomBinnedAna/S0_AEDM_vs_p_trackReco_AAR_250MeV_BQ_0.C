void S0_AEDM_vs_p_trackReco_AAR_250MeV_BQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:36:05 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(498.2748,-0.2011019,2743.039,0.4569761);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1026[11] = {
   451.6483,
   653.2696,
   879.9299,
   1123.053,
   1371.408,
   1620.742,
   1868.003,
   2116.568,
   2363.181,
   2615.29,
   2789.556};
   Double_t Graph0_fy1026[11] = {
   0.1599187,
   0.1665702,
   0.1726475,
   0.1675427,
   0.2276251,
   0.2086071,
   0.1423437,
   0.1571241,
   0.1012679,
   0.07617782,
   -0.03414468};
   Double_t Graph0_fex1026[11] = {
   0.1394032,
   0.1178799,
   0.08603429,
   0.08412167,
   0.08954582,
   0.09885964,
   0.1134626,
   0.1373988,
   0.1719485,
   0.215346,
   0.2483098};
   Double_t Graph0_fey1026[11] = {
   0.1873777,
   0.06265464,
   0.03628965,
   0.02980664,
   0.02721092,
   0.02585374,
   0.02547289,
   0.02617789,
   0.0271033,
   0.02691842,
   0.05727757};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1026,Graph0_fy1026,Graph0_fex1026,Graph0_fey1026);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01026 = new TH1F("Graph_Graph01026","S0_",100,217.6794,3023.634);
   Graph_Graph01026->SetMinimum(-0.1352941);
   Graph_Graph01026->SetMaximum(0.3911683);
   Graph_Graph01026->SetDirectory(0);
   Graph_Graph01026->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01026->SetLineColor(ci);
   Graph_Graph01026->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01026->GetXaxis()->SetRange(19,82);
   Graph_Graph01026->GetXaxis()->CenterTitle(true);
   Graph_Graph01026->GetXaxis()->SetLabelFont(42);
   Graph_Graph01026->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01026->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01026->GetXaxis()->SetTitleFont(42);
   Graph_Graph01026->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01026->GetYaxis()->CenterTitle(true);
   Graph_Graph01026->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01026->GetYaxis()->SetLabelFont(42);
   Graph_Graph01026->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01026->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01026->GetYaxis()->SetTitleFont(42);
   Graph_Graph01026->GetZaxis()->SetLabelFont(42);
   Graph_Graph01026->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01026->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01026);
   
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
