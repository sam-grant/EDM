void S0S12S18_c_vs_p_thetaY_trackReco_WORLD_250MeV_BQ.2_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:34:11 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.6095,-0.168913,3407.957,0.06874604);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1205[11] = {
   451.7799,
   653.2749,
   880.2439,
   1123.04,
   1371.162,
   1620.21,
   1867.078,
   2115.584,
   2363.023,
   2614.059,
   2788.48};
   Double_t Graph0_fy1205[11] = {
   -0.04563415,
   0.003956208,
   0.01514857,
   -0.001582754,
   -0.02233856,
   -0.006637098,
   -0.006126865,
   -0.0004430614,
   -0.01101764,
   -0.005740221,
   0.006701739};
   Double_t Graph0_fex1205[11] = {
   0.09191709,
   0.07752512,
   0.05616783,
   0.05486794,
   0.05858757,
   0.06479554,
   0.07538216,
   0.09335624,
   0.1199966,
   0.1475783,
   0.1798422};
   Double_t Graph0_fey1205[11] = {
   0.08694601,
   0.02910238,
   0.01668758,
   0.0137032,
   0.01256676,
   0.01200115,
   0.01209126,
   0.01280802,
   0.01395411,
   0.01450976,
   0.03461485};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1205,Graph0_fy1205,Graph0_fex1205,Graph0_fey1205);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01205 = new TH1F("Graph_Graph01205","S0S12S18_",100,217.9908,3022.357);
   Graph_Graph01205->SetMinimum(-0.1451471);
   Graph_Graph01205->SetMaximum(0.04498014);
   Graph_Graph01205->SetDirectory(0);
   Graph_Graph01205->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01205->SetLineColor(ci);
   Graph_Graph01205->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01205->GetXaxis()->SetRange(0,101);
   Graph_Graph01205->GetXaxis()->CenterTitle(true);
   Graph_Graph01205->GetXaxis()->SetLabelFont(42);
   Graph_Graph01205->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01205->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01205->GetXaxis()->SetTitleFont(42);
   Graph_Graph01205->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_Graph01205->GetYaxis()->CenterTitle(true);
   Graph_Graph01205->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01205->GetYaxis()->SetLabelFont(42);
   Graph_Graph01205->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01205->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01205->GetYaxis()->SetTitleFont(42);
   Graph_Graph01205->GetZaxis()->SetLabelFont(42);
   Graph_Graph01205->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01205->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01205);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
