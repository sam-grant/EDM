void S12S18_EDM_delta_prime_vs_p_900-2250MeV_Run-1b_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:07:51 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(624.5,-0.04028475,2499.5,0.1152734);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1065[11] = {
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
   Double_t _fy1065[11] = {
   0.03749435,
   0.05626358,
   0.01137256,
   0.03390514,
   0.01810715,
   0.0188262,
   0.01294591,
   0.008695611,
   0.02644695,
   0.05542757,
   0.01238596};
   Double_t _fex1065[11] = {
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
   Double_t _fey1065[11] = {
   0.02262665,
   0.01992859,
   0.01797313,
   0.01690583,
   0.01602186,
   0.01598967,
   0.01549716,
   0.01605777,
   0.0162355,
   0.01698935,
   0.01719614};
   TGraphErrors *gre = new TGraphErrors(11,_fx1065,_fy1065,_fex1065,_fey1065);
   gre->SetName("");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1065 = new TH1F("Graph_Graph1065","S12S18_",100,812,2312);
   Graph_Graph1065->SetMinimum(-0.02472893);
   Graph_Graph1065->SetMaximum(0.09971762);
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
   Graph_Graph1065->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 125 MeV");
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
   
   
   TF1 *pol01066 = new TF1("pol0","pol0",900,2250, TF1::EAddToList::kNo);
   pol01066->SetFillColor(19);
   pol01066->SetFillStyle(0);
   pol01066->SetLineColor(2);
   pol01066->SetLineWidth(2);
   pol01066->SetChisquare(9.341663);
   pol01066->SetNDF(10);
   pol01066->GetXaxis()->SetLabelFont(42);
   pol01066->GetXaxis()->SetTitleOffset(1);
   pol01066->GetXaxis()->SetTitleFont(42);
   pol01066->GetYaxis()->SetLabelFont(42);
   pol01066->GetYaxis()->SetTitleFont(42);
   pol01066->SetParameter(0,0.02489147);
   pol01066->SetParError(0,0.005160216);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.025
#pm0.005
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
