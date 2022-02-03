void S0_AEDMOverMaxDiff_vs_p_trackReco_WORLD_250MeV_BQ.2_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:33:57 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-168.118,-0.01061351,3409.577,0.00413034);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1070[11] = {
   451.7058,
   653.2488,
   879.8973,
   1122.993,
   1371.413,
   1620.679,
   1868.015,
   2116.494,
   2363.32,
   2615.509,
   2789.629};
   Double_t Graph0_fy1070[11] = {
   0.001000119,
   0.0007099745,
   0.001353935,
   0.001156221,
   0.002214014,
   0.00204852,
   0.001727627,
   0.002226329,
   0.001026579,
   0.001525405,
   -0.00220457};
   Double_t Graph0_fex1070[11] = {
   0.15762,
   0.1333984,
   0.09722522,
   0.09511307,
   0.1013248,
   0.1117834,
   0.1283377,
   0.1551935,
   0.1942938,
   0.2431966,
   0.2816604};
   Double_t Graph0_fey1070[11] = {
   0.001191358,
   0.0004532718,
   0.0003238557,
   0.0002905219,
   0.0003388498,
   0.000348932,
   0.0004187709,
   0.00050629,
   0.0005402753,
   0.0008611856,
   -0.002527097};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1070,Graph0_fy1070,Graph0_fex1070,Graph0_fey1070);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01070 = new TH1F("Graph_Graph01070","S0_",100,217.7119,3023.747);
   Graph_Graph01070->SetMinimum(-0.009139126);
   Graph_Graph01070->SetMaximum(0.002655955);
   Graph_Graph01070->SetDirectory(0);
   Graph_Graph01070->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01070->SetLineColor(ci);
   Graph_Graph01070->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01070->GetXaxis()->SetRange(0,101);
   Graph_Graph01070->GetXaxis()->CenterTitle(true);
   Graph_Graph01070->GetXaxis()->SetLabelFont(42);
   Graph_Graph01070->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01070->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01070->GetXaxis()->SetTitleFont(42);
   Graph_Graph01070->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01070->GetYaxis()->CenterTitle(true);
   Graph_Graph01070->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01070->GetYaxis()->SetLabelFont(42);
   Graph_Graph01070->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01070->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01070->GetYaxis()->SetTitleFont(42);
   Graph_Graph01070->GetZaxis()->SetLabelFont(42);
   Graph_Graph01070->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01070->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01070);
   
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
