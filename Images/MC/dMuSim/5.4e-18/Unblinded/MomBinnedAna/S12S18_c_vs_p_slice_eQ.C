void S12S18_c_vs_p_slice_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 20:17:11 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-2.471928,3378.375,0.4386171);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1131[15] = {
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
   Double_t Graph0_fy1131[15] = {
   -1.011589,
   -1.910888,
   -1.418612,
   -0.457327,
   -0.2959653,
   -0.2435127,
   -0.1758128,
   -0.1577326,
   -0.1650531,
   -0.1289119,
   -0.09884229,
   -0.09952725,
   -0.09282074,
   -0.109592,
   -0.06467758};
   Double_t Graph0_fex1131[15] = {
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
   Double_t Graph0_fey1131[15] = {
   0.5168159,
   0.07594886,
   0.02712337,
   0.02030152,
   0.01777488,
   0.01606392,
   0.01473401,
   0.0137099,
   0.0129435,
   0.01243547,
   0.01216423,
   0.01200863,
   0.01214417,
   0.01257434,
   0.01820387};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1131,Graph0_fy1131,Graph0_fex1131,Graph0_fey1131);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01131 = new TH1F("Graph_Graph01131","S12S18",100,0,3300);
   Graph_Graph01131->SetMinimum(-2.180873);
   Graph_Graph01131->SetMaximum(0.1475626);
   Graph_Graph01131->SetDirectory(0);
   Graph_Graph01131->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01131->SetLineColor(ci);
   Graph_Graph01131->GetXaxis()->SetTitle("p [MeV]: in range p #minus 200 < p < p #plus 200 MeV");
   Graph_Graph01131->GetXaxis()->SetRange(1,91);
   Graph_Graph01131->GetXaxis()->CenterTitle(true);
   Graph_Graph01131->GetXaxis()->SetLabelFont(42);
   Graph_Graph01131->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01131->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01131->GetXaxis()->SetTitleFont(42);
   Graph_Graph01131->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01131->GetYaxis()->CenterTitle(true);
   Graph_Graph01131->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01131->GetYaxis()->SetLabelFont(42);
   Graph_Graph01131->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01131->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01131->GetYaxis()->SetTitleFont(42);
   Graph_Graph01131->GetZaxis()->SetLabelFont(42);
   Graph_Graph01131->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01131->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01131);
   
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
