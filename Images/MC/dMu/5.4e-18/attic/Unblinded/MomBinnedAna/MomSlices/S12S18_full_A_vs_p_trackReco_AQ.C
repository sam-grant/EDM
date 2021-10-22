void S12S18_full_A_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 11:30:36 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-437.25,-1.603287,3605.25,5.601315);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1360[15] = {
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
   Double_t Graph0_fy1360[15] = {
   3.229963,
   -0.1093438,
   -0.1198291,
   -0.3138523,
   -0.2957033,
   -0.07285139,
   -0.06718161,
   -0.2179902,
   -0.1681903,
   -0.1852008,
   -0.1601577,
   -0.1952654,
   -0.3205319,
   -0.2168978,
   0.05557397};
   Double_t Graph0_fex1360[15] = {
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
   Double_t Graph0_fey1360[15] = {
   1.170585,
   0.2235201,
   0.07831818,
   0.06083943,
   0.05458853,
   0.05188587,
   0.05142998,
   0.05289485,
   0.05665139,
   0.06226778,
   0.0706711,
   0.07925043,
   0.08198828,
   0.0661952,
   0.06901914};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1360,Graph0_fy1360,Graph0_fex1360,Graph0_fey1360);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01360 = new TH1F("Graph_Graph01360","S12S18",100,0,3300);
   Graph_Graph01360->SetMinimum(-0.8828269);
   Graph_Graph01360->SetMaximum(4.880855);
   Graph_Graph01360->SetDirectory(0);
   Graph_Graph01360->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01360->SetLineColor(ci);
   Graph_Graph01360->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01360->GetXaxis()->SetRange(0,97);
   Graph_Graph01360->GetXaxis()->CenterTitle(true);
   Graph_Graph01360->GetXaxis()->SetLabelFont(42);
   Graph_Graph01360->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01360->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01360->GetXaxis()->SetTitleFont(42);
   Graph_Graph01360->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01360->GetYaxis()->CenterTitle(true);
   Graph_Graph01360->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01360->GetYaxis()->SetLabelFont(42);
   Graph_Graph01360->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01360->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01360->GetYaxis()->SetTitleFont(42);
   Graph_Graph01360->GetZaxis()->SetLabelFont(42);
   Graph_Graph01360->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01360->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01360);
   
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
