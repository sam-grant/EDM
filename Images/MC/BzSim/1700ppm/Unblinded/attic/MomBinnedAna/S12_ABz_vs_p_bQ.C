void S12_ABz_vs_p_bQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 14:57:33 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(249.5,-0.1106757,2850.5,0.4437756);
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
   0.1941956,
   0.2241196,
   0.2807124,
   0.1631897,
   0.07296853,
   0.2298344,
   0.2610238,
   0.2355758,
   0.26383,
   0.1246114,
   0.1502606,
   0.1577655,
   0.1107915,
   0.1429312,
   0.04205568,
   0.1755833,
   0.1515262};
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
   0.09305494,
   0.07947483,
   0.0706547,
   0.06564591,
   0.06241028,
   0.05993497,
   0.05805457,
   0.05711438,
   0.05582495,
   0.05486954,
   0.05475797,
   0.05554133,
   0.05641605,
   0.05844168,
   0.06032279,
   0.06221857,
   0.06487086};
   TGraphErrors *gre = new TGraphErrors(17,Graph0_fx1122,Graph0_fy1122,Graph0_fex1122,Graph0_fey1122);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01122 = new TH1F("Graph_Graph01122","S12",100,530,2570);
   Graph_Graph01122->SetMinimum(-0.05523053);
   Graph_Graph01122->SetMaximum(0.3883305);
   Graph_Graph01122->SetDirectory(0);
   Graph_Graph01122->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01122->SetLineColor(ci);
   Graph_Graph01122->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_Graph01122->GetXaxis()->SetRange(0,101);
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
