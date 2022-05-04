void S12_EDM_delta_prime_vs_p_750-2500MeV_Run-1c_250MeV_BQ_noDilCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  3 11:57:07 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(515.5161,-0.9758255,2728.522,1.086898);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1025[7] = {
   884.3505,
   1127.522,
   1373.594,
   1620.299,
   1867.139,
   2116.241,
   2359.688};
   Double_t _fy1025[7] = {
   0.02605209,
   0.09020821,
   0.1058375,
   0.08454294,
   0.1033719,
   0.06612164,
   0.07534958};
   Double_t _fex1025[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1025[7] = {
   0.04560516,
   0.03686946,
   0.02478841,
   0.02149875,
   0.0240642,
   0.02797637,
   0.02916124};
   TGraphErrors *gre = new TGraphErrors(7,_fx1025,_fy1025,_fex1025,_fey1025);
   gre->SetName("");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1025 = new TH1F("Graph_Graph1025","S12",100,736.8167,2507.221);
   Graph_Graph1025->SetMinimum(-0.7695531);
   Graph_Graph1025->SetMaximum(0.8806259);
   Graph_Graph1025->SetDirectory(0);
   Graph_Graph1025->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1025->SetLineColor(ci);
   Graph_Graph1025->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1025->GetXaxis()->CenterTitle(true);
   Graph_Graph1025->GetXaxis()->SetLabelFont(42);
   Graph_Graph1025->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1025->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1025->GetXaxis()->SetTitleFont(42);
   Graph_Graph1025->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 250 MeV");
   Graph_Graph1025->GetYaxis()->CenterTitle(true);
   Graph_Graph1025->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1025->GetYaxis()->SetLabelFont(42);
   Graph_Graph1025->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1025->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1025->GetYaxis()->SetTitleFont(42);
   Graph_Graph1025->GetZaxis()->SetLabelFont(42);
   Graph_Graph1025->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1025);
   
   
   TF1 *pol01026 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01026->SetFillColor(19);
   pol01026->SetFillStyle(0);
   pol01026->SetLineColor(2);
   pol01026->SetLineWidth(2);
   pol01026->SetChisquare(3.543141);
   pol01026->SetNDF(6);
   pol01026->GetXaxis()->SetLabelFont(42);
   pol01026->GetXaxis()->SetTitleOffset(1);
   pol01026->GetXaxis()->SetTitleFont(42);
   pol01026->GetYaxis()->SetLabelFont(42);
   pol01026->GetYaxis()->SetTitleFont(42);
   pol01026->SetParameter(0,0.08550813);
   pol01026->SetParError(0,0.01043256);
   pol01026->SetParLimits(0,0,0);
   pol01026->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01026);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.0855
#pm0.01
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
