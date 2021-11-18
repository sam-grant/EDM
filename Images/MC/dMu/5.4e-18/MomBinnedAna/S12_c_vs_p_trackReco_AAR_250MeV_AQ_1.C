void S12_c_vs_p_trackReco_AAR_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:30:24 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(521.6978,-3.270419,2724.422,0.5944625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1035[12] = {
   176.9499,
   432.0898,
   628.443,
   872.9939,
   1121.66,
   1371.549,
   1620.298,
   1868.258,
   2116.438,
   2363.083,
   2614.356,
   2826.288};
   Double_t Graph0_fy1035[12] = {
   -1.284245,
   -2.576581,
   -0.9509058,
   -0.5252637,
   -0.308633,
   -0.2496893,
   -0.204787,
   -0.1430005,
   -0.1738241,
   -0.1325306,
   -0.1111378,
   -0.07441185};
   Double_t Graph0_fex1035[12] = {
   0.7206046,
   0.0703677,
   0.06339667,
   0.06384642,
   0.06844611,
   0.07394814,
   0.08138022,
   0.09307723,
   0.1109457,
   0.1412249,
   0.1860587,
   0.225681};
   Double_t Graph0_fey1035[12] = {
   0.6804058,
   0.04969137,
   0.02488325,
   0.02038205,
   0.01839841,
   0.01692081,
   0.01601105,
   0.01583956,
   0.01633564,
   0.01781582,
   0.0192626,
   0.02472742};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1035,Graph0_fy1035,Graph0_fex1035,Graph0_fey1035);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01035 = new TH1F("Graph_Graph01035","S12_",100,0,3091.543);
   Graph_Graph01035->SetMinimum(-2.883931);
   Graph_Graph01035->SetMaximum(0.2079743);
   Graph_Graph01035->SetDirectory(0);
   Graph_Graph01035->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01035->SetLineColor(ci);
   Graph_Graph01035->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01035->GetXaxis()->SetRange(25,81);
   Graph_Graph01035->GetXaxis()->CenterTitle(true);
   Graph_Graph01035->GetXaxis()->SetLabelFont(42);
   Graph_Graph01035->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01035->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01035->GetXaxis()->SetTitleFont(42);
   Graph_Graph01035->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01035->GetYaxis()->CenterTitle(true);
   Graph_Graph01035->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01035->GetYaxis()->SetLabelFont(42);
   Graph_Graph01035->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01035->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01035->GetYaxis()->SetTitleFont(42);
   Graph_Graph01035->GetZaxis()->SetLabelFont(42);
   Graph_Graph01035->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01035);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
