void S12_AverageVerticalOffsetVsMomentum_Run-1d_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 00:57:52 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(30.74998,-2,3218.25,3);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1069[18] = {
   562,
   687,
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437,
   2562,
   2687};
   Double_t Graph0_fy1069[18] = {
   1.957554,
   -0.4808419,
   -0.2342689,
   0.1044764,
   -0.623374,
   -0.6130854,
   -0.6773747,
   -0.5907151,
   -0.3341579,
   -0.1523068,
   -0.1185101,
   -0.02940907,
   -0.08377358,
   -0.004430852,
   0.00184224,
   -0.008195002,
   0.1329711,
   0.212352};
   Double_t Graph0_fex1069[18] = {
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
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1069[18] = {
   0.08333991,
   0.04991025,
   0.0344413,
   0.02829554,
   0.02498544,
   0.02259689,
   0.02123622,
   0.02006361,
   0.02009952,
   0.0194306,
   0.02012797,
   0.02028669,
   0.02120037,
   0.02143761,
   0.02256962,
   0.02428388,
   0.02592203,
   0.02776147};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1069,Graph0_fy1069,Graph0_fex1069,Graph0_fey1069);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01069 = new TH1F("Graph_Graph01069","S12",100,349.5,2899.5);
   Graph_Graph01069->SetMinimum(-1.5);
   Graph_Graph01069->SetMaximum(2.5);
   Graph_Graph01069->SetDirectory(0);
   Graph_Graph01069->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01069->SetLineColor(ci);
   Graph_Graph01069->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01069->GetXaxis()->CenterTitle(true);
   Graph_Graph01069->GetXaxis()->SetLabelFont(42);
   Graph_Graph01069->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01069->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01069->GetXaxis()->SetTitleFont(42);
   Graph_Graph01069->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph01069->GetYaxis()->CenterTitle(true);
   Graph_Graph01069->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01069->GetYaxis()->SetLabelFont(42);
   Graph_Graph01069->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01069->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01069->GetYaxis()->SetTitleFont(42);
   Graph_Graph01069->GetZaxis()->SetLabelFont(42);
   Graph_Graph01069->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01069->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01069);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   TLine *line = new TLine(349.5,0,2899.5,0);

   ci = TColor::GetColor("#cccccc");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   
   Double_t Graph0_fx1070[18] = {
   562,
   687,
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437,
   2562,
   2687};
   Double_t Graph0_fy1070[18] = {
   1.957554,
   -0.4808419,
   -0.2342689,
   0.1044764,
   -0.623374,
   -0.6130854,
   -0.6773747,
   -0.5907151,
   -0.3341579,
   -0.1523068,
   -0.1185101,
   -0.02940907,
   -0.08377358,
   -0.004430852,
   0.00184224,
   -0.008195002,
   0.1329711,
   0.212352};
   Double_t Graph0_fex1070[18] = {
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
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1070[18] = {
   0.08333991,
   0.04991025,
   0.0344413,
   0.02829554,
   0.02498544,
   0.02259689,
   0.02123622,
   0.02006361,
   0.02009952,
   0.0194306,
   0.02012797,
   0.02028669,
   0.02120037,
   0.02143761,
   0.02256962,
   0.02428388,
   0.02592203,
   0.02776147};
   gre = new TGraphErrors(18,Graph0_fx1070,Graph0_fy1070,Graph0_fex1070,Graph0_fey1070);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph010691070 = new TH1F("Graph_Graph_Graph010691070","S12",100,349.5,2899.5);
   Graph_Graph_Graph010691070->SetMinimum(-1.5);
   Graph_Graph_Graph010691070->SetMaximum(2.5);
   Graph_Graph_Graph010691070->SetDirectory(0);
   Graph_Graph_Graph010691070->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010691070->SetLineColor(ci);
   Graph_Graph_Graph010691070->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_Graph010691070->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010691070->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010691070->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010691070->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010691070->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010691070->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph_Graph010691070->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010691070->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010691070->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010691070->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010691070->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph010691070->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010691070->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010691070->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010691070->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010691070);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.65,0.75,0.85,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","Run-1d","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
