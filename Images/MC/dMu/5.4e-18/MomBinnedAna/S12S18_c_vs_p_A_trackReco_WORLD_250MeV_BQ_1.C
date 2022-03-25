void S12S18_c_vs_p_A_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 02:59:13 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-163.655,-3.265828e-05,3375.214,3.02555e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1171[11] = {
   451.9205,
   653.3256,
   880.4131,
   1123.111,
   1371.001,
   1620.004,
   1866.718,
   2115.057,
   2362.933,
   2613.244,
   2787.597};
   Double_t Graph0_fy1171[11] = {
   1.950492e-05,
   -1.753933e-07,
   -2.027428e-07,
   -1.722196e-07,
   -1.839645e-07,
   -2.320966e-07,
   -2.528908e-07,
   -3.142403e-07,
   -7.301856e-07,
   -1.0482e-06,
   -1.699099e-05};
   Double_t Graph0_fex1171[11] = {
   0.06923884,
   0.05844202,
   0.04224623,
   0.04125547,
   0.04409091,
   0.04876799,
   0.057231,
   0.07179153,
   0.09404302,
   0.1141166,
   0.1415717};
   Double_t Graph0_fey1171[11] = {
   2.649531e-07,
   1.797849e-08,
   6.031118e-09,
   5.463273e-09,
   6.681117e-09,
   9.249649e-09,
   1.560572e-08,
   3.304023e-08,
   8.240065e-08,
   1.855421e-07,
   5.181663e-06};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1171,Graph0_fy1171,Graph0_fex1171,Graph0_fey1171);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01171 = new TH1F("Graph_Graph01171","S12S18_",100,218.2625,3021.327);
   Graph_Graph01171->SetMinimum(-2.63669e-05);
   Graph_Graph01171->SetMaximum(2.396412e-05);
   Graph_Graph01171->SetDirectory(0);
   Graph_Graph01171->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01171->SetLineColor(ci);
   Graph_Graph01171->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01171->GetXaxis()->SetRange(0,100);
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
