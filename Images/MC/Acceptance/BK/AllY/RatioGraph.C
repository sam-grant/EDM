void RatioGraph()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Mar 17 01:35:21 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-121.25,-74.01303,118.75,370.0377);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1001[58] = {
   -81.25,
   -76.25,
   -68.75,
   -66.25,
   -63.75,
   -61.25,
   -58.75,
   -56.25,
   -53.75,
   -51.25,
   -48.75,
   -46.25,
   -43.75,
   -41.25,
   -38.75,
   -36.25,
   -33.75,
   -31.25,
   -28.75,
   -26.25,
   -23.75,
   -21.25,
   -18.75,
   -16.25,
   -13.75,
   -11.25,
   -8.75,
   -6.25,
   -3.75,
   -1.25,
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75,
   51.25,
   53.75,
   56.25,
   58.75,
   61.25,
   63.75,
   66.25,
   78.75};
   Double_t _fy1001[58] = {
   32.25311,
   114.4568,
   148.0123,
   26.77185,
   88.30868,
   27.32787,
   17.51822,
   17.97898,
   18.28503,
   12.95987,
   10.15431,
   7.370779,
   7.488604,
   4.554826,
   3.464645,
   3.158117,
   2.916726,
   2.603067,
   2.359352,
   1.954569,
   1.496639,
   1.417163,
   1.346922,
   1.237276,
   1.191807,
   1.077605,
   1.105452,
   1.04283,
   1.05782,
   1.03409,
   1,
   1.0293,
   1.069881,
   1.108573,
   1.110781,
   1.167217,
   1.23939,
   1.261194,
   1.435312,
   1.596976,
   1.721965,
   1.913734,
   2.195168,
   2.296123,
   3.088591,
   3.410804,
   5.197258,
   6.201065,
   7.593278,
   8.790758,
   9.246029,
   28.69045,
   21.23292,
   30.45871,
   48.36366,
   58.62844,
   40.0251,
   51.7334};
   Double_t _fex1001[58] = {
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
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1001[58] = {
   18.62399,
   114.4613,
   148.0169,
   10.93143,
   62.44691,
   10.33069,
   5.058396,
   4.987742,
   4.888102,
   2.764028,
   1.824589,
   1.075806,
   1.039117,
   0.4677844,
   0.2932024,
   0.2425672,
   0.2030442,
   0.16266,
   0.1325622,
   0.09469857,
   0.06028993,
   0.05294803,
   0.04671431,
   0.03938886,
   0.03578046,
   0.02968474,
   0.02996767,
   0.02682984,
   0.02700205,
   0.02586153,
   0.02458214,
   0.02588711,
   0.02783503,
   0.03005194,
   0.03102979,
   0.03467483,
   0.03939651,
   0.04238082,
   0.05388615,
   0.06655794,
   0.07872318,
   0.09701277,
   0.1263717,
   0.1421374,
   0.2338212,
   0.2876266,
   0.5709752,
   0.7881169,
   1.120242,
   1.465889,
   1.661457,
   9.565007,
   6.403345,
   11.51404,
   24.18412,
   33.85179,
   20.01484,
   36.58427};
   TGraphErrors *gre = new TGraphErrors(58,_fx1001,_fy1001,_fex1001,_fey1001);
   gre->SetName("");
   gre->SetTitle(";#theta_{y} [mrad];Acceptance weighting");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","",100,-97.25,94.75);
   Graph_Graph1001->SetMinimum(-29.60796);
   Graph_Graph1001->SetMaximum(325.6326);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   Graph_Graph1001->GetXaxis()->CenterTitle(true);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetTitle("Acceptance weighting");
   Graph_Graph1001->GetYaxis()->CenterTitle(true);
   Graph_Graph1001->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1001->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   
   TF1 *AcceptanceFunc1002 = new TF1("AcceptanceFunc","1/([0]*exp(-0.5*((x-[1])/[2])**2))",-97.25,94.75, TF1::EAddToList::kNo);
   AcceptanceFunc1002->SetFillColor(19);
   AcceptanceFunc1002->SetFillStyle(0);
   AcceptanceFunc1002->SetLineColor(2);
   AcceptanceFunc1002->SetLineWidth(2);
   AcceptanceFunc1002->SetChisquare(159.4776);
   AcceptanceFunc1002->SetNDF(55);
   AcceptanceFunc1002->GetXaxis()->SetLabelFont(42);
   AcceptanceFunc1002->GetXaxis()->SetTitleOffset(1);
   AcceptanceFunc1002->GetXaxis()->SetTitleFont(42);
   AcceptanceFunc1002->GetYaxis()->SetLabelFont(42);
   AcceptanceFunc1002->GetYaxis()->SetTitleFont(42);
   AcceptanceFunc1002->SetParameter(0,0.9722414);
   AcceptanceFunc1002->SetParError(0,0.006654201);
   AcceptanceFunc1002->SetParLimits(0,0,0);
   AcceptanceFunc1002->SetParameter(1,0.09384678);
   AcceptanceFunc1002->SetParError(1,0.2436157);
   AcceptanceFunc1002->SetParLimits(1,0,0);
   AcceptanceFunc1002->SetParameter(2,25.68585);
   AcceptanceFunc1002->SetParError(2,0.1860533);
   AcceptanceFunc1002->SetParLimits(2,0,0);
   AcceptanceFunc1002->SetParent(gre);
   gre->GetListOfFunctions()->Add(AcceptanceFunc1002);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.325,0.75,0.8,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(26);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Sim","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("AcceptanceFunc","(ke^{#minus0.5#upoint(#frac{x-#mu}{#sigma})^{2}})^{-1}","lpf");
   entry->SetFillColor(19);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.35,0.5,0.5,0.7,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("k");
   pt_LaTex = pt->AddText("#mu");
   pt_LaTex = pt->AddText("#sigma");
   pt->Draw();
   
   pt = new TPaveText(0.5,0.5,0.65,0.7,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("2.9
");
   pt_LaTex = pt->AddText("1.004#pm0.002");
   pt_LaTex = pt->AddText("0.91#pm0.07");
   pt_LaTex = pt->AddText("27.09#pm0.09");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
