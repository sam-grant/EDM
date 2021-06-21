void S0S12S18_full_eA_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 11:30:51 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-437.25,-0.1054943,3605.25,1.412318);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1471[15] = {
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
   Double_t Graph0_fy1471[15] = {
   1.150618,
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
   Double_t Graph0_fex1471[15] = {
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
   Double_t Graph0_fey1471[15] = {
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
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1471,Graph0_fy1471,Graph0_fex1471,Graph0_fey1471);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 100 < p < p #plus 100 MeV;#deltaA_{EDM}");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01471 = new TH1F("Graph_Graph01471","",100,0,3300);
   Graph_Graph01471->SetMinimum(0.04628698);
   Graph_Graph01471->SetMaximum(1.260537);
   Graph_Graph01471->SetDirectory(0);
   Graph_Graph01471->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01471->SetLineColor(ci);
   Graph_Graph01471->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01471->GetXaxis()->SetRange(0,97);
   Graph_Graph01471->GetXaxis()->CenterTitle(true);
   Graph_Graph01471->GetXaxis()->SetLabelFont(42);
   Graph_Graph01471->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01471->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01471->GetXaxis()->SetTitleFont(42);
   Graph_Graph01471->GetYaxis()->SetTitle("#deltaA_{EDM}");
   Graph_Graph01471->GetYaxis()->CenterTitle(true);
   Graph_Graph01471->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01471->GetYaxis()->SetLabelFont(42);
   Graph_Graph01471->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01471->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01471->GetYaxis()->SetTitleFont(42);
   Graph_Graph01471->GetZaxis()->SetLabelFont(42);
   Graph_Graph01471->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01471->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01471);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
