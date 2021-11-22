void S12S18_Y_RMS_vs_p_trackReco_AAR_250MeV_BQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 22 14:16:28 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(7.865666,12.44508,3231.802,13.16644);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1084[11] = {
   451.8418,
   653.3071,
   880.4383,
   1123.035,
   1371.003,
   1619.983,
   1866.575,
   2115.057,
   2362.917,
   2613.315,
   2787.72};
   Double_t Graph0_fy1084[11] = {
   13.01819,
   12.99568,
   12.95957,
   12.87094,
   12.81074,
   12.78335,
   12.73483,
   12.69118,
   12.64011,
   12.61001,
   12.62793};
   Double_t Graph0_fex1084[11] = {
   0.100887,
   0.08490523,
   0.0614041,
   0.05992997,
   0.06403584,
   0.07083603,
   0.08297073,
   0.1040859,
   0.1359196,
   0.1647851,
   0.2059641};
   Double_t Graph0_fey1084[11] = {
   0.02802288,
   0.01132975,
   0.00786682,
   0.007573554,
   0.008061047,
   0.008920549,
   0.01042874,
   0.0130158,
   0.01694644,
   0.02118914,
   0.06262667};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1084,Graph0_fy1084,Graph0_fex1084,Graph0_fey1084);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01084 = new TH1F("Graph_Graph01084","S12S18_",100,218.1224,3021.545);
   Graph_Graph01084->SetMinimum(12.51722);
   Graph_Graph01084->SetMaximum(13.0943);
   Graph_Graph01084->SetDirectory(0);
   Graph_Graph01084->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01084->SetLineColor(ci);
   Graph_Graph01084->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01084->GetXaxis()->SetRange(5,96);
   Graph_Graph01084->GetXaxis()->CenterTitle(true);
   Graph_Graph01084->GetXaxis()->SetLabelFont(42);
   Graph_Graph01084->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01084->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01084->GetXaxis()->SetTitleFont(42);
   Graph_Graph01084->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
   Graph_Graph01084->GetYaxis()->CenterTitle(true);
   Graph_Graph01084->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01084->GetYaxis()->SetLabelFont(42);
   Graph_Graph01084->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01084->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01084->GetYaxis()->SetTitleFont(42);
   Graph_Graph01084->GetZaxis()->SetLabelFont(42);
   Graph_Graph01084->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01084->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01084);
   
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
