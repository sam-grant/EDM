void S18_c_vs_p_vertCorr_eQ_bQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 14:03:12 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(488,-0.3095375,1712,0.01937005);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1093[8] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450};
   Double_t Graph0_fy1093[8] = {
   -0.1009555,
   -0.1987244,
   -0.1945598,
   -0.1291634,
   -0.1565138,
   -0.1608618,
   -0.1371493,
   -0.1822528};
   Double_t Graph0_fex1093[8] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t Graph0_fey1093[8] = {
   0.0655076,
   0.05599518,
   0.04945174,
   0.04599309,
   0.04408026,
   0.04237827,
   0.04124477,
   0.04043747};
   TGraphErrors *gre = new TGraphErrors(8,Graph0_fx1093,Graph0_fy1093,Graph0_fex1093,Graph0_fey1093);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01093 = new TH1F("Graph_Graph01093","S18",100,620,1580);
   Graph_Graph01093->SetMinimum(-0.2766468);
   Graph_Graph01093->SetMaximum(-0.01352071);
   Graph_Graph01093->SetDirectory(0);
   Graph_Graph01093->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01093->SetLineColor(ci);
   Graph_Graph01093->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_Graph01093->GetXaxis()->SetRange(0,101);
   Graph_Graph01093->GetXaxis()->CenterTitle(true);
   Graph_Graph01093->GetXaxis()->SetLabelFont(42);
   Graph_Graph01093->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01093->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01093->GetXaxis()->SetTitleFont(42);
   Graph_Graph01093->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01093->GetYaxis()->CenterTitle(true);
   Graph_Graph01093->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01093->GetYaxis()->SetLabelFont(42);
   Graph_Graph01093->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01093->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01093->GetYaxis()->SetTitleFont(42);
   Graph_Graph01093->GetZaxis()->SetLabelFont(42);
   Graph_Graph01093->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01093->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01093);
   
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
