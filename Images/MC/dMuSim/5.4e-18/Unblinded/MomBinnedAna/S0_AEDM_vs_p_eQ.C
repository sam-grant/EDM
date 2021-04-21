void S0_AEDM_vs_p_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 30 10:38:37 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(249.5,0.01724166,2850.5,0.3271186);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1046[17] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350};
   Double_t Graph0_fy1046[17] = {
   0.1240622,
   0.2170054,
   0.2268274,
   0.175994,
   0.17892,
   0.1723462,
   0.2267131,
   0.1323054,
   0.218266,
   0.1096499,
   0.1690149,
   0.1724985,
   0.1956087,
   0.159927,
   0.1358276,
   0.1864758,
   0.1260797};
   Double_t Graph0_fex1046[17] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t Graph0_fey1046[17] = {
   0.05517442,
   0.05155146,
   0.04864502,
   0.04611268,
   0.04398843,
   0.04211741,
   0.04042851,
   0.03901702,
   0.03784783,
   0.03675427,
   0.03568344,
   0.03491242,
   0.03451133,
   0.03410932,
   0.03370088,
   0.03347856,
   0.0331852};
   TGraphErrors *gre = new TGraphErrors(17,Graph0_fx1046,Graph0_fy1046,Graph0_fex1046,Graph0_fey1046);
   gre->SetName("Graph0");
   gre->SetTitle("S0");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01046 = new TH1F("Graph_Graph01046","S0",100,530,2570);
   Graph_Graph01046->SetMinimum(0.04822936);
   Graph_Graph01046->SetMaximum(0.2961309);
   Graph_Graph01046->SetDirectory(0);
   Graph_Graph01046->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01046->SetLineColor(ci);
   Graph_Graph01046->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_Graph01046->GetXaxis()->SetRange(0,101);
   Graph_Graph01046->GetXaxis()->CenterTitle(true);
   Graph_Graph01046->GetXaxis()->SetLabelFont(42);
   Graph_Graph01046->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01046->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01046->GetXaxis()->SetTitleFont(42);
   Graph_Graph01046->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01046->GetYaxis()->CenterTitle(true);
   Graph_Graph01046->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01046->GetYaxis()->SetLabelFont(42);
   Graph_Graph01046->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01046->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01046->GetYaxis()->SetTitleFont(42);
   Graph_Graph01046->GetZaxis()->SetLabelFont(42);
   Graph_Graph01046->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01046->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01046);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4680151,0.94,0.5319849,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
