void S12S18_c_vs_p_A_trackReco_WORLD_250MeV_BQ_acceptanceCorrected.reweight_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 22 00:44:59 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.1673,-1.778096e-05,3406.642,3.681181e-06);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1171[11] = {
   451.9038,
   653.315,
   880.4707,
   1123.079,
   1370.969,
   1620.017,
   1866.66,
   2115.009,
   2362.994,
   2613.175,
   2787.49};
   Double_t Graph0_fy1171[11] = {
   4.693606e-07,
   1.738411e-07,
   6.394297e-08,
   1.049042e-08,
   -2.977959e-08,
   -2.027462e-08,
   -1.455586e-08,
   1.191939e-07,
   1.897955e-07,
   -5.226279e-08,
   -5.651222e-06};
   Double_t Graph0_fex1171[11] = {
   0.07798888,
   0.06581105,
   0.04754566,
   0.04642972,
   0.04961974,
   0.05492096,
   0.06438721,
   0.08077524,
   0.1057539,
   0.1283666,
   0.1593149};
   Double_t Graph0_fey1171[11] = {
   5.629591e-07,
   3.075835e-08,
   9.138312e-09,
   8.051707e-09,
   9.533686e-09,
   1.321159e-08,
   2.226142e-08,
   4.710261e-08,
   1.175007e-07,
   2.644623e-07,
   7.471463e-06};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1171,Graph0_fy1171,Graph0_fex1171,Graph0_fey1171);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01171 = new TH1F("Graph_Graph01171","S12S18_",100,218.2436,3021.231);
   Graph_Graph01171->SetMinimum(-1.563475e-05);
   Graph_Graph01171->SetMaximum(1.534967e-06);
   Graph_Graph01171->SetDirectory(0);
   Graph_Graph01171->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01171->SetLineColor(ci);
   Graph_Graph01171->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01171->GetXaxis()->SetRange(0,101);
   Graph_Graph01171->GetXaxis()->CenterTitle(true);
   Graph_Graph01171->GetXaxis()->SetLabelFont(42);
   Graph_Graph01171->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01171->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01171->GetXaxis()->SetTitleFont(42);
   Graph_Graph01171->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01171->GetYaxis()->CenterTitle(true);
   Graph_Graph01171->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01171->GetYaxis()->SetLabelFont(42);
   Graph_Graph01171->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01171->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01171->GetYaxis()->SetTitleFont(42);
   Graph_Graph01171->GetZaxis()->SetLabelFont(42);
   Graph_Graph01171->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01171->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01171);
   
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
