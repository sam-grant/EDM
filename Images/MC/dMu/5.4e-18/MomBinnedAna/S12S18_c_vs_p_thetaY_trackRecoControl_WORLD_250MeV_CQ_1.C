void S12S18_c_vs_p_thetaY_trackRecoControl_WORLD_250MeV_CQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec 14 16:27:44 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-389.8371,-6.919667,3508.534,13.38468);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1176[12] = {
   188.9695,
   434.5943,
   652.6751,
   883.9274,
   1126.188,
   1373.751,
   1622.443,
   1870.726,
   2119.143,
   2366.618,
   2613.353,
   2824.104};
   Double_t Graph0_fy1176[12] = {
   2.379479,
   9.596866,
   -0.5421899,
   -0.6210174,
   -0.3860095,
   -0.226168,
   -0.1369987,
   -0.112476,
   -0.08991611,
   -0.1893846,
   -0.2782992,
   -0.1824093};
   Double_t Graph0_fex1176[12] = {
   0.713896,
   0.1447174,
   0.07967201,
   0.05375521,
   0.04973886,
   0.04976407,
   0.05188342,
   0.0561289,
   0.06355781,
   0.07480592,
   0.09437211,
   0.1178736};
   Double_t Graph0_fey1176[12] = {
   0.8090965,
   0.1015141,
   0.03300026,
   0.01732247,
   0.01319003,
   0.01137452,
   0.01039365,
   0.009993307,
   0.01004748,
   0.01053058,
   0.01176514,
   0.01868082};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1176,Graph0_fy1176,Graph0_fex1176,Graph0_fey1176);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01176 = new TH1F("Graph_Graph01176","S12S18_",100,0,3087.819);
   Graph_Graph01176->SetMinimum(-4.889233);
   Graph_Graph01176->SetMaximum(11.35424);
   Graph_Graph01176->SetDirectory(0);
   Graph_Graph01176->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01176->SetLineColor(ci);
   Graph_Graph01176->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01176->GetXaxis()->SetRange(1,101);
   Graph_Graph01176->GetXaxis()->CenterTitle(true);
   Graph_Graph01176->GetXaxis()->SetLabelFont(42);
   Graph_Graph01176->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01176->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01176->GetXaxis()->SetTitleFont(42);
   Graph_Graph01176->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
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
