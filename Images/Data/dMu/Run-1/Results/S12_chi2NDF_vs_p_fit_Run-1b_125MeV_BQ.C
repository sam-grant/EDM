void S12_chi2NDF_vs_p_fit_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  8 14:22:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(462.631,-0.9422032,3036.691,2.807797);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12_chi2NDF_vs_p_fx1007[22] = {
   366.9979,
   456.7467,
   570.2452,
   695.0474,
   815.9733,
   938.7135,
   1062.734,
   1188.27,
   1312.739,
   1435.93,
   1561.976,
   1685.237,
   1810.655,
   1935.236,
   2060.303,
   2185.135,
   2309.226,
   2432.987,
   2559.503,
   2679.174,
   2780.715,
   2888.448};
   Double_t S12_chi2NDF_vs_p_fy1007[22] = {
   1.866683,
   0.6542934,
   1.004837,
   0.822694,
   0.6051589,
   0.6934302,
   1.558865,
   1.117781,
   1.145862,
   0.8283981,
   1.531939,
   1.003997,
   0.7315638,
   0.8198226,
   0.4688627,
   0.6785839,
   1.241863,
   0.8653888,
   0.9455261,
   0.6877072,
   1.02075,
   3.537721};
   Double_t S12_chi2NDF_vs_p_fex1007[22] = {
   0.2632858,
   0.1313502,
   0.0889277,
   0.05996606,
   0.04796851,
   0.04307472,
   0.04092389,
   0.03946989,
   0.03984111,
   0.03998827,
   0.04282143,
   0.04494925,
   0.05029794,
   0.05500769,
   0.06267773,
   0.06901985,
   0.07946472,
   0.09532527,
   0.1141395,
   0.1308164,
   0.261301,
   1.874823};
   Double_t S12_chi2NDF_vs_p_fey1007[22] = {
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
   TGraphErrors *gre = new TGraphErrors(22,S12_chi2NDF_vs_p_fx1007,S12_chi2NDF_vs_p_fy1007,S12_chi2NDF_vs_p_fex1007,S12_chi2NDF_vs_p_fey1007);
   gre->SetName("S12_chi2NDF_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_chi2NDF_vs_p1007 = new TH1F("Graph_S12_chi2NDF_vs_p1007","",100,114.3759,3142.681);
   Graph_S12_chi2NDF_vs_p1007->SetMinimum(-0.5672032);
   Graph_S12_chi2NDF_vs_p1007->SetMaximum(2.432797);
   Graph_S12_chi2NDF_vs_p1007->SetDirectory(0);
   Graph_S12_chi2NDF_vs_p1007->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12_chi2NDF_vs_p1007->SetLineColor(ci);
   Graph_S12_chi2NDF_vs_p1007->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12_chi2NDF_vs_p1007->GetXaxis()->SetRange(21,88);
   Graph_S12_chi2NDF_vs_p1007->GetXaxis()->CenterTitle(true);
   Graph_S12_chi2NDF_vs_p1007->GetXaxis()->SetLabelFont(42);
   Graph_S12_chi2NDF_vs_p1007->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_chi2NDF_vs_p1007->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_chi2NDF_vs_p1007->GetXaxis()->SetTitleFont(42);
   Graph_S12_chi2NDF_vs_p1007->GetYaxis()->SetTitle("#chi^{2}_{NDF} / 125 MeV");
   Graph_S12_chi2NDF_vs_p1007->GetYaxis()->CenterTitle(true);
   Graph_S12_chi2NDF_vs_p1007->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_chi2NDF_vs_p1007->GetYaxis()->SetLabelFont(42);
   Graph_S12_chi2NDF_vs_p1007->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_chi2NDF_vs_p1007->GetYaxis()->SetTitleOffset(1.1);
   Graph_S12_chi2NDF_vs_p1007->GetYaxis()->SetTitleFont(42);
   Graph_S12_chi2NDF_vs_p1007->GetZaxis()->SetLabelFont(42);
   Graph_S12_chi2NDF_vs_p1007->GetZaxis()->SetTitleOffset(1);
   Graph_S12_chi2NDF_vs_p1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_chi2NDF_vs_p1007);
   
   
   TF1 *pol01008 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01008->SetFillColor(19);
   pol01008->SetFillStyle(0);
   pol01008->SetLineColor(2);
   pol01008->SetLineWidth(2);
   pol01008->SetChisquare(1.504574);
   pol01008->SetNDF(15);
   pol01008->GetXaxis()->SetLabelFont(42);
   pol01008->GetXaxis()->SetTitleOffset(1);
   pol01008->GetXaxis()->SetTitleFont(42);
   pol01008->GetYaxis()->SetLabelFont(42);
   pol01008->GetYaxis()->SetTitleFont(42);
   pol01008->SetParameter(0,0.9327968);
   pol01008->SetParError(0,0.07917738);
   pol01008->SetParLimits(0,0,0);
   pol01008->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01008);
   gre->Draw("apl");
   
   TLegend *leg = new TLegend(0.41,0.75,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S12_chi2NDF_vs_p","Run-1b","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#chi^{2}/NDF#GT = 0.933
#pm0.08
","lpf");
   entry->SetFillColor(19);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
