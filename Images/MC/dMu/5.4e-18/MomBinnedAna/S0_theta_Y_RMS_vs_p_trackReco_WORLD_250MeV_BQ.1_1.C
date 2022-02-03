void S0_theta_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ.1_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:32:58 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-168.4604,-5.448322,3409.867,62.91092);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1063[11] = {
   451.5017,
   653.2126,
   879.9286,
   1123.095,
   1371.312,
   1620.794,
   1868.128,
   2116.549,
   2363.467,
   2615.613,
   2789.755};
   Double_t Graph0_fy1063[11] = {
   31.50312,
   25.93422,
   21.34534,
   18.04838,
   15.4786,
   13.32732,
   11.40486,
   9.675753,
   7.943226,
   6.239509,
   4.941483};
   Double_t Graph0_fex1063[11] = {
   0.1864231,
   0.1583684,
   0.1154331,
   0.1128051,
   0.1201848,
   0.132627,
   0.1524343,
   0.1843167,
   0.2313112,
   0.2891107,
   0.3358942};
   Double_t Graph0_fey1063[11] = {
   0.1266258,
   0.04216072,
   0.02433852,
   0.02001654,
   0.01828279,
   0.01736793,
   0.01709822,
   0.01758577,
   0.01819001,
   0.01812647,
   0.03847639};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1063,Graph0_fy1063,Graph0_fex1063,Graph0_fey1063);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01063 = new TH1F("Graph_Graph01063","S0_",100,217.4377,3023.969);
   Graph_Graph01063->SetMinimum(1.387603);
   Graph_Graph01063->SetMaximum(56.075);
   Graph_Graph01063->SetDirectory(0);
   Graph_Graph01063->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01063->SetLineColor(ci);
   Graph_Graph01063->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01063->GetXaxis()->SetRange(0,101);
   Graph_Graph01063->GetXaxis()->CenterTitle(true);
   Graph_Graph01063->GetXaxis()->SetLabelFont(42);
   Graph_Graph01063->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01063->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01063->GetXaxis()->SetTitleFont(42);
   Graph_Graph01063->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
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
