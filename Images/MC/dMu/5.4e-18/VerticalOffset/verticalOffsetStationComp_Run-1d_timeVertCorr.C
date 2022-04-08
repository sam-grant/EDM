void verticalOffsetStationComp_Run-1d_timeVertCorr()
{
//=========Macro generated from canvas: c/
//=========  (Wed Apr  6 15:51:50 2022) by ROOT version 6.24/06
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
   -0.06566608,
   -0.6163227,
   -0.6749196,
   -0.3063854,
   -0.1170644,
   -0.07543333,
   -0.01417044,
   0.1573687};
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
   0.01028636,
   0.007833952,
   0.00678342,
   0.00649775,
   0.006644034,
   0.007061917,
   0.007862949,
   0.009373177};
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
   -0.1882296,
   -0.7183937,
   -0.6358225,
   -0.3506347,
   -0.181515,
   -0.09963287,
   -0.05288394,
   0.01548025};
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
   0.01057251,
   0.00808423,
   0.007128531,
   0.006906955,
   0.007225717,
   0.007816829,
   0.00881887,
   0.01043666};
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
   Graph_Graph1018->SetMinimum(-0.8017174);
   Graph_Graph1018->SetMaximum(0.1011564);
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
