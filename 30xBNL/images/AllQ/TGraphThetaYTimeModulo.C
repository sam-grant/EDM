void TGraphThetaYTimeModulo()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Sep 16 14:23:43 2020) by ROOT version 6.16/00
   TCanvas *c = new TCanvas("c", "c",1120,480,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.49601,-0.14485,4.46409,0.2592828);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[6] = {
   0.3273993,
   0.9821979,
   1.636997,
   2.291795,
   2.946594,
   3.601392};
   Double_t Graph0_fy1001[6] = {
   0.1483418,
   0.170098,
   0.1092137,
   0.03593048,
   -0.0556311,
   -0.01445954};
   Double_t Graph0_fex1001[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1001[6] = {
   0.0227228,
   0.02182932,
   0.02102552,
   0.02104949,
   0.02186341,
   0.02295713};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle(";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01001 = new TH1F("Graph_Graph01001","",100,0,3.928792);
   Graph_Graph01001->SetMinimum(-0.1044367);
   Graph_Graph01001->SetMaximum(0.2188695);
   Graph_Graph01001->SetDirectory(0);
   Graph_Graph01001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01001->SetLineColor(ci);
   Graph_Graph01001->GetXaxis()->SetTitle("t_{g#minus2}^{mod} [#mus]");
   Graph_Graph01001->GetXaxis()->SetRange(1,101);
   Graph_Graph01001->GetXaxis()->CenterTitle(true);
   Graph_Graph01001->GetXaxis()->SetLabelFont(42);
   Graph_Graph01001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph01001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01001->GetXaxis()->SetTitleFont(42);
   Graph_Graph01001->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph01001->GetYaxis()->CenterTitle(true);
   Graph_Graph01001->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01001->GetYaxis()->SetLabelFont(42);
   Graph_Graph01001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph01001->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01001->GetYaxis()->SetTitleFont(42);
   Graph_Graph01001->GetZaxis()->SetLabelFont(42);
   Graph_Graph01001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph01001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph01001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01001);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.59,0.79,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("N:	$3.05\times10^{6}$");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
