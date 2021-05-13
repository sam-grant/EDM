void S12_AEDM_vs_p_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 30 10:38:41 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(249.5,-0.02085379,2850.5,0.4097097);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1082[17] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350};
   Double_t Graph0_fy1082[17] = {
   0.2804885,
   0.2744965,
   0.1423143,
   0.1728481,
   0.1975055,
   0.06708109,
   0.2426395,
   0.2206398,
   0.1767883,
   0.1756622,
   0.1022554,
   0.187739,
   0.1109571,
   0.08728903,
   0.12958,
   0.1478747,
   0.1017119};
   Double_t Graph0_fex1082[17] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t Graph0_fey1082[17] = {
   0.05507535,
   0.05157605,
   0.04866016,
   0.04613071,
   0.04427902,
   0.04241158,
   0.04066601,
   0.03914084,
   0.03794424,
   0.03689264,
   0.03590363,
   0.0351535,
   0.03470303,
   0.03434987,
   0.03396045,
   0.03378753,
   0.03374395};
   TGraphErrors *gre = new TGraphErrors(17,Graph0_fx1082,Graph0_fy1082,Graph0_fex1082,Graph0_fey1082);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01082 = new TH1F("Graph_Graph01082","S12",100,530,2570);
   Graph_Graph01082->SetMinimum(0.02220256);
   Graph_Graph01082->SetMaximum(0.3666533);
   Graph_Graph01082->SetDirectory(0);
   Graph_Graph01082->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01082->SetLineColor(ci);
   Graph_Graph01082->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_Graph01082->GetXaxis()->SetRange(0,101);
   Graph_Graph01082->GetXaxis()->CenterTitle(true);
   Graph_Graph01082->GetXaxis()->SetLabelFont(42);
   Graph_Graph01082->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01082->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01082->GetXaxis()->SetTitleFont(42);
   Graph_Graph01082->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01082->GetYaxis()->CenterTitle(true);
   Graph_Graph01082->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01082->GetYaxis()->SetLabelFont(42);
   Graph_Graph01082->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01082->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01082->GetYaxis()->SetTitleFont(42);
   Graph_Graph01082->GetZaxis()->SetLabelFont(42);
   Graph_Graph01082->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01082->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01082);
   
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
