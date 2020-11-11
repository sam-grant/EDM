void C_vs_time_noQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  9 17:41:24 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-96.25001,-1.290315,866.25,0.09055897);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1017[7] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650};
   Double_t Graph0_fy1017[7] = {
   -0.2488622,
   -0.2612478,
   -0.2293832,
   -0.2750561,
   -0.2031323,
   -0.3526089,
   -0.7751404};
   Double_t Graph0_fex1017[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t Graph0_fey1017[7] = {
   0.002853095,
   0.006209368,
   0.01352928,
   0.02946884,
   0.06354569,
   0.1389241,
   0.2850286};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1017,Graph0_fy1017,Graph0_fex1017,Graph0_fey1017);
   gre->SetName("Graph0");
   gre->SetTitle(";Track time [#mus];Average vertical offset, c [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01017 = new TH1F("Graph_Graph01017","",100,0,770);
   Graph_Graph01017->SetMinimum(-1.152227);
   Graph_Graph01017->SetMaximum(-0.0475284);
   Graph_Graph01017->SetDirectory(0);
   Graph_Graph01017->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01017->SetLineColor(ci);
   Graph_Graph01017->GetXaxis()->SetTitle("Track time [#mus]");
   Graph_Graph01017->GetXaxis()->CenterTitle(true);
   Graph_Graph01017->GetXaxis()->SetLabelFont(42);
   Graph_Graph01017->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01017->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01017->GetXaxis()->SetTitleFont(42);
   Graph_Graph01017->GetYaxis()->SetTitle("Average vertical offset, c [mrad]");
   Graph_Graph01017->GetYaxis()->CenterTitle(true);
   Graph_Graph01017->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01017->GetYaxis()->SetLabelFont(42);
   Graph_Graph01017->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01017->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01017->GetYaxis()->SetTitleFont(42);
   Graph_Graph01017->GetZaxis()->SetLabelFont(42);
   Graph_Graph01017->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01017);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
