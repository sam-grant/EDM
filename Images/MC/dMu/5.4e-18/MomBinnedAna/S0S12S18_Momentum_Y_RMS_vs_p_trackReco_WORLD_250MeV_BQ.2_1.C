void S0S12S18_Momentum_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ.2_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:34:11 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.6095,2.915149,3407.957,28.26033);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1213[11] = {
   451.7799,
   653.2749,
   880.2439,
   1123.04,
   1371.162,
   1620.21,
   1867.078,
   2115.584,
   2363.023,
   2614.059,
   2788.48};
   Double_t Graph0_fy1213[11] = {
   14.05976,
   16.70642,
   18.5926,
   20.10505,
   21.08779,
   21.43847,
   21.21955,
   20.31498,
   18.69063,
   16.28104,
   13.75368};
   Double_t Graph0_fex1213[11] = {
   0.09191709,
   0.07752512,
   0.05616783,
   0.05486794,
   0.05858757,
   0.06479554,
   0.07538216,
   0.09335624,
   0.1199966,
   0.1475783,
   0.1798422};
   Double_t Graph0_fey1213[11] = {
   0.02767359,
   0.01329386,
   0.01032154,
   0.01083726,
   0.01214042,
   0.01366866,
   0.01577013,
   0.01868814,
   0.02217155,
   0.02435716,
   0.05859372};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1213,Graph0_fy1213,Graph0_fex1213,Graph0_fey1213);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01213 = new TH1F("Graph_Graph01213","S0S12S18_",100,217.9908,3022.357);
   Graph_Graph01213->SetMinimum(5.449667);
   Graph_Graph01213->SetMaximum(25.72581);
   Graph_Graph01213->SetDirectory(0);
   Graph_Graph01213->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01213->SetLineColor(ci);
   Graph_Graph01213->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01213->GetXaxis()->SetRange(0,101);
   Graph_Graph01213->GetXaxis()->CenterTitle(true);
   Graph_Graph01213->GetXaxis()->SetLabelFont(42);
   Graph_Graph01213->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01213->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01213->GetXaxis()->SetTitleFont(42);
   Graph_Graph01213->GetYaxis()->CenterTitle(true);
   Graph_Graph01213->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01213->GetYaxis()->SetLabelFont(42);
   Graph_Graph01213->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01213->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01213->GetYaxis()->SetTitleFont(42);
   Graph_Graph01213->GetZaxis()->SetLabelFont(42);
   Graph_Graph01213->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01213->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01213);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
