void verticalOffsetStationComp_Run-1d_noVertCorr()
{
//=========Macro generated from canvas: c/
//=========  (Tue Apr  5 16:45:15 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "",0,0,800,600);
   c->Range(453.1429,-1.25,3039.225,1.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1017[8] = {
   884.1567,
   1127.482,
   1373.619,
   1620.287,
   1866.945,
   2116.357,
   2359.644,
   2608.212};
   Double_t _fy1017[8] = {
   -0.2378102,
   -0.7893147,
   -0.8487538,
   -0.480863,
   -0.2922296,
   -0.2513068,
   -0.1910941,
   -0.02006665};
   Double_t _fex1017[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1017[8] = {
   0.01028649,
   0.007834047,
   0.006783572,
   0.006497951,
   0.006644355,
   0.007062263,
   0.007863531,
   0.009374674};
   TGraphErrors *gre = new TGraphErrors(8,_fx1017,_fy1017,_fex1017,_fey1017);
   gre->SetName("");
   gre->SetTitle("Run-1d");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1017 = new TH1F("Graph_Graph1017","Run-1d",100,711.7512,2780.617);
   Graph_Graph1017->SetMinimum(-1);
   Graph_Graph1017->SetMaximum(1);
   Graph_Graph1017->SetDirectory(0);
   Graph_Graph1017->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1017->SetLineColor(ci);
   Graph_Graph1017->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1017->GetXaxis()->CenterTitle(true);
   Graph_Graph1017->GetXaxis()->SetLabelFont(42);
   Graph_Graph1017->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1017->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1017->GetXaxis()->SetTitleFont(42);
   Graph_Graph1017->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_Graph1017->GetYaxis()->CenterTitle(true);
   Graph_Graph1017->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1017->GetYaxis()->SetLabelFont(42);
   Graph_Graph1017->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1017->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph1017->GetYaxis()->SetTitleFont(42);
   Graph_Graph1017->GetZaxis()->SetLabelFont(42);
   Graph_Graph1017->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1017);
   
   gre->Draw("apl");
   
   Double_t _fx1018[8] = {
   883.631,
   1127.239,
   1372.894,
   1619.454,
   1866.549,
   2115.743,
   2359.196,
   2606.768};
   Double_t _fy1018[8] = {
   -0.3585297,
   -0.8891285,
   -0.8069311,
   -0.5222213,
   -0.3534884,
   -0.2722632,
   -0.2262001,
   -0.1575972};
   Double_t _fex1018[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1018[8] = {
   0.01057258,
   0.008084305,
   0.007128575,
   0.00690702,
   0.007225878,
   0.007816852,
   0.008818721,
   0.0104373};
   gre = new TGraphErrors(8,_fx1018,_fy1018,_fex1018,_fey1018);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1018 = new TH1F("Graph_Graph1018","",100,711.3173,2779.082);
   Graph_Graph1018->SetMinimum(-0.9722181);
   Graph_Graph1018->SetMaximum(-0.07215458);
   Graph_Graph1018->SetDirectory(0);
   Graph_Graph1018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1018->SetLineColor(ci);
   Graph_Graph1018->GetXaxis()->SetLabelFont(42);
   Graph_Graph1018->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1018->GetXaxis()->SetTitleFont(42);
   Graph_Graph1018->GetYaxis()->SetLabelFont(42);
   Graph_Graph1018->GetYaxis()->SetTitleFont(42);
   Graph_Graph1018->GetZaxis()->SetLabelFont(42);
   Graph_Graph1018->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1018);
   
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
