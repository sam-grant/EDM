#ifdef __CLING__
#pragma cling optimize(0)
#endif
void verticalOffsetStationComp_Run-1d_timeVertCorr()
{
//=========Macro generated from canvas: c/
//=========  (Thu Sep 15 12:11:37 2022) by ROOT version 6.26/04
   TCanvas *c = new TCanvas("c", "",0,0,800,600);
   c->Range(819.441,-1.25,2667.684,1.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1037[6] = {
   1127.482,
   1373.619,
   1620.287,
   1866.945,
   2116.357,
   2359.644};
   Double_t _fy1037[6] = {
   -0.6163227,
   -0.6749196,
   -0.3063854,
   -0.1170644,
   -0.07543333,
   -0.01417044};
   Double_t _fex1037[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1037[6] = {
   0.007833952,
   0.00678342,
   0.00649775,
   0.006644034,
   0.007061917,
   0.007862949};
   TGraphErrors *gre = new TGraphErrors(6,_fx1037,_fy1037,_fex1037,_fey1037);
   gre->SetName("");
   gre->SetTitle("Run-1d");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1037 = new TH1F("Graph_Graph1037","Run-1d",100,1004.265,2482.86);
   Graph_Graph1037->SetMinimum(-1);
   Graph_Graph1037->SetMaximum(1);
   Graph_Graph1037->SetDirectory(0);
   Graph_Graph1037->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1037->SetLineColor(ci);
   Graph_Graph1037->GetXaxis()->SetTitle("Momentum [MeV]");
   Graph_Graph1037->GetXaxis()->CenterTitle(true);
   Graph_Graph1037->GetXaxis()->SetLabelFont(42);
   Graph_Graph1037->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1037->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1037->GetXaxis()->SetTitleFont(42);
   Graph_Graph1037->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_Graph1037->GetYaxis()->CenterTitle(true);
   Graph_Graph1037->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1037->GetYaxis()->SetLabelFont(42);
   Graph_Graph1037->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1037->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph1037->GetYaxis()->SetTitleFont(42);
   Graph_Graph1037->GetZaxis()->SetLabelFont(42);
   Graph_Graph1037->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1037);
   
   gre->Draw("apl");
   
   Double_t _fx1038[6] = {
   1127.239,
   1372.894,
   1619.454,
   1866.549,
   2115.743,
   2359.196};
   Double_t _fy1038[6] = {
   -0.7183937,
   -0.6358225,
   -0.3506347,
   -0.181515,
   -0.09963287,
   -0.05288394};
   Double_t _fex1038[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1038[6] = {
   0.00808423,
   0.007128531,
   0.006906955,
   0.007225717,
   0.007816829,
   0.00881887};
   gre = new TGraphErrors(6,_fx1038,_fy1038,_fex1038,_fey1038);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1038 = new TH1F("Graph_Graph1038","",100,1004.044,2482.392);
   Graph_Graph1038->SetMinimum(-0.7947192);
   Graph_Graph1038->SetMaximum(0.02417622);
   Graph_Graph1038->SetDirectory(0);
   Graph_Graph1038->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1038->SetLineColor(ci);
   Graph_Graph1038->GetXaxis()->SetLabelFont(42);
   Graph_Graph1038->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1038->GetXaxis()->SetTitleFont(42);
   Graph_Graph1038->GetYaxis()->SetLabelFont(42);
   Graph_Graph1038->GetYaxis()->SetTitleFont(42);
   Graph_Graph1038->GetZaxis()->SetLabelFont(42);
   Graph_Graph1038->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1038->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1038);
   
   gre->Draw("pl ");
   
   TLegend *leg = new TLegend(0.15,0.75,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Station 12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("","Station 18","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4278141,0.94,0.5721859,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Run-1d");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
