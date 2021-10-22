void S12_full_c_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 11:30:14 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(250,0.2081193,3550,0.8055169);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1221[12] = {
   3000,
   2800,
   2600,
   2400,
   2200,
   2000,
   1800,
   1600,
   1400,
   1200,
   1000,
   800};
   Double_t Graph0_fy1221[12] = {
   0.3203131,
   0.321869,
   0.3247711,
   0.3293145,
   0.3367372,
   0.3512837,
   0.3686414,
   0.3894734,
   0.4187853,
   0.4625308,
   0.5462946,
   0.6627374};
   Double_t Graph0_fex1221[12] = {
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
   Double_t Graph0_fey1221[12] = {
   0.01262762,
   0.01268668,
   0.01286623,
   0.01314857,
   0.01361564,
   0.01434071,
   0.01541789,
   0.01698292,
   0.01928433,
   0.02281379,
   0.02893851,
   0.04321322};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1221,Graph0_fy1221,Graph0_fex1221,Graph0_fey1221);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01221 = new TH1F("Graph_Graph01221","S12",100,580,3220);
   Graph_Graph01221->SetMinimum(0.267859);
   Graph_Graph01221->SetMaximum(0.7457771);
   Graph_Graph01221->SetDirectory(0);
   Graph_Graph01221->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01221->SetLineColor(ci);
   Graph_Graph01221->GetXaxis()->SetTitle("p_{max} [MeV]");
   Graph_Graph01221->GetXaxis()->SetRange(1,100);
   Graph_Graph01221->GetXaxis()->CenterTitle(true);
   Graph_Graph01221->GetXaxis()->SetLabelFont(42);
   Graph_Graph01221->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01221->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01221->GetXaxis()->SetTitleFont(42);
   Graph_Graph01221->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01221->GetYaxis()->CenterTitle(true);
   Graph_Graph01221->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01221->GetYaxis()->SetLabelFont(42);
   Graph_Graph01221->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01221->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01221->GetYaxis()->SetTitleFont(42);
   Graph_Graph01221->GetZaxis()->SetLabelFont(42);
   Graph_Graph01221->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01221->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01221);
   
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
