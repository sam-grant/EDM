void S0S12S18_c_vs_p_slice_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 20:17:16 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-2.176851,3378.375,0.3967681);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1163[15] = {
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
   Double_t Graph0_fy1163[15] = {
   -0.8533517,
   -1.685394,
   -1.30409,
   -0.3406272,
   -0.1951186,
   -0.1611068,
   -0.1209387,
   -0.09324377,
   -0.1074642,
   -0.09083232,
   -0.06604923,
   -0.06847515,
   -0.06135333,
   -0.07775238,
   -0.04677131};
   Double_t Graph0_fex1163[15] = {
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
   Double_t Graph0_fey1163[15] = {
   0.4392674,
   0.06252027,
   0.02209535,
   0.01657344,
   0.01449853,
   0.01308512,
   0.01199613,
   0.01116814,
   0.01054011,
   0.01011974,
   0.009889811,
   0.009755127,
   0.009840009,
   0.01016918,
   0.0146028};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1163,Graph0_fy1163,Graph0_fex1163,Graph0_fey1163);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01163 = new TH1F("Graph_Graph01163","S0S12S18",100,0,3300);
   Graph_Graph01163->SetMinimum(-1.919489);
   Graph_Graph01163->SetMaximum(0.1394061);
   Graph_Graph01163->SetDirectory(0);
   Graph_Graph01163->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01163->SetLineColor(ci);
   Graph_Graph01163->GetXaxis()->SetTitle("p [MeV]: in range p #minus 200 < p < p #plus 200 MeV");
   Graph_Graph01163->GetXaxis()->SetRange(1,91);
   Graph_Graph01163->GetXaxis()->CenterTitle(true);
   Graph_Graph01163->GetXaxis()->SetLabelFont(42);
   Graph_Graph01163->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01163->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01163->GetXaxis()->SetTitleFont(42);
   Graph_Graph01163->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01163->GetYaxis()->CenterTitle(true);
   Graph_Graph01163->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01163->GetYaxis()->SetLabelFont(42);
   Graph_Graph01163->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01163->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01163->GetYaxis()->SetTitleFont(42);
   Graph_Graph01163->GetZaxis()->SetLabelFont(42);
   Graph_Graph01163->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01163->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01163);
   
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
