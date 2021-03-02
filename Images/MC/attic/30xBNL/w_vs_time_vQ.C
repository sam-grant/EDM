void w_vs_time_vQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Sep 18 16:34:32 2020) by ROOT version 6.16/00
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-82.50001,-2.942249,742.5,5.350833);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1014[6] = {
   50,
   150,
   250,
   350,
   450,
   550};
   Double_t Graph0_fy1014[6] = {
   1.467144,
   1.495664,
   2.163477,
   1.204292,
   1.431342,
   1.231327};
   Double_t Graph0_fex1014[6] = {
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t Graph0_fey1014[6] = {
   0.03467051,
   0.06520491,
   0.1503794,
   2.76436,
   0.2914311,
   0.4549731};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1014,Graph0_fy1014,Graph0_fex1014,Graph0_fey1014);
   gre->SetName("Graph0");
   gre->SetTitle(";Track time [#mus];#omega_{a} [MHz]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01014 = new TH1F("Graph_Graph01014","",100,0,660);
   Graph_Graph01014->SetMinimum(-2.112941);
   Graph_Graph01014->SetMaximum(4.521524);
   Graph_Graph01014->SetDirectory(0);
   Graph_Graph01014->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01014->SetLineColor(ci);
   Graph_Graph01014->GetXaxis()->SetTitle("Track time [#mus]");
   Graph_Graph01014->GetXaxis()->CenterTitle(true);
   Graph_Graph01014->GetXaxis()->SetLabelFont(42);
   Graph_Graph01014->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph01014->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01014->GetXaxis()->SetTitleFont(42);
   Graph_Graph01014->GetYaxis()->SetTitle("#omega_{a} [MHz]");
   Graph_Graph01014->GetYaxis()->CenterTitle(true);
   Graph_Graph01014->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01014->GetYaxis()->SetLabelFont(42);
   Graph_Graph01014->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph01014->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01014->GetYaxis()->SetTitleFont(42);
   Graph_Graph01014->GetZaxis()->SetLabelFont(42);
   Graph_Graph01014->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph01014->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph01014->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01014);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
