void S0S12S18_theta_Y_RMS_vs_p_trackTruth_WORLD_250MeV_BQ_noVertCorr_1mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Apr 25 18:52:14 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-165.3211,-1.712649,3381.851,37.76676);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1211[11] = {
   451.7398,
   653.1921,
   880.1118,
   1123.066,
   1371.055,
   1620.322,
   1867.258,
   2115.26,
   2363.136,
   2614.787,
   2792.748};
   Double_t Graph0_fy1211[11] = {
   31.11324,
   25.70239,
   21.16635,
   17.9146,
   15.40157,
   13.23972,
   11.36852,
   9.614232,
   7.917567,
   6.206731,
   4.891485};
   Double_t Graph0_fex1211[11] = {
   0.1104503,
   0.09375717,
   0.06809647,
   0.06667315,
   0.07136867,
   0.07901048,
   0.09171766,
   0.1135048,
   0.1470338,
   0.1814706,
   0.2491958};
   Double_t Graph0_fey1211[11] = {
   0.07361612,
   0.02472708,
   0.01424958,
   0.01173097,
   0.01080008,
   0.01029447,
   0.01027214,
   0.01076789,
   0.01149928,
   0.01138392,
   0.0242319};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1211,Graph0_fy1211,Graph0_fex1211,Graph0_fey1211);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01211 = new TH1F("Graph_Graph01211","S0S12S18_",100,217.4926,3027.134);
   Graph_Graph01211->SetMinimum(2.235292);
   Graph_Graph01211->SetMaximum(33.81882);
   Graph_Graph01211->SetDirectory(0);
   Graph_Graph01211->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01211->SetLineColor(ci);
   Graph_Graph01211->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01211->GetXaxis()->SetRange(0,100);
   Graph_Graph01211->GetXaxis()->CenterTitle(true);
   Graph_Graph01211->GetXaxis()->SetLabelFont(42);
   Graph_Graph01211->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01211->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01211->GetXaxis()->SetTitleFont(42);
   Graph_Graph01211->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01211->GetYaxis()->CenterTitle(true);
   Graph_Graph01211->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01211->GetYaxis()->SetLabelFont(42);
   Graph_Graph01211->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01211->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01211->GetYaxis()->SetTitleFont(42);
   Graph_Graph01211->GetZaxis()->SetLabelFont(42);
   Graph_Graph01211->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01211->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01211);
   
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
