void full_c_vs_p_truth_MRF_200MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 22 12:36:44 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(250,-2.582663,3550,-0.333343);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1124[12] = {
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
   Double_t Graph0_fy1124[12] = {
   -0.7816681,
   -0.7891533,
   -0.8183281,
   -0.8425734,
   -0.8871636,
   -0.9328768,
   -1.031382,
   -1.125109,
   -1.226002,
   -1.308751,
   -1.520556,
   -1.969727};
   Double_t Graph0_fex1124[12] = {
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
   Double_t Graph0_fey1124[12] = {
   0.07343838,
   0.07433342,
   0.07621013,
   0.0791321,
   0.08321677,
   0.08872111,
   0.09597792,
   0.1055499,
   0.1183658,
   0.1368175,
   0.1677852,
   0.2380495};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1124,Graph0_fy1124,Graph0_fex1124,Graph0_fey1124);
   gre->SetName("Graph0");
   gre->SetTitle(";e^{+}_{LAB} p_{max} [MeV];c [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01124 = new TH1F("Graph_Graph01124","",100,580,3220);
   Graph_Graph01124->SetMinimum(-2.357731);
   Graph_Graph01124->SetMaximum(-0.558275);
   Graph_Graph01124->SetDirectory(0);
   Graph_Graph01124->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01124->SetLineColor(ci);
   Graph_Graph01124->GetXaxis()->SetTitle("e^{+}_{LAB} p_{max} [MeV]");
   Graph_Graph01124->GetXaxis()->SetRange(1,100);
   Graph_Graph01124->GetXaxis()->CenterTitle(true);
   Graph_Graph01124->GetXaxis()->SetLabelFont(42);
   Graph_Graph01124->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01124->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01124->GetXaxis()->SetTitleFont(42);
   Graph_Graph01124->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01124->GetYaxis()->CenterTitle(true);
   Graph_Graph01124->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01124->GetYaxis()->SetLabelFont(42);
   Graph_Graph01124->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01124->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01124->GetYaxis()->SetTitleFont(42);
   Graph_Graph01124->GetZaxis()->SetLabelFont(42);
   Graph_Graph01124->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01124->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01124);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
