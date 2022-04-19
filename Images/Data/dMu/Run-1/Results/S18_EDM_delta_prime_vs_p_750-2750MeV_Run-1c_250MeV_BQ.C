void S18_EDM_delta_prime_vs_p_750-2750MeV_Run-1c_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 20 00:14:56 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(452.9039,-1.193091,3037.134,4.285769);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1027[8] = {
   883.6089,
   1127.304,
   1372.916,
   1619.588,
   1866.593,
   2115.809,
   2359.485,
   2606.429};
   Double_t _fy1027[8] = {
   0.8572294,
   0.8836861,
   0.2785998,
   0.5763901,
   1.106321,
   0.7196668,
   0.5463424,
   2.236008};
   Double_t _fex1027[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1027[8] = {
   0.3364271,
   0.1879815,
   0.1738047,
   0.187006,
   0.3052023,
   0.2235257,
   0.240066,
   0.7518745};
   TGraphErrors *gre = new TGraphErrors(8,_fx1027,_fy1027,_fex1027,_fey1027);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1027 = new TH1F("Graph_Graph1027","S18",100,711.3269,2778.711);
   Graph_Graph1027->SetMinimum(-0.6452049);
   Graph_Graph1027->SetMaximum(3.737883);
   Graph_Graph1027->SetDirectory(0);
   Graph_Graph1027->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1027->SetLineColor(ci);
   Graph_Graph1027->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1027->GetXaxis()->CenterTitle(true);
   Graph_Graph1027->GetXaxis()->SetLabelFont(42);
   Graph_Graph1027->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1027->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1027->GetXaxis()->SetTitleFont(42);
   Graph_Graph1027->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 250 MeV");
   Graph_Graph1027->GetYaxis()->CenterTitle(true);
   Graph_Graph1027->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1027->GetYaxis()->SetLabelFont(42);
   Graph_Graph1027->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1027->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1027->GetYaxis()->SetTitleFont(42);
   Graph_Graph1027->GetZaxis()->SetLabelFont(42);
   Graph_Graph1027->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1027);
   
   
   TF1 *pol01028 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01028->SetFillColor(19);
   pol01028->SetFillStyle(0);
   pol01028->SetLineColor(2);
   pol01028->SetLineWidth(2);
   pol01028->SetChisquare(13.60247);
   pol01028->SetNDF(7);
   pol01028->GetXaxis()->SetLabelFont(42);
   pol01028->GetXaxis()->SetTitleOffset(1);
   pol01028->GetXaxis()->SetTitleFont(42);
   pol01028->GetYaxis()->SetLabelFont(42);
   pol01028->GetYaxis()->SetTitleFont(42);
   pol01028->SetParameter(0,0.6590414);
   pol01028->SetParError(0,0.08200486);
   pol01028->SetParLimits(0,0,0);
   pol01028->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01028);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.659
#pm0.08
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
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
