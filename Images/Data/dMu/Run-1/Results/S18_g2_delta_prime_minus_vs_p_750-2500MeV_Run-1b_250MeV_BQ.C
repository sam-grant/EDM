void S18_g2_delta_prime_minus_vs_p_750-2500MeV_Run-1b_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  3 11:57:53 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(514.7194,-1.85696,2728.173,1.492727);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1065[7] = {
   883.6284,
   1127.172,
   1372.863,
   1619.552,
   1866.463,
   2116.151,
   2359.264};
   Double_t _fy1065[7] = {
   -0.003791201,
   -0.4293182,
   0.01224469,
   0.1922917,
   -0.3271037,
   -0.3654418,
   -0.2925094};
   Double_t _fex1065[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1065[7] = {
   0.3625643,
   0.3426735,
   0.2245386,
   0.2154669,
   0.2339479,
   0.3584677,
   0.3308414};
   TGraphErrors *gre = new TGraphErrors(7,_fx1065,_fy1065,_fex1065,_fey1065);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1065 = new TH1F("Graph_Graph1065","S18",100,736.0648,2506.828);
   Graph_Graph1065->SetMinimum(-1.521992);
   Graph_Graph1065->SetMaximum(1.157759);
   Graph_Graph1065->SetDirectory(0);
   Graph_Graph1065->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1065->SetLineColor(ci);
   Graph_Graph1065->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1065->GetXaxis()->CenterTitle(true);
   Graph_Graph1065->GetXaxis()->SetLabelFont(42);
   Graph_Graph1065->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1065->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1065->GetXaxis()->SetTitleFont(42);
   Graph_Graph1065->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 250 MeV");
   Graph_Graph1065->GetYaxis()->CenterTitle(true);
   Graph_Graph1065->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1065->GetYaxis()->SetLabelFont(42);
   Graph_Graph1065->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1065->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1065->GetYaxis()->SetTitleFont(42);
   Graph_Graph1065->GetZaxis()->SetLabelFont(42);
   Graph_Graph1065->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1065->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1065);
   
   
   TF1 *pol01066 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01066->SetFillColor(19);
   pol01066->SetFillStyle(0);
   pol01066->SetLineColor(2);
   pol01066->SetLineWidth(2);
   pol01066->SetChisquare(4.888288);
   pol01066->SetNDF(6);
   pol01066->GetXaxis()->SetLabelFont(42);
   pol01066->GetXaxis()->SetTitleOffset(1);
   pol01066->GetXaxis()->SetTitleFont(42);
   pol01066->GetYaxis()->SetLabelFont(42);
   pol01066->GetYaxis()->SetTitleFont(42);
   pol01066->SetParameter(0,-0.1164462);
   pol01066->SetParError(0,0.1038703);
   pol01066->SetParLimits(0,0,0);
   pol01066->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01066);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1b","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.116
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
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
