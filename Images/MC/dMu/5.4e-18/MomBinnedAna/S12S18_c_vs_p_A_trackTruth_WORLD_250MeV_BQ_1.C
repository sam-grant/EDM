void S12S18_c_vs_p_A_trackTruth_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 19:12:01 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(467.1062,-1.237611e-05,3029.613,1.546602e-06);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1083[11] = {
   451.995,
   653.3689,
   880.4532,
   1123.026,
   1371.063,
   1620.016,
   1866.622,
   2114.934,
   2362.94,
   2613.154,
   2791.843};
   Double_t Graph0_fy1083[11] = {
   1.174902e-05,
   -6.910621e-08,
   -7.231941e-08,
   -5.470651e-08,
   -7.012601e-08,
   -4.669775e-08,
   -1.480773e-08,
   7.061405e-08,
   1.293767e-08,
   -2.832911e-07,
   -1.087526e-05};
   Double_t Graph0_fex1083[11] = {
   0.1000313,
   0.08429077,
   0.06088477,
   0.05944231,
   0.06349073,
   0.07027398,
   0.08235853,
   0.1031157,
   0.1349937,
   0.1638784,
   0.2409119};
   Double_t Graph0_fey1083[11] = {
   8.122917e-07,
   5.403758e-08,
   1.805168e-08,
   1.63271e-08,
   1.994132e-08,
   2.769844e-08,
   4.658425e-08,
   1.004025e-07,
   2.44212e-07,
   5.517853e-07,
   1.399526e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1083,Graph0_fy1083,Graph0_fex1083,Graph0_fey1083);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01083 = new TH1F("Graph_Graph01083","S12S18_",100,217.876,3026.103);
   Graph_Graph01083->SetMinimum(-1.098384e-05);
   Graph_Graph01083->SetMaximum(1.543303e-07);
   Graph_Graph01083->SetDirectory(0);
   Graph_Graph01083->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01083->SetLineColor(ci);
   Graph_Graph01083->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01083->GetXaxis()->SetRange(19,91);
   Graph_Graph01083->GetXaxis()->CenterTitle(true);
   Graph_Graph01083->GetXaxis()->SetLabelFont(42);
   Graph_Graph01083->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01083->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01083->GetXaxis()->SetTitleFont(42);
   Graph_Graph01083->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01083->GetYaxis()->CenterTitle(true);
   Graph_Graph01083->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01083->GetYaxis()->SetLabelFont(42);
   Graph_Graph01083->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01083->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01083->GetYaxis()->SetTitleFont(42);
   Graph_Graph01083->GetZaxis()->SetLabelFont(42);
   Graph_Graph01083->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01083->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01083);
   
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
