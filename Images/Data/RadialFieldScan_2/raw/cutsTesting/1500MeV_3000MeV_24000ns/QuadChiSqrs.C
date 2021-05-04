void QuadChiSqrs()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr 23 18:57:08 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-0.50487,75,4.776189);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1013[6] = {
   50,
   30,
   10,
   -10,
   -30,
   -50};
   Double_t Graph0_fy1013[6] = {
   0.5189218,
   1.011412,
   0.0882077,
   3.864241,
   0.02581774,
   0.1215394};
   Double_t Graph0_fex1013[6] = {
   6.95313e-310,
   6.95317e-310,
   6.930397e-310,
   1.985239e-314,
   2.964394e-323,
   2.124076e-314};
   Double_t Graph0_fey1013[6] = {
   6.95313e-310,
   6.95317e-310,
   6.930397e-310,
   1.985239e-314,
   2.964394e-323,
   2.124076e-314};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1013,Graph0_fy1013,Graph0_fex1013,Graph0_fey1013);
   gre->SetName("Graph0");
   gre->SetTitle(";#LTB_{r}^{App}#GT [ppm];#chi^{2}/ndf");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph01013 = new TH1F("Graph_Graph01013","",100,-60,60);
   Graph_Graph01013->SetMinimum(0.02323596);
   Graph_Graph01013->SetMaximum(4.248083);
   Graph_Graph01013->SetDirectory(0);
   Graph_Graph01013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01013->SetLineColor(ci);
   Graph_Graph01013->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01013->GetXaxis()->CenterTitle(true);
   Graph_Graph01013->GetXaxis()->SetNdivisions(6);
   Graph_Graph01013->GetXaxis()->SetLabelFont(42);
   Graph_Graph01013->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01013->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01013->GetXaxis()->SetTitleFont(42);
   Graph_Graph01013->GetYaxis()->SetTitle("#chi^{2}/ndf");
   Graph_Graph01013->GetYaxis()->CenterTitle(true);
   Graph_Graph01013->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01013->GetYaxis()->SetLabelFont(42);
   Graph_Graph01013->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01013->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01013->GetYaxis()->SetTitleFont(42);
   Graph_Graph01013->GetZaxis()->SetLabelFont(42);
   Graph_Graph01013->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01013);
   
   gre->Draw("ab");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
