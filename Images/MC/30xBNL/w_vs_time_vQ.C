void w_vs_time_vQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Sep 17 19:59:40 2020) by ROOT version 6.16/00
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-82.50001,-0.09175694,742.5,2.439915);
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
   1.481996,
   1.436332,
   0.6647361,
   1.626241,
   0.4388235,
   1.025542};
   Double_t Graph0_fex1014[6] = {
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t Graph0_fey1014[6] = {
   0.03905129,
   0.07625581,
   0.06576555,
   0.3780157,
   0.2594787,
   0.4983698};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1014,Graph0_fy1014,Graph0_fex1014,Graph0_fey1014);
   gre->SetName("Graph0");
   gre->SetTitle(";Track time [#mus];#omega_{a} [MHz]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01014 = new TH1F("Graph_Graph01014","",100,0,660);
   Graph_Graph01014->SetMinimum(0.1614103);
   Graph_Graph01014->SetMaximum(2.186748);
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
