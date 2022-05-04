void S12S18_g2_delta_prime_vs_p_750-2500MeV_Run-1c_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  3 11:57:54 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(515.085,-1.532779,2728.5,1.859333);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1103[7] = {
   883.9874,
   1127.416,
   1373.27,
   1619.964,
   1866.887,
   2116.045,
   2359.597};
   Double_t _fy1103[7] = {
   0.561221,
   0.1065569,
   -0.06834403,
   -0.06575143,
   0.1006207,
   -0.299646,
   -0.07279729};
   Double_t _fex1103[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1103[7] = {
   0.208901,
   0.156746,
   0.1255217,
   0.1094337,
   0.1162156,
   0.1439214,
   0.2019206};
   TGraphErrors *gre = new TGraphErrors(7,_fx1103,_fy1103,_fex1103,_fey1103);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1103 = new TH1F("Graph_Graph1103","S12S18",100,736.4265,2507.158);
   Graph_Graph1103->SetMinimum(-1.193567);
   Graph_Graph1103->SetMaximum(1.520122);
   Graph_Graph1103->SetDirectory(0);
   Graph_Graph1103->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1103->SetLineColor(ci);
   Graph_Graph1103->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1103->GetXaxis()->CenterTitle(true);
   Graph_Graph1103->GetXaxis()->SetLabelFont(42);
   Graph_Graph1103->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1103->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1103->GetXaxis()->SetTitleFont(42);
   Graph_Graph1103->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 250 MeV");
   Graph_Graph1103->GetYaxis()->CenterTitle(true);
   Graph_Graph1103->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1103->GetYaxis()->SetLabelFont(42);
   Graph_Graph1103->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1103->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1103->GetYaxis()->SetTitleFont(42);
   Graph_Graph1103->GetZaxis()->SetLabelFont(42);
   Graph_Graph1103->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1103->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1103);
   
   
   TF1 *pol01104 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01104->SetFillColor(19);
   pol01104->SetFillStyle(0);
   pol01104->SetLineColor(2);
   pol01104->SetLineWidth(2);
   pol01104->SetChisquare(13.54573);
   pol01104->SetNDF(6);
   pol01104->GetXaxis()->SetLabelFont(42);
   pol01104->GetXaxis()->SetTitleOffset(1);
   pol01104->GetXaxis()->SetTitleFont(42);
   pol01104->GetYaxis()->SetLabelFont(42);
   pol01104->GetYaxis()->SetTitleFont(42);
   pol01104->SetParameter(0,-0.004007827);
   pol01104->SetParError(0,0.05289355);
   pol01104->SetParLimits(0,0,0);
   pol01104->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01104);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1c","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.00401
#pm0.05
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
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
