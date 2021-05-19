void S12_full_c_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 17 13:47:01 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-535,-0.599176,3335,0.1271052);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1169[15] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200,
   2400,
   2600,
   2800};
   Double_t Graph0_fy1169[15] = {
   -0.4653324,
   -0.4652657,
   -0.4338406,
   -0.3188264,
   -0.2533834,
   -0.2123839,
   -0.1952546,
   -0.1789194,
   -0.1622421,
   -0.1348213,
   -0.1200764,
   -0.1285845,
   -0.1180119,
   -0.1155192,
   -0.04322277};
   Double_t Graph0_fex1169[15] = {
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
   Double_t Graph0_fey1169[15] = {
   0.0127967,
   0.01279667,
   0.01276639,
   0.01258462,
   0.01248763,
   0.01257198,
   0.01284902,
   0.01337908,
   0.01423469,
   0.01551919,
   0.01740946,
   0.02011644,
   0.02414344,
   0.03067852,
   0.04928114};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1169,Graph0_fy1169,Graph0_fex1169,Graph0_fey1169);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01169 = new TH1F("Graph_Graph01169","S12",100,-400,3200);
   Graph_Graph01169->SetMinimum(-0.5265478);
   Graph_Graph01169->SetMaximum(0.05447712);
   Graph_Graph01169->SetDirectory(0);
   Graph_Graph01169->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01169->SetLineColor(ci);
   Graph_Graph01169->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01169->GetXaxis()->SetRange(8,93);
   Graph_Graph01169->GetXaxis()->CenterTitle(true);
   Graph_Graph01169->GetXaxis()->SetLabelFont(42);
   Graph_Graph01169->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01169->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01169->GetXaxis()->SetTitleFont(42);
   Graph_Graph01169->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01169->GetYaxis()->CenterTitle(true);
   Graph_Graph01169->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01169->GetYaxis()->SetLabelFont(42);
   Graph_Graph01169->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01169->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01169->GetYaxis()->SetTitleFont(42);
   Graph_Graph01169->GetZaxis()->SetLabelFont(42);
   Graph_Graph01169->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01169->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01169);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
