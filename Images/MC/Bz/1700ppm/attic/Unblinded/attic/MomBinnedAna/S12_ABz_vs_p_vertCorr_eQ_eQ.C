void S12_ABz_vs_p_vertCorr_eQ_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May  3 23:15:25 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(848.75,-0.02184572,2353.25,0.3604713);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1122[17] = {
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
   Double_t Graph0_fy1122[17] = {
   0.112346,
   0.2284641,
   0.2298705,
   0.1491088,
   0.1083007,
   0.2520815,
   0.233808,
   0.2055879,
   0.16325,
   0.1794054,
   0.1101097,
   0.1407454,
   0.1646151,
   0.09719062,
   0.05342014,
   0.1429536,
   0.1019988};
   Double_t Graph0_fex1122[17] = {
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
   Double_t Graph0_fey1122[17] = {
   0.05558188,
   0.05190077,
   0.04901675,
   0.04657556,
   0.0444191,
   0.0425187,
   0.04085047,
   0.03960779,
   0.03833185,
   0.03713979,
   0.03633008,
   0.03583027,
   0.03544353,
   0.03521581,
   0.03521349,
   0.0352139,
   0.03553729};
   TGraphErrors *gre = new TGraphErrors(17,Graph0_fx1122,Graph0_fy1122,Graph0_fex1122,Graph0_fey1122);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01122 = new TH1F("Graph_Graph01122","S12",100,530,2570);
   Graph_Graph01122->SetMinimum(0.01638599);
   Graph_Graph01122->SetMaximum(0.3222396);
   Graph_Graph01122->SetDirectory(0);
   Graph_Graph01122->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01122->SetLineColor(ci);
   Graph_Graph01122->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_Graph01122->GetXaxis()->SetRange(24,82);
   Graph_Graph01122->GetXaxis()->CenterTitle(true);
   Graph_Graph01122->GetXaxis()->SetLabelFont(42);
   Graph_Graph01122->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01122->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01122->GetXaxis()->SetTitleFont(42);
   Graph_Graph01122->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01122->GetYaxis()->CenterTitle(true);
   Graph_Graph01122->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01122->GetYaxis()->SetLabelFont(42);
   Graph_Graph01122->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01122->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01122->GetYaxis()->SetTitleFont(42);
   Graph_Graph01122->GetZaxis()->SetLabelFont(42);
   Graph_Graph01122->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01122->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01122);
   
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
