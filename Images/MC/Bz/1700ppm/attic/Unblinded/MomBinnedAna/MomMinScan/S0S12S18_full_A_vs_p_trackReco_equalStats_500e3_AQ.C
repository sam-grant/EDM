void S0S12S18_full_A_vs_p_trackReco_equalStats_500e3_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:12:32 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-329.725,-0.0842392,2725.525,0.2215262);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1384[12] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t Graph0_fy1384[12] = {
   0.007275718,
   0.008279731,
   0.02805203,
   0.07884325,
   0.1368972,
   0.09329056,
   0.1290014,
   0.1206609,
   0.1291565,
   0.1344568,
   0.1434846,
   0.1222619};
   Double_t Graph0_fex1384[12] = {
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
   Double_t Graph0_fey1384[12] = {
   0.04055402,
   0.04054859,
   0.04013681,
   0.03721108,
   0.03366811,
   0.03048444,
   0.027682,
   0.02522472,
   0.02300083,
   0.02092593,
   0.01897687,
   0.01702114};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1384,Graph0_fy1384,Graph0_fex1384,Graph0_fey1384);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01384 = new TH1F("Graph_Graph01384","S0S12S18",100,0,2420);
   Graph_Graph01384->SetMinimum(-0.05366266);
   Graph_Graph01384->SetMaximum(0.1909497);
   Graph_Graph01384->SetDirectory(0);
   Graph_Graph01384->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01384->SetLineColor(ci);
   Graph_Graph01384->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01384->GetXaxis()->SetRange(0,100);
   Graph_Graph01384->GetXaxis()->CenterTitle(true);
   Graph_Graph01384->GetXaxis()->SetLabelFont(42);
   Graph_Graph01384->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01384->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01384->GetXaxis()->SetTitleFont(42);
   Graph_Graph01384->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01384->GetYaxis()->CenterTitle(true);
   Graph_Graph01384->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01384->GetYaxis()->SetLabelFont(42);
   Graph_Graph01384->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01384->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01384->GetYaxis()->SetTitleFont(42);
   Graph_Graph01384->GetZaxis()->SetLabelFont(42);
   Graph_Graph01384->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01384->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01384);
   
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
