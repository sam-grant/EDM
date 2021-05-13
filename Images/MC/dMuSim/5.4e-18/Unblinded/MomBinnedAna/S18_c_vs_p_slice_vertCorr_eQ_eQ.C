void S18_c_vs_p_slice_vertCorr_eQ_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 20:18:31 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-1.188199,3378.375,0.9775668);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1099[15] = {
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
   Double_t Graph0_fy1099[15] = {
   -0.07888193,
   -0.7192155,
   -0.3553448,
   -0.02684839,
   -0.0006655299,
   -0.0005312434,
   0.0002779528,
   0.0002512247,
   2.92319e-05,
   3.196327e-05,
   -0.0003289478,
   7.007427e-05,
   -0.001325034,
   0.002025843,
   0.003769621};
   Double_t Graph0_fex1099[15] = {
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
   Double_t Graph0_fey1099[15] = {
   0.6954877,
   0.1080228,
   0.03837179,
   0.02874185,
   0.0251757,
   0.02276991,
   0.02087623,
   0.01946821,
   0.01834866,
   0.01766498,
   0.01728914,
   0.01703938,
   0.01724605,
   0.01788343,
   0.02609269};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1099,Graph0_fy1099,Graph0_fex1099,Graph0_fey1099);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01099 = new TH1F("Graph_Graph01099","S18",100,0,3300);
   Graph_Graph01099->SetMinimum(-0.9716228);
   Graph_Graph01099->SetMaximum(0.7609902);
   Graph_Graph01099->SetDirectory(0);
   Graph_Graph01099->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01099->SetLineColor(ci);
   Graph_Graph01099->GetXaxis()->SetTitle("p [MeV]: in range p #minus 200 < p < p #plus 200 MeV");
   Graph_Graph01099->GetXaxis()->SetRange(1,91);
   Graph_Graph01099->GetXaxis()->CenterTitle(true);
   Graph_Graph01099->GetXaxis()->SetLabelFont(42);
   Graph_Graph01099->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01099->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01099->GetXaxis()->SetTitleFont(42);
   Graph_Graph01099->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01099->GetYaxis()->CenterTitle(true);
   Graph_Graph01099->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01099->GetYaxis()->SetLabelFont(42);
   Graph_Graph01099->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01099->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01099->GetYaxis()->SetTitleFont(42);
   Graph_Graph01099->GetZaxis()->SetLabelFont(42);
   Graph_Graph01099->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01099->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01099);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
