void S12S18_EDM_delta_prime_vs_p_1025-2125MeV_Run-1b_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 13:39:41 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(812,-0.1019252,2312,0.1164242);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1065[9] = {
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062};
   Double_t _fy1065[9] = {
   0.007249519,
   0.05514537,
   -0.008313159,
   -0.0003952181,
   -0.03202853,
   0.000605823,
   0.02785516,
   -0.001044437,
   -0.01765109};
   Double_t _fex1065[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1065[9] = {
   0.0317599,
   0.02864782,
   0.02690958,
   0.02559131,
   0.02553826,
   0.02477364,
   0.0256522,
   0.02589133,
   0.02712786};
   TGraphErrors *gre = new TGraphErrors(9,_fx1065,_fy1065,_fex1065,_fey1065);
   gre->SetName("");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1065 = new TH1F("Graph_Graph1065","S12S18_",100,962,2162);
   Graph_Graph1065->SetMinimum(-0.08009022);
   Graph_Graph1065->SetMaximum(0.09458925);
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
   Graph_Graph1065->GetYaxis()->SetTitle("#delta'_{c}^{} [mrad] / 125 MeV");
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
   
   
   TF1 *pol01066 = new TF1("pol0","pol0",1025,2125, TF1::EAddToList::kNo);
   pol01066->SetFillColor(19);
   pol01066->SetFillStyle(0);
   pol01066->SetLineColor(2);
   pol01066->SetLineWidth(2);
   pol01066->SetChisquare(6.954978);
   pol01066->SetNDF(8);
   pol01066->GetXaxis()->SetLabelFont(42);
   pol01066->GetXaxis()->SetTitleOffset(1);
   pol01066->GetXaxis()->SetTitleFont(42);
   pol01066->GetYaxis()->SetLabelFont(42);
   pol01066->GetYaxis()->SetTitleFont(42);
   pol01066->SetParameter(0,0.00244756);
   pol01066->SetParError(0,0.00889086);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.0024
#pm0.009
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
