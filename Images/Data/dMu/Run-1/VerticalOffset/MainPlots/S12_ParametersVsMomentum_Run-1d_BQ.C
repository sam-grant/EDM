void S12_ParametersVsMomentum_Run-1d_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 10:34:29 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(30.74998,-93.75,3218.25,93.75);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1048[18] = {
   562,
   687,
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437,
   2562,
   2687};
   Double_t Graph0_fy1048[18] = {
   -89.08953,
   -67.6114,
   -47.93021,
   -39.37741,
   -33.65961,
   -36.5221,
   -48.07746,
   -40.23861,
   -43.61751,
   -46.37145,
   -43.71355,
   -41.10385,
   -41.69363,
   -43.93007,
   -41.84101,
   -33.87997,
   -38.02514,
   -35.53427};
   Double_t Graph0_fex1048[18] = {
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
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1048[18] = {
   16.23972,
   9.649315,
   6.627851,
   5.43684,
   4.787093,
   4.319422,
   4.045266,
   3.814146,
   3.815764,
   3.680972,
   3.803024,
   3.826773,
   3.994568,
   4.034368,
   4.23316,
   4.553072,
   4.864418,
   5.217818};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1048,Graph0_fy1048,Graph0_fex1048,Graph0_fey1048);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01048 = new TH1F("Graph_Graph01048","S12",100,349.5,2899.5);
   Graph_Graph01048->SetMinimum(-75);
   Graph_Graph01048->SetMaximum(75);
   Graph_Graph01048->SetDirectory(0);
   Graph_Graph01048->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01048->SetLineColor(ci);
   Graph_Graph01048->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01048->GetXaxis()->CenterTitle(true);
   Graph_Graph01048->GetXaxis()->SetLabelFont(42);
   Graph_Graph01048->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01048->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01048->GetXaxis()->SetTitleFont(42);
   Graph_Graph01048->GetYaxis()->SetTitle("Parameter value [mrad]");
   Graph_Graph01048->GetYaxis()->CenterTitle(true);
   Graph_Graph01048->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01048->GetYaxis()->SetLabelFont(42);
   Graph_Graph01048->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01048->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01048->GetYaxis()->SetTitleFont(42);
   Graph_Graph01048->GetZaxis()->SetLabelFont(42);
   Graph_Graph01048->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01048->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01048);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1049[18] = {
   562,
   687,
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437,
   2562,
   2687};
   Double_t Graph1_fy1049[18] = {
   36.65587,
   36.05256,
   30.85804,
   25.37842,
   14.8268,
   18.761,
   18.94532,
   8.435375,
   10.93025,
   10.41171,
   10.27753,
   5.937947,
   10.72502,
   7.5962,
   6.230894,
   5.088935,
   6.803587,
   7.166412};
   Double_t Graph1_fex1049[18] = {
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
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1049[18] = {
   10.57828,
   6.182953,
   4.187785,
   3.417955,
   2.98931,
   2.679238,
   2.495539,
   2.337724,
   2.333343,
   2.24438,
   2.306485,
   2.3151,
   2.411276,
   2.428092,
   2.532957,
   2.723105,
   2.931311,
   3.167416};
   gre = new TGraphErrors(18,Graph1_fx1049,Graph1_fy1049,Graph1_fex1049,Graph1_fey1049);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11049 = new TH1F("Graph_Graph11049","Graph",100,349.5,2899.5);
   Graph_Graph11049->SetMinimum(2.129247);
   Graph_Graph11049->SetMaximum(51.72098);
   Graph_Graph11049->SetDirectory(0);
   Graph_Graph11049->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11049->SetLineColor(ci);
   Graph_Graph11049->GetXaxis()->SetLabelFont(42);
   Graph_Graph11049->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11049->GetXaxis()->SetTitleFont(42);
   Graph_Graph11049->GetYaxis()->SetLabelFont(42);
   Graph_Graph11049->GetYaxis()->SetTitleFont(42);
   Graph_Graph11049->GetZaxis()->SetLabelFont(42);
   Graph_Graph11049->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11049->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11049);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1050[18] = {
   562,
   687,
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437,
   2562,
   2687};
   Double_t Graph2_fy1050[18] = {
   1.952987,
   -0.450536,
   -0.2339521,
   0.1125256,
   -0.6417038,
   -0.6116085,
   -0.672053,
   -0.6049142,
   -0.3543057,
   -0.1692949,
   -0.1159136,
   -0.04999005,
   -0.0825749,
   -0.001099978,
   -0.004798755,
   -0.01190705,
   0.1204399,
   0.2248909};
   Double_t Graph2_fex1050[18] = {
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
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1050[18] = {
   0.0892563,
   0.05339069,
   0.03680009,
   0.03022642,
   0.02669245,
   0.02414955,
   0.0226914,
   0.02143852,
   0.02147876,
   0.02076883,
   0.02151542,
   0.02168671,
   0.02266033,
   0.02292568,
   0.02414223,
   0.0259763,
   0.02775893,
   0.02975165};
   gre = new TGraphErrors(18,Graph2_fx1050,Graph2_fy1050,Graph2_fex1050,Graph2_fey1050);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#00ff00");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21050 = new TH1F("Graph_Graph21050","Graph",100,349.5,2899.5);
   Graph_Graph21050->SetMinimum(-0.9684432);
   Graph_Graph21050->SetMaximum(2.315942);
   Graph_Graph21050->SetDirectory(0);
   Graph_Graph21050->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21050->SetLineColor(ci);
   Graph_Graph21050->GetXaxis()->SetLabelFont(42);
   Graph_Graph21050->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21050->GetXaxis()->SetTitleFont(42);
   Graph_Graph21050->GetYaxis()->SetLabelFont(42);
   Graph_Graph21050->GetYaxis()->SetTitleFont(42);
   Graph_Graph21050->GetZaxis()->SetLabelFont(42);
   Graph_Graph21050->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21050->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21050);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.65,0.75,0.85,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Run-1d","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","A","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","B","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","c","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#00ff00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
