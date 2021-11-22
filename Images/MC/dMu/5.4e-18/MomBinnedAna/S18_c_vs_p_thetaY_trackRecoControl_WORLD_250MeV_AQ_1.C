void S18_c_vs_p_thetaY_trackRecoControl_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 22 14:11:54 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(8.41028,-2.878786,3235.149,7.199635);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1063[11] = {
   452.957,
   656.7828,
   885.1468,
   1123.533,
   1363.63,
   1601.179,
   1824.969,
   2102.272,
   2409.931,
   2636.456,
   2790.376};
   Double_t Graph0_fy1063[11] = {
   5.232708,
   0.1384833,
   -0.2990187,
   -0.3041193,
   -0.2822341,
   -0.1193736,
   0.05107556,
   -0.9553846,
   -0.002161927,
   -0.06592872,
   -0.02787579};
   Double_t Graph0_fex1063[11] = {
   0.2854872,
   0.2115621,
   0.1418664,
   0.1303305,
   0.1506567,
   0.2139366,
   0.450887,
   2.641302,
   1.044509,
   0.5721221,
   0.512281};
   Double_t Graph0_fey1063[11] = {
   0.2871906,
   0.08218111,
   0.04248064,
   0.0326439,
   0.03241163,
   0.04055841,
   0.0820623,
   0.2436646,
   0.1292284,
   0.0562459,
   0.08854934};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1063,Graph0_fy1063,Graph0_fex1063,Graph0_fey1063);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01063 = new TH1F("Graph_Graph01063","S18_",100,218.8498,3024.71);
   Graph_Graph01063->SetMinimum(-1.870944);
   Graph_Graph01063->SetMaximum(6.191793);
   Graph_Graph01063->SetDirectory(0);
   Graph_Graph01063->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01063->SetLineColor(ci);
   Graph_Graph01063->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01063->GetXaxis()->SetRange(5,96);
   Graph_Graph01063->GetXaxis()->CenterTitle(true);
   Graph_Graph01063->GetXaxis()->SetLabelFont(42);
   Graph_Graph01063->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01063->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01063->GetXaxis()->SetTitleFont(42);
   Graph_Graph01063->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_Graph01063->GetYaxis()->CenterTitle(true);
   Graph_Graph01063->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01063->GetYaxis()->SetLabelFont(42);
   Graph_Graph01063->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01063->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01063->GetYaxis()->SetTitleFont(42);
   Graph_Graph01063->GetZaxis()->SetLabelFont(42);
   Graph_Graph01063->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01063->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01063);
   
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
