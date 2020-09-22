void C_vs_time_noQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Sep 18 16:34:58 2020) by ROOT version 6.16/00
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-96.25001,-1.418904,866.25,0.7293452);
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
   -0.2562033,
   -0.2654179,
   -0.2297549,
   -0.09100384,
   0.118473,
   -0.02846391,
   -0.7753656};
   Double_t Graph0_fex1017[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t Graph0_fey1017[7] = {
   0.003085276,
   0.006497199,
   0.0136403,
   0.08483906,
   0.1778296,
   0.3997676,
   0.2854967};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1017,Graph0_fy1017,Graph0_fex1017,Graph0_fey1017);
   gre->SetName("Graph0");
   gre->SetTitle(";Track time [#mus];Average vertical offset, c [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01017 = new TH1F("Graph_Graph01017","",100,0,770);
   Graph_Graph01017->SetMinimum(-1.204079);
   Graph_Graph01017->SetMaximum(0.5145203);
   Graph_Graph01017->SetDirectory(0);
   Graph_Graph01017->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01017->SetLineColor(ci);
   Graph_Graph01017->GetXaxis()->SetTitle("Track time [#mus]");
   Graph_Graph01017->GetXaxis()->CenterTitle(true);
   Graph_Graph01017->GetXaxis()->SetLabelFont(42);
   Graph_Graph01017->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph01017->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01017->GetXaxis()->SetTitleFont(42);
   Graph_Graph01017->GetYaxis()->SetTitle("Average vertical offset, c [mrad]");
   Graph_Graph01017->GetYaxis()->CenterTitle(true);
   Graph_Graph01017->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01017->GetYaxis()->SetLabelFont(42);
   Graph_Graph01017->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph01017->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01017->GetYaxis()->SetTitleFont(42);
   Graph_Graph01017->GetZaxis()->SetLabelFont(42);
   Graph_Graph01017->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph01017->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph01017->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01017);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
