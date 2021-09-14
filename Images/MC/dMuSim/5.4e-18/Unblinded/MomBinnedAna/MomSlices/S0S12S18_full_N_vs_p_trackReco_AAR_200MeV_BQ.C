void S0S12S18_full_N_vs_p_trackReco_AAR_200MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Sep 12 22:37:03 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-196.8,-235355,3411.2,2214981);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1164[14] = {
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
   Double_t Graph0_fy1164[14] = {
   13852,
   398337,
   1143400,
   1720628,
   1791839,
   1635252,
   1409185,
   1175653,
   896190,
   633422,
   429893,
   281572,
   180562,
   10754};
   Double_t Graph0_fex1164[14] = {
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
   Double_t Graph0_fey1164[14] = {
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
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1164,Graph0_fy1164,Graph0_fex1164,Graph0_fey1164);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 100 < p < p #plus 100 MeV;Positrons");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01164 = new TH1F("Graph_Graph01164","",100,0,3280);
   Graph_Graph01164->SetMinimum(9678.6);
   Graph_Graph01164->SetMaximum(1969948);
   Graph_Graph01164->SetDirectory(0);
   Graph_Graph01164->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01164->SetLineColor(ci);
   Graph_Graph01164->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01164->GetXaxis()->SetRange(6,93);
   Graph_Graph01164->GetXaxis()->CenterTitle(true);
   Graph_Graph01164->GetXaxis()->SetLabelFont(42);
   Graph_Graph01164->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01164->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01164->GetXaxis()->SetTitleFont(42);
   Graph_Graph01164->GetYaxis()->SetTitle("Positrons");
   Graph_Graph01164->GetYaxis()->CenterTitle(true);
   Graph_Graph01164->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01164->GetYaxis()->SetLabelFont(42);
   Graph_Graph01164->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01164->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01164->GetYaxis()->SetTitleFont(42);
   Graph_Graph01164->GetZaxis()->SetLabelFont(42);
   Graph_Graph01164->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01164->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01164);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
