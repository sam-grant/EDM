void S12_N_vs_p_trackTruth_WORLD_250MeV_BQ_noVertCorr_0mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr  6 12:52:32 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-165.0789,-83133.69,3379.886,844359.2);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1103[11] = {
   451.6332,
   653.4671,
   880.0622,
   1123.093,
   1371.258,
   1620.035,
   1867.297,
   2114.967,
   2362.535,
   2614.675,
   2791.065};
   Double_t Graph0_fy1103[11] = {
   51631,
   313322,
   643787,
   684253,
   598461,
   490429,
   362297,
   232213,
   134758,
   84415,
   10684};
   Double_t Graph0_fex1103[11] = {
   0.1455403,
   0.1229281,
   0.08914858,
   0.08707993,
   0.09307324,
   0.102489,
   0.1193871,
   0.1490946,
   0.1954569,
   0.2406913,
   0.3331762};
   Double_t Graph0_fey1103[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1103,Graph0_fy1103,Graph0_fex1103,Graph0_fey1103);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01103 = new TH1F("Graph_Graph01103","S12_",100,217.4966,3025.389);
   Graph_Graph01103->SetMinimum(9615.6);
   Graph_Graph01103->SetMaximum(751609.9);
   Graph_Graph01103->SetDirectory(0);
   Graph_Graph01103->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01103->SetLineColor(ci);
   Graph_Graph01103->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01103->GetXaxis()->SetRange(0,100);
   Graph_Graph01103->GetXaxis()->CenterTitle(true);
   Graph_Graph01103->GetXaxis()->SetLabelFont(42);
   Graph_Graph01103->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01103->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01103->GetXaxis()->SetTitleFont(42);
   Graph_Graph01103->GetYaxis()->SetTitle("Positrons / 250 MeV");
   Graph_Graph01103->GetYaxis()->CenterTitle(true);
   Graph_Graph01103->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01103->GetYaxis()->SetLabelFont(42);
   Graph_Graph01103->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01103->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01103->GetYaxis()->SetTitleFont(42);
   Graph_Graph01103->GetZaxis()->SetLabelFont(42);
   Graph_Graph01103->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01103->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01103);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
