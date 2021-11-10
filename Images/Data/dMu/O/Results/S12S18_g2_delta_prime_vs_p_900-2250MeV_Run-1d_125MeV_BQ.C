void S12S18_g2_delta_prime_vs_p_900-2250MeV_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:08:22 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(624.5,-1.151472,2499.5,0.9646212);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1143[11] = {
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
   2187};
   Double_t _fy1143[11] = {
   0.02839936,
   0.3432649,
   0.003159196,
   -0.0110309,
   -0.3761175,
   0.006860504,
   0.01172892,
   0.1731437,
   0.1252647,
   0.2470347,
   -0.6167449};
   Double_t _fex1143[11] = {
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
   Double_t _fey1143[11] = {
   0.2634955,
   0.2141879,
   0.1838938,
   0.1679294,
   0.157447,
   0.1589908,
   0.1585405,
   0.1734962,
   0.1886591,
   0.2196137,
   0.2584939};
   TGraphErrors *gre = new TGraphErrors(11,_fx1143,_fy1143,_fex1143,_fey1143);
   gre->SetName("");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1143 = new TH1F("Graph_Graph1143","S12S18_",100,812,2312);
   Graph_Graph1143->SetMinimum(-0.9398623);
   Graph_Graph1143->SetMaximum(0.7530119);
   Graph_Graph1143->SetDirectory(0);
   Graph_Graph1143->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1143->SetLineColor(ci);
   Graph_Graph1143->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1143->GetXaxis()->CenterTitle(true);
   Graph_Graph1143->GetXaxis()->SetLabelFont(42);
   Graph_Graph1143->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1143->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1143->GetXaxis()->SetTitleFont(42);
   Graph_Graph1143->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 125 MeV");
   Graph_Graph1143->GetYaxis()->CenterTitle(true);
   Graph_Graph1143->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1143->GetYaxis()->SetLabelFont(42);
   Graph_Graph1143->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1143->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1143->GetYaxis()->SetTitleFont(42);
   Graph_Graph1143->GetZaxis()->SetLabelFont(42);
   Graph_Graph1143->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1143->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1143);
   
   
   TF1 *pol01144 = new TF1("pol0","pol0",900,2250, TF1::EAddToList::kNo);
   pol01144->SetFillColor(19);
   pol01144->SetFillStyle(0);
   pol01144->SetLineColor(2);
   pol01144->SetLineWidth(2);
   pol01144->SetChisquare(16.68447);
   pol01144->SetNDF(10);
   pol01144->GetXaxis()->SetLabelFont(42);
   pol01144->GetXaxis()->SetTitleOffset(1);
   pol01144->GetXaxis()->SetTitleFont(42);
   pol01144->GetYaxis()->SetLabelFont(42);
   pol01144->GetYaxis()->SetTitleFont(42);
   pol01144->SetParameter(0,-0.005275389);
   pol01144->SetParError(0,0.05608302);
   pol01144->SetParLimits(0,0,0);
   pol01144->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01144);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1d","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.0053
#pm0.06
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
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
