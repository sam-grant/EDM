void S12_c_vs_p_slice_tmp()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 23:00:50 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-412.5,-11.62052,3712.5,2.696956);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1203[15] = {
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
   Double_t Graph0_fy1203[15] = {
   -7.12113,
   -3.037621,
   -1.206802,
   -0.354578,
   0.03507479,
   0.0007782828,
   0.220255,
   -0.05803033,
   -0.1839338,
   0.1160456,
   0.01553187,
   0.02277163,
   0.01015801,
   -0.05540861,
   -0.1897623};
   Double_t Graph0_fex1203[15] = {
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
   Double_t Graph0_fey1203[15] = {
   2.113146,
   0.4629537,
   0.1663621,
   0.1256062,
   0.1087787,
   0.09854364,
   0.09045465,
   0.08464194,
   0.07986023,
   0.07643779,
   0.07623157,
   0.07536193,
   0.07911718,
   0.08198391,
   0.1134405};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1203,Graph0_fy1203,Graph0_fex1203,Graph0_fey1203);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01203 = new TH1F("Graph_Graph01203","S12",100,0,3300);
   Graph_Graph01203->SetMinimum(-10.18877);
   Graph_Graph01203->SetMaximum(1.265208);
   Graph_Graph01203->SetDirectory(0);
   Graph_Graph01203->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01203->SetLineColor(ci);
   Graph_Graph01203->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01203->GetXaxis()->CenterTitle(true);
   Graph_Graph01203->GetXaxis()->SetLabelFont(42);
   Graph_Graph01203->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01203->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01203->GetXaxis()->SetTitleFont(42);
   Graph_Graph01203->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01203->GetYaxis()->CenterTitle(true);
   Graph_Graph01203->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01203->GetYaxis()->SetLabelFont(42);
   Graph_Graph01203->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01203->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01203->GetYaxis()->SetTitleFont(42);
   Graph_Graph01203->GetZaxis()->SetLabelFont(42);
   Graph_Graph01203->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01203->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01203);
   
   gre->Draw("ap");
   
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
