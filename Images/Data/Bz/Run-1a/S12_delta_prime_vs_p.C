void S12_delta_prime_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 14 13:05:45 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(500,-1.9375,2750,2.4375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12_delta_prime_vs_p_fx1001[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t S12_delta_prime_vs_p_fy1001[7] = {
   0.2065695,
   -0.04621972,
   0.2478919,
   0.008707806,
   -0.4044464,
   -0.1415972,
   -0.6266572};
   Double_t S12_delta_prime_vs_p_fex1001[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12_delta_prime_vs_p_fey1001[7] = {
   0.4157978,
   0.267141,
   0.2159019,
   0.2094742,
   0.2364016,
   0.3130722,
   0.5444398};
   TGraphErrors *gre = new TGraphErrors(7,S12_delta_prime_vs_p_fx1001,S12_delta_prime_vs_p_fy1001,S12_delta_prime_vs_p_fex1001,S12_delta_prime_vs_p_fey1001);
   gre->SetName("S12_delta_prime_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_delta_prime_vs_p1001 = new TH1F("Graph_S12_delta_prime_vs_p1001","S12",100,725,2525);
   Graph_S12_delta_prime_vs_p1001->SetMinimum(-1.5);
   Graph_S12_delta_prime_vs_p1001->SetMaximum(2);
   Graph_S12_delta_prime_vs_p1001->SetDirectory(0);
   Graph_S12_delta_prime_vs_p1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12_delta_prime_vs_p1001->SetLineColor(ci);
   Graph_S12_delta_prime_vs_p1001->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_S12_delta_prime_vs_p1001->GetXaxis()->CenterTitle(true);
   Graph_S12_delta_prime_vs_p1001->GetXaxis()->SetLabelFont(42);
   Graph_S12_delta_prime_vs_p1001->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_delta_prime_vs_p1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_delta_prime_vs_p1001->GetXaxis()->SetTitleFont(42);
   Graph_S12_delta_prime_vs_p1001->GetYaxis()->SetTitle("#delta'_{g-2} [mrad]");
   Graph_S12_delta_prime_vs_p1001->GetYaxis()->CenterTitle(true);
   Graph_S12_delta_prime_vs_p1001->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_delta_prime_vs_p1001->GetYaxis()->SetLabelFont(42);
   Graph_S12_delta_prime_vs_p1001->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_delta_prime_vs_p1001->GetYaxis()->SetTitleOffset(1.1);
   Graph_S12_delta_prime_vs_p1001->GetYaxis()->SetTitleFont(42);
   Graph_S12_delta_prime_vs_p1001->GetZaxis()->SetLabelFont(42);
   Graph_S12_delta_prime_vs_p1001->GetZaxis()->SetTitleOffset(1);
   Graph_S12_delta_prime_vs_p1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_delta_prime_vs_p1001);
   
   
   TF1 *pol01002 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01002->SetFillColor(19);
   pol01002->SetFillStyle(0);
   pol01002->SetLineColor(2);
   pol01002->SetLineWidth(2);
   pol01002->SetChisquare(5.818681);
   pol01002->SetNDF(6);
   pol01002->GetXaxis()->SetLabelFont(42);
   pol01002->GetXaxis()->SetTitleOffset(1);
   pol01002->GetXaxis()->SetTitleFont(42);
   pol01002->GetYaxis()->SetLabelFont(42);
   pol01002->GetYaxis()->SetTitleFont(42);
   pol01002->SetParameter(0,-0.04954694);
   pol01002->SetParError(0,0.1023239);
   pol01002->SetParLimits(0,0,0);
   pol01002->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01002);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S12_delta_prime_vs_p","Data: Run-1a","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.05
#pm0.1
 mrad","lpf");
   entry->SetFillColor(19);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
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
