void S12S18_EDM_delta_prime_plus_vs_p_750-2500MeV_Run-1a_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May  4 12:58:25 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(514.9475,-1.121947,2728.833,1.900719);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1055[7] = {
   883.9284,
   1127.495,
   1373.325,
   1619.956,
   1866.969,
   2116.15,
   2359.852};
   Double_t _fy1055[7] = {
   0.6541368,
   0.3821267,
   0.3594787,
   0.3612303,
   0.1425367,
   0.4197611,
   0.4098604};
   Double_t _fex1055[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1055[7] = {
   0.1943155,
   0.1615202,
   0.1413634,
   0.141323,
   0.2122167,
   0.1608049,
   0.332029};
   TGraphErrors *gre = new TGraphErrors(7,_fx1055,_fy1055,_fex1055,_fey1055);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1055 = new TH1F("Graph_Graph1055","S12S18",100,736.336,2507.445);
   Graph_Graph1055->SetMinimum(-0.81968);
   Graph_Graph1055->SetMaximum(1.598452);
   Graph_Graph1055->SetDirectory(0);
   Graph_Graph1055->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1055->SetLineColor(ci);
   Graph_Graph1055->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1055->GetXaxis()->CenterTitle(true);
   Graph_Graph1055->GetXaxis()->SetLabelFont(42);
   Graph_Graph1055->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1055->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1055->GetXaxis()->SetTitleFont(42);
   Graph_Graph1055->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 250 MeV");
   Graph_Graph1055->GetYaxis()->CenterTitle(true);
   Graph_Graph1055->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1055->GetYaxis()->SetLabelFont(42);
   Graph_Graph1055->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1055->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1055->GetYaxis()->SetTitleFont(42);
   Graph_Graph1055->GetZaxis()->SetLabelFont(42);
   Graph_Graph1055->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1055->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1055);
   
   
   TF1 *pol01056 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01056->SetFillColor(19);
   pol01056->SetFillStyle(0);
   pol01056->SetLineColor(2);
   pol01056->SetLineWidth(2);
   pol01056->SetChisquare(3.334957);
   pol01056->SetNDF(6);
   pol01056->GetXaxis()->SetLabelFont(42);
   pol01056->GetXaxis()->SetTitleOffset(1);
   pol01056->GetXaxis()->SetTitleFont(42);
   pol01056->GetYaxis()->SetLabelFont(42);
   pol01056->GetYaxis()->SetTitleFont(42);
   pol01056->SetParameter(0,0.3881357);
   pol01056->SetParError(0,0.06525044);
   pol01056->SetParLimits(0,0,0);
   pol01056->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01056);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1a","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.388
#pm0.07
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
