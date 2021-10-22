void S18_ABz_vs_p_slice_vertCorr_eQ_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 23:13:25 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-412.5,-68.85212,3712.5,14.48335);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1300[15] = {
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
   Double_t Graph0_fy1300[15] = {
   -53.63553,
   -0.3628871,
   -0.2079282,
   0.1456474,
   0.1068868,
   0.2149259,
   0.1380944,
   0.2693624,
   0.08466477,
   0.3250853,
   -0.01018799,
   0.1663687,
   0.09062648,
   0.01589583,
   0.4398457};
   Double_t Graph0_fex1300[15] = {
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
   Double_t Graph0_fey1300[15] = {
   1.327341,
   0.6663217,
   0.2353888,
   0.1766293,
   0.1555063,
   0.1414506,
   0.129057,
   0.1193956,
   0.1135674,
   0.1081957,
   0.1075123,
   0.1098063,
   0.1109001,
   0.1221082,
   0.1542606};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1300,Graph0_fy1300,Graph0_fex1300,Graph0_fey1300);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01300 = new TH1F("Graph_Graph01300","S18",100,0,3300);
   Graph_Graph01300->SetMinimum(-60.51857);
   Graph_Graph01300->SetMaximum(6.149804);
   Graph_Graph01300->SetDirectory(0);
   Graph_Graph01300->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01300->SetLineColor(ci);
   Graph_Graph01300->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01300->GetXaxis()->CenterTitle(true);
   Graph_Graph01300->GetXaxis()->SetLabelFont(42);
   Graph_Graph01300->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01300->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01300->GetXaxis()->SetTitleFont(42);
   Graph_Graph01300->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01300->GetYaxis()->CenterTitle(true);
   Graph_Graph01300->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01300->GetYaxis()->SetLabelFont(42);
   Graph_Graph01300->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01300->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01300->GetYaxis()->SetTitleFont(42);
   Graph_Graph01300->GetZaxis()->SetLabelFont(42);
   Graph_Graph01300->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01300->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01300);
   
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
