void S12S18_full_A_vs_p_trackReco_equalStats_500e3_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:10:17 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-437.25,-4.730843,3605.25,1.362732);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1282[15] = {
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
   Double_t Graph0_fy1282[15] = {
   -2.802676,
   0.1864012,
   0.05754057,
   0.218618,
   0.2254428,
   0.09748334,
   0.1351348,
   0.2042032,
   0.1543155,
   0.1649736,
   0.1327199,
   0.1010196,
   0.1430974,
   0.1096531,
   -0.02906518};
   Double_t Graph0_fex1282[15] = {
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
   Double_t Graph0_fey1282[15] = {
   0.9125714,
   0.1607346,
   0.05551301,
   0.04314328,
   0.03821512,
   0.03531702,
   0.03307432,
   0.03125712,
   0.03014398,
   0.03002937,
   0.03062293,
   0.03207157,
   0.03392121,
   0.03300588,
   0.04285406};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1282,Graph0_fy1282,Graph0_fex1282,Graph0_fey1282);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01282 = new TH1F("Graph_Graph01282","S12S18",100,0,3300);
   Graph_Graph01282->SetMinimum(-4.121485);
   Graph_Graph01282->SetMaximum(0.7533741);
   Graph_Graph01282->SetDirectory(0);
   Graph_Graph01282->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01282->SetLineColor(ci);
   Graph_Graph01282->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01282->GetXaxis()->SetRange(0,97);
   Graph_Graph01282->GetXaxis()->CenterTitle(true);
   Graph_Graph01282->GetXaxis()->SetLabelFont(42);
   Graph_Graph01282->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01282->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01282->GetXaxis()->SetTitleFont(42);
   Graph_Graph01282->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01282->GetYaxis()->CenterTitle(true);
   Graph_Graph01282->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01282->GetYaxis()->SetLabelFont(42);
   Graph_Graph01282->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01282->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01282->GetYaxis()->SetTitleFont(42);
   Graph_Graph01282->GetZaxis()->SetLabelFont(42);
   Graph_Graph01282->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01282->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01282);
   
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
