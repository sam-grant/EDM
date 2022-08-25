#ifdef __CLING__
#pragma cling optimize(0)
#endif
void S12_AEDMAcceptanceFractionDiff()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Aug 19 14:49:51 2022) by ROOT version 6.26/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(813.2621,-0.01002609,2672.502,0.01002609);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1006[6] = {
   1123.136,
   1371.18,
   1620.234,
   1867.049,
   2114.925,
   2362.629};
   Double_t _fy1006[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fex1006[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1006[6] = {
   0.003635864,
   0.003547432,
   0.003672787,
   0.00411945,
   0.005050991,
   0.006684059};
   TGraphErrors *gre = new TGraphErrors(6,_fx1006,_fy1006,_fex1006,_fey1006);
   gre->SetName("");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1006 = new TH1F("Graph_Graph1006","S12",100,999.1862,2486.578);
   Graph_Graph1006->SetMinimum(-0.00802087);
   Graph_Graph1006->SetMaximum(0.00802087);
   Graph_Graph1006->SetDirectory(0);
   Graph_Graph1006->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1006->SetLineColor(ci);
   Graph_Graph1006->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1006->GetXaxis()->CenterTitle(true);
   Graph_Graph1006->GetXaxis()->SetLabelFont(42);
   Graph_Graph1006->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1006->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1006->GetXaxis()->SetTitleFont(42);
   Graph_Graph1006->GetYaxis()->SetTitle("#Delta A_{EDM} acceptance fraction / 250 MeV");
   Graph_Graph1006->GetYaxis()->CenterTitle(true);
   Graph_Graph1006->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1006->GetYaxis()->SetLabelFont(42);
   Graph_Graph1006->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1006->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1006->GetYaxis()->SetTitleFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelFont(42);
   Graph_Graph1006->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1006);
   
   gre->Draw("apl");
   
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
