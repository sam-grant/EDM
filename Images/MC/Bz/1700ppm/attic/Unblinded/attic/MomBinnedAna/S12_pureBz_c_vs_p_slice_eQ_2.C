void S12_pureBz_c_vs_p_slice_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 12:22:42 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-410,-3.591773,3690,0.6814994);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1235[14] = {
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
   Double_t Graph0_fy1235[14] = {
   -2.771757,
   -1.561755,
   -0.5899002,
   -0.4047823,
   -0.3213625,
   -0.2577429,
   -0.1956321,
   -0.1630899,
   -0.1379199,
   -0.09723359,
   -0.071754,
   -0.07049857,
   -0.05065551,
   -0.06204431};
   Double_t Graph0_fex1235[14] = {
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
   Double_t Graph0_fey1235[14] = {
   0.1078036,
   0.03863012,
   0.02896623,
   0.02524059,
   0.02278365,
   0.0208805,
   0.01949341,
   0.01840151,
   0.01786589,
   0.0176366,
   0.017671,
   0.01831355,
   0.01994284,
   0.03061484};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1235,Graph0_fy1235,Graph0_fex1235,Graph0_fey1235);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01235 = new TH1F("Graph_Graph01235","S12",100,0,3280);
   Graph_Graph01235->SetMinimum(-3.164446);
   Graph_Graph01235->SetMaximum(0.2541722);
   Graph_Graph01235->SetDirectory(0);
   Graph_Graph01235->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01235->SetLineColor(ci);
   Graph_Graph01235->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01235->GetXaxis()->CenterTitle(true);
   Graph_Graph01235->GetXaxis()->SetLabelFont(42);
   Graph_Graph01235->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01235->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01235->GetXaxis()->SetTitleFont(42);
   Graph_Graph01235->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01235->GetYaxis()->CenterTitle(true);
   Graph_Graph01235->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01235->GetYaxis()->SetLabelFont(42);
   Graph_Graph01235->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01235->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01235->GetYaxis()->SetTitleFont(42);
   Graph_Graph01235->GetZaxis()->SetLabelFont(42);
   Graph_Graph01235->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01235->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01235);
   
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
