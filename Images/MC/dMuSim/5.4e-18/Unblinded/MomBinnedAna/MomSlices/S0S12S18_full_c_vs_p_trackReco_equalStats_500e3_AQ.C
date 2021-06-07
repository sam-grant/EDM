void S0S12S18_full_c_vs_p_trackReco_equalStats_500e3_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:10:28 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(197,-1.589035,2003,0.2119029);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1345[7] = {
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700};
   Double_t Graph0_fy1345[7] = {
   -1.246813,
   -0.3577356,
   -0.2195581,
   -0.1608061,
   -0.1299306,
   -0.1159344,
   -0.1075628};
   Double_t Graph0_fex1345[7] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1345[7] = {
   0.04206535,
   0.03683955,
   0.0320128,
   0.0280209,
   0.02461304,
   0.0217419,
   0.01930941};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1345,Graph0_fy1345,Graph0_fex1345,Graph0_fey1345);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01345 = new TH1F("Graph_Graph01345","S0S12S18",100,260,1940);
   Graph_Graph01345->SetMinimum(-1.408941);
   Graph_Graph01345->SetMaximum(0.03180912);
   Graph_Graph01345->SetDirectory(0);
   Graph_Graph01345->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01345->SetLineColor(ci);
   Graph_Graph01345->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01345->GetXaxis()->SetRange(8,93);
   Graph_Graph01345->GetXaxis()->CenterTitle(true);
   Graph_Graph01345->GetXaxis()->SetLabelFont(42);
   Graph_Graph01345->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01345->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01345->GetXaxis()->SetTitleFont(42);
   Graph_Graph01345->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01345->GetYaxis()->CenterTitle(true);
   Graph_Graph01345->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01345->GetYaxis()->SetLabelFont(42);
   Graph_Graph01345->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01345->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01345->GetYaxis()->SetTitleFont(42);
   Graph_Graph01345->GetZaxis()->SetLabelFont(42);
   Graph_Graph01345->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01345->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01345);
   
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
