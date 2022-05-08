void S0S12S18_Momentum_Y_RMS_vs_p_trackTruth_WORLD_250MeV_1000_2500_MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May  6 11:05:17 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.7815,11.77857,3380.88,23.27254);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1213[11] = {
   451.9673,
   653.3489,
   880.33,
   1123.071,
   1371.146,
   1620.133,
   1867.045,
   2115.331,
   2363.045,
   2613.562,
   2792.136};
   Double_t Graph0_fy1213[11] = {
   14.03071,
   16.63576,
   18.51815,
   20.01737,
   20.98356,
   21.34782,
   21.12194,
   20.24496,
   18.64682,
   16.20108,
   13.73293};
   Double_t Graph0_fex1213[11] = {
   0.06119317,
   0.05168435,
   0.03738165,
   0.03651084,
   0.03897018,
   0.04308696,
   0.05035664,
   0.06256782,
   0.08122338,
   0.09940193,
   0.1408526};
   Double_t Graph0_fey1213[11] = {
   0.01839117,
   0.008826504,
   0.006845776,
   0.007180267,
   0.008035801,
   0.009058439,
   0.01048043,
   0.01248273,
   0.01492918,
   0.0163474,
   0.03869737};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1213,Graph0_fy1213,Graph0_fex1213,Graph0_fey1213);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01213 = new TH1F("Graph_Graph01213","S0S12S18_",100,217.869,3026.313);
   Graph_Graph01213->SetMinimum(12.92797);
   Graph_Graph01213->SetMaximum(22.12314);
   Graph_Graph01213->SetDirectory(0);
   Graph_Graph01213->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01213->SetLineColor(ci);
   Graph_Graph01213->GetXaxis()->SetTitle("Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / 250 MeV");
   Graph_Graph01213->GetXaxis()->SetRange(0,100);
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
