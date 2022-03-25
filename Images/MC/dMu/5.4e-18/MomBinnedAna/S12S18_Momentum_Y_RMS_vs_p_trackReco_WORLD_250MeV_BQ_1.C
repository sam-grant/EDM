void S12S18_Momentum_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 02:59:13 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-163.655,11.86579,3375.214,23.3078);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1176[11] = {
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
   Double_t Graph0_fy1176[11] = {
   14.03377,
   16.66627,
   18.553,
   20.06951,
   21.03918,
   21.39052,
   21.17625,
   20.2841,
   18.70089,
   16.26897,
   13.82016};
   Double_t Graph0_fex1176[11] = {
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
   Double_t Graph0_fey1176[11] = {
   0.02078236,
   0.009997393,
   0.007751198,
   0.008132476,
   0.009116905,
   0.010276,
   0.01195193,
   0.01434507,
   0.01731659,
   0.01890928,
   0.04736766};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1176,Graph0_fy1176,Graph0_fex1176,Graph0_fey1176);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01176 = new TH1F("Graph_Graph01176","S12S18_",100,218.2625,3021.327);
   Graph_Graph01176->SetMinimum(13.00999);
   Graph_Graph01176->SetMaximum(22.1636);
   Graph_Graph01176->SetDirectory(0);
   Graph_Graph01176->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01176->SetLineColor(ci);
   Graph_Graph01176->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01176->GetXaxis()->SetRange(0,100);
   Graph_Graph01176->GetXaxis()->CenterTitle(true);
   Graph_Graph01176->GetXaxis()->SetLabelFont(42);
   Graph_Graph01176->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01176->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01176->GetXaxis()->SetTitleFont(42);
   Graph_Graph01176->GetYaxis()->CenterTitle(true);
   Graph_Graph01176->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01176->GetYaxis()->SetLabelFont(42);
   Graph_Graph01176->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01176->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01176->GetYaxis()->SetTitleFont(42);
   Graph_Graph01176->GetZaxis()->SetLabelFont(42);
   Graph_Graph01176->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01176->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01176);
   
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
