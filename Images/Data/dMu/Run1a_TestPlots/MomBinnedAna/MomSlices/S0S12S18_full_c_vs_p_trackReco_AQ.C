void S0S12S18_full_c_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun  7 14:58:34 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-437.25,-6.675857,3605.25,4.153584);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1465[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1465[15] = {
   1.597403,
   -4.796059,
   -0.7769032,
   0.506794,
   0.7956929,
   0.00659052,
   -0.3179075,
   -0.2847834,
   -0.2291766,
   -0.1672099,
   -0.1427364,
   -0.09596703,
   -0.04463773,
   0.06207882,
   0.09502826};
   Double_t Graph0_fex1465[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1465[15] = {
   0.7512733,
   0.07489168,
   0.0267907,
   0.01705195,
   0.0132452,
   0.01141767,
   0.01019332,
   0.009509406,
   0.009124692,
   0.009141375,
   0.009354979,
   0.009754144,
   0.0111992,
   0.01179037,
   0.01955379};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1465,Graph0_fy1465,Graph0_fex1465,Graph0_fey1465);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01465 = new TH1F("Graph_Graph01465","S0S12S18",100,0,3300);
   Graph_Graph01465->SetMinimum(-5.592913);
   Graph_Graph01465->SetMaximum(3.070639);
   Graph_Graph01465->SetDirectory(0);
   Graph_Graph01465->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01465->SetLineColor(ci);
   Graph_Graph01465->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01465->GetXaxis()->SetRange(0,97);
   Graph_Graph01465->GetXaxis()->CenterTitle(true);
   Graph_Graph01465->GetXaxis()->SetLabelFont(42);
   Graph_Graph01465->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01465->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01465->GetXaxis()->SetTitleFont(42);
   Graph_Graph01465->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01465->GetYaxis()->CenterTitle(true);
   Graph_Graph01465->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01465->GetYaxis()->SetLabelFont(42);
   Graph_Graph01465->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01465->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01465->GetYaxis()->SetTitleFont(42);
   Graph_Graph01465->GetZaxis()->SetLabelFont(42);
   Graph_Graph01465->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01465->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01465);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4033166,0.94,0.5966834,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
