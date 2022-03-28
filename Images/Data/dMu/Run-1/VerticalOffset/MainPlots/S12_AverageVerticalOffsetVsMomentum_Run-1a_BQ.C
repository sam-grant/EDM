void S12_AverageVerticalOffsetVsMomentum_Run-1a_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Mar 27 15:09:33 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(30.74998,-2,3218.25,3);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1056[18] = {
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
   Double_t Graph0_fy1056[18] = {
   3.167049,
   0.0941098,
   0.220668,
   0.567092,
   -0.2385911,
   -0.3135117,
   -0.4923913,
   -0.3936582,
   -0.2030311,
   -0.08787597,
   0.2637128,
   0.1163543,
   -0.007164689,
   0.01785664,
   0.08663253,
   0.06577639,
   0.1091069,
   -0.05260843};
   Double_t Graph0_fex1056[18] = {
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
   Double_t Graph0_fey1056[18] = {
   0.138574,
   0.08360239,
   0.05744134,
   0.04713615,
   0.04145942,
   0.03744348,
   0.03504514,
   0.03311319,
   0.03322003,
   0.03199232,
   0.03279796,
   0.03277141,
   0.03454844,
   0.03494285,
   0.03660896,
   0.03920318,
   0.04177656,
   0.0440334};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1056,Graph0_fy1056,Graph0_fex1056,Graph0_fey1056);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01056 = new TH1F("Graph_Graph01056","S12",100,349.5,2899.5);
   Graph_Graph01056->SetMinimum(-1.5);
   Graph_Graph01056->SetMaximum(2.5);
   Graph_Graph01056->SetDirectory(0);
   Graph_Graph01056->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01056->SetLineColor(ci);
   Graph_Graph01056->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01056->GetXaxis()->CenterTitle(true);
   Graph_Graph01056->GetXaxis()->SetLabelFont(42);
   Graph_Graph01056->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01056->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01056->GetXaxis()->SetTitleFont(42);
   Graph_Graph01056->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph01056->GetYaxis()->CenterTitle(true);
   Graph_Graph01056->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01056->GetYaxis()->SetLabelFont(42);
   Graph_Graph01056->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01056->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01056->GetYaxis()->SetTitleFont(42);
   Graph_Graph01056->GetZaxis()->SetLabelFont(42);
   Graph_Graph01056->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01056->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01056);
   
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
   
   Double_t Graph0_fx1057[18] = {
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
   Double_t Graph0_fy1057[18] = {
   3.167049,
   0.0941098,
   0.220668,
   0.567092,
   -0.2385911,
   -0.3135117,
   -0.4923913,
   -0.3936582,
   -0.2030311,
   -0.08787597,
   0.2637128,
   0.1163543,
   -0.007164689,
   0.01785664,
   0.08663253,
   0.06577639,
   0.1091069,
   -0.05260843};
   Double_t Graph0_fex1057[18] = {
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
   Double_t Graph0_fey1057[18] = {
   0.138574,
   0.08360239,
   0.05744134,
   0.04713615,
   0.04145942,
   0.03744348,
   0.03504514,
   0.03311319,
   0.03322003,
   0.03199232,
   0.03279796,
   0.03277141,
   0.03454844,
   0.03494285,
   0.03660896,
   0.03920318,
   0.04177656,
   0.0440334};
   gre = new TGraphErrors(18,Graph0_fx1057,Graph0_fy1057,Graph0_fex1057,Graph0_fey1057);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph010561057 = new TH1F("Graph_Graph_Graph010561057","S12",100,349.5,2899.5);
   Graph_Graph_Graph010561057->SetMinimum(-1.5);
   Graph_Graph_Graph010561057->SetMaximum(2.5);
   Graph_Graph_Graph010561057->SetDirectory(0);
   Graph_Graph_Graph010561057->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010561057->SetLineColor(ci);
   Graph_Graph_Graph010561057->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_Graph010561057->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010561057->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010561057->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010561057->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010561057->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010561057->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph_Graph010561057->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010561057->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010561057->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010561057->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010561057->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph010561057->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010561057->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010561057->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010561057->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010561057);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.65,0.75,0.85,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","Run-1a","lpf");
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
