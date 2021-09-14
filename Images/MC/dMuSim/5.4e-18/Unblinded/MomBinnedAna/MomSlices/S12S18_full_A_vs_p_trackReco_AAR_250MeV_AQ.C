void S12S18_full_A_vs_p_trackReco_AAR_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Sep 13 15:26:45 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-251.625,-0.2322941,3254.625,2.503501);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1114[12] = {
   125,
   375,
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625,
   2875};
   Double_t Graph0_fy1114[12] = {
   1.318245,
   0.1113756,
   0.1497992,
   0.1548929,
   0.1607798,
   0.1618545,
   0.1606378,
   0.1716123,
   0.1140526,
   0.0828211,
   0.1266058,
   0.06725439};
   Double_t Graph0_fex1114[12] = {
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125};
   Double_t Graph0_fey1114[12] = {
   0.7131266,
   0.04964966,
   0.02482536,
   0.0203465,
   0.01836922,
   0.01694404,
   0.01600638,
   0.01580013,
   0.0161676,
   0.01732523,
   0.01764515,
   0.02138164};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1114,Graph0_fy1114,Graph0_fex1114,Graph0_fey1114);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01114 = new TH1F("Graph_Graph01114","S12S18",100,0,3300);
   Graph_Graph01114->SetMinimum(0.04128548);
   Graph_Graph01114->SetMaximum(2.229922);
   Graph_Graph01114->SetDirectory(0);
   Graph_Graph01114->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01114->SetLineColor(ci);
   Graph_Graph01114->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125 MeV");
   Graph_Graph01114->GetXaxis()->SetRange(4,88);
   Graph_Graph01114->GetXaxis()->CenterTitle(true);
   Graph_Graph01114->GetXaxis()->SetLabelFont(42);
   Graph_Graph01114->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01114->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01114->GetXaxis()->SetTitleFont(42);
   Graph_Graph01114->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01114->GetYaxis()->CenterTitle(true);
   Graph_Graph01114->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01114->GetYaxis()->SetLabelFont(42);
   Graph_Graph01114->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01114->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01114->GetYaxis()->SetTitleFont(42);
   Graph_Graph01114->GetZaxis()->SetLabelFont(42);
   Graph_Graph01114->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01114->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01114);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
