void S0S12S18_full_c_vs_p_trackTruth_AAR_200MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Sep 12 20:03:07 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-420.75,-5.429516,3456.75,7.09213);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1169[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1169[15] = {
   4.269221,
   -3.279861,
   -1.609574,
   -0.5288473,
   -0.3132078,
   -0.2166127,
   -0.1779324,
   -0.1626986,
   -0.1293748,
   -0.1032612,
   -0.09425976,
   -0.06881909,
   -0.06292679,
   -0.03917591,
   -0.04102962};
   Double_t Graph0_fex1169[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1169[15] = {
   0.7359681,
   0.06271408,
   0.01951126,
   0.01463082,
   0.01280682,
   0.01181419,
   0.01102044,
   0.01042304,
   0.01008685,
   0.01004577,
   0.01020027,
   0.01063267,
   0.01140719,
   0.01193244,
   0.01609871};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1169,Graph0_fy1169,Graph0_fex1169,Graph0_fey1169);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01169 = new TH1F("Graph_Graph01169","S0S12S18",100,0,3300);
   Graph_Graph01169->SetMinimum(-4.177351);
   Graph_Graph01169->SetMaximum(5.839966);
   Graph_Graph01169->SetDirectory(0);
   Graph_Graph01169->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01169->SetLineColor(ci);
   Graph_Graph01169->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01169->GetXaxis()->SetRange(0,93);
   Graph_Graph01169->GetXaxis()->CenterTitle(true);
   Graph_Graph01169->GetXaxis()->SetLabelFont(42);
   Graph_Graph01169->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01169->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01169->GetXaxis()->SetTitleFont(42);
   Graph_Graph01169->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01169->GetYaxis()->CenterTitle(true);
   Graph_Graph01169->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01169->GetYaxis()->SetLabelFont(42);
   Graph_Graph01169->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01169->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01169->GetYaxis()->SetTitleFont(42);
   Graph_Graph01169->GetZaxis()->SetLabelFont(42);
   Graph_Graph01169->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01169->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01169);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4033166,0.94,0.5966834,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
