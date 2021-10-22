void full_A_vs_p_truthAllDecays_MRF_200MeV_noQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun 21 17:01:39 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-423.5,-9.430134e-05,3503.5,0.01224315);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1098[15] = {
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
   2200,
   2400,
   2600,
   2800};
   Double_t Graph0_fy1098[15] = {
   0.006565755,
   0.007344151,
   0.008175894,
   0.008809855,
   0.009332549,
   0.009808434,
   0.0100007,
   0.009691014,
   0.009428648,
   0.008652948,
   0.007807389,
   0.007008029,
   0.005436682,
   0.003802494,
   0.002562628};
   Double_t Graph0_fex1098[15] = {
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
   Double_t Graph0_fey1098[15] = {
   0.0001189131,
   0.000131182,
   0.0001423426,
   0.0001527235,
   0.0001635073,
   0.0001747856,
   0.0001862108,
   0.000197882,
   0.0002115239,
   0.0002293346,
   0.0002540082,
   0.0002849471,
   0.0003246747,
   0.0003865426,
   0.0006006876};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1098,Graph0_fy1098,Graph0_fex1098,Graph0_fey1098);
   gre->SetName("Graph0");
   gre->SetTitle(";p_{min} [MeV];A_{EDM} [rad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01098 = new TH1F("Graph_Graph01098","",100,0,3080);
   Graph_Graph01098->SetMinimum(0.001139444);
   Graph_Graph01098->SetMaximum(0.0110094);
   Graph_Graph01098->SetDirectory(0);
   Graph_Graph01098->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01098->SetLineColor(ci);
   Graph_Graph01098->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01098->GetXaxis()->SetRange(0,101);
   Graph_Graph01098->GetXaxis()->CenterTitle(true);
   Graph_Graph01098->GetXaxis()->SetLabelFont(42);
   Graph_Graph01098->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01098->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01098->GetXaxis()->SetTitleFont(42);
   Graph_Graph01098->GetYaxis()->SetTitle("A_{EDM} [rad]");
   Graph_Graph01098->GetYaxis()->CenterTitle(true);
   Graph_Graph01098->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01098->GetYaxis()->SetLabelFont(42);
   Graph_Graph01098->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01098->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01098->GetYaxis()->SetTitleFont(42);
   Graph_Graph01098->GetZaxis()->SetLabelFont(42);
   Graph_Graph01098->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01098->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01098);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
