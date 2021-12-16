void S12S18_chi2NDF_vs_p_fit_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  8 14:22:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(462.8618,-0.8983927,3032.519,2.851607);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12S18_chi2NDF_vs_p_fx1023[22] = {
   367.2399,
   457.0435,
   570.1011,
   694.7916,
   815.8541,
   938.5214,
   1062.733,
   1188.227,
   1312.688,
   1435.772,
   1561.976,
   1685.084,
   1810.538,
   1935.021,
   2060.267,
   2184.908,
   2309.091,
   2433.063,
   2559.665,
   2678.604,
   2781.208,
   2885.708};
   Double_t S12S18_chi2NDF_vs_p_fy1023[22] = {
   0.3873661,
   0.9275458,
   0.9629739,
   0.8435268,
   1.180979,
   1.238822,
   0.8542579,
   1.210577,
   0.7881706,
   0.7110777,
   1.101171,
   0.7580389,
   1.348895,
   0.444135,
   0.7250853,
   0.9612201,
   1.067091,
   1.62032,
   0.7506326,
   0.8652456,
   1.509564,
   1.758662};
   Double_t S12S18_chi2NDF_vs_p_fex1023[22] = {
   0.1103772,
   0.05519008,
   0.03677606,
   0.02532856,
   0.02042765,
   0.01846339,
   0.01750614,
   0.01694737,
   0.01725058,
   0.01734431,
   0.01867097,
   0.01969749,
   0.02225594,
   0.02439127,
   0.02792707,
   0.03086148,
   0.03575833,
   0.04314539,
   0.05137337,
   0.05886294,
   0.1209443,
   0.6931524};
   Double_t S12S18_chi2NDF_vs_p_fey1023[22] = {
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
   TGraphErrors *gre = new TGraphErrors(22,S12S18_chi2NDF_vs_p_fx1023,S12S18_chi2NDF_vs_p_fy1023,S12S18_chi2NDF_vs_p_fex1023,S12S18_chi2NDF_vs_p_fey1023);
   gre->SetName("S12S18_chi2NDF_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_chi2NDF_vs_p1023 = new TH1F("Graph_S12S18_chi2NDF_vs_p1023","",100,115.2023,3138.328);
   Graph_S12S18_chi2NDF_vs_p1023->SetMinimum(-0.5233926);
   Graph_S12S18_chi2NDF_vs_p1023->SetMaximum(2.476607);
   Graph_S12S18_chi2NDF_vs_p1023->SetDirectory(0);
   Graph_S12S18_chi2NDF_vs_p1023->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12S18_chi2NDF_vs_p1023->SetLineColor(ci);
   Graph_S12S18_chi2NDF_vs_p1023->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12S18_chi2NDF_vs_p1023->GetXaxis()->SetRange(21,88);
   Graph_S12S18_chi2NDF_vs_p1023->GetXaxis()->CenterTitle(true);
   Graph_S12S18_chi2NDF_vs_p1023->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_chi2NDF_vs_p1023->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_chi2NDF_vs_p1023->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_chi2NDF_vs_p1023->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_chi2NDF_vs_p1023->GetYaxis()->SetTitle("#chi^{2}_{NDF} / 125 MeV");
   Graph_S12S18_chi2NDF_vs_p1023->GetYaxis()->CenterTitle(true);
   Graph_S12S18_chi2NDF_vs_p1023->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_chi2NDF_vs_p1023->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_chi2NDF_vs_p1023->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_chi2NDF_vs_p1023->GetYaxis()->SetTitleOffset(1.1);
   Graph_S12S18_chi2NDF_vs_p1023->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_chi2NDF_vs_p1023->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_chi2NDF_vs_p1023->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_chi2NDF_vs_p1023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_chi2NDF_vs_p1023);
   
   
   TF1 *pol01024 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01024->SetFillColor(19);
   pol01024->SetFillStyle(0);
   pol01024->SetLineColor(2);
   pol01024->SetLineWidth(2);
   pol01024->SetChisquare(1.321182);
   pol01024->SetNDF(15);
   pol01024->GetXaxis()->SetLabelFont(42);
   pol01024->GetXaxis()->SetTitleOffset(1);
   pol01024->GetXaxis()->SetTitleFont(42);
   pol01024->GetYaxis()->SetLabelFont(42);
   pol01024->GetYaxis()->SetTitleFont(42);
   pol01024->SetParameter(0,0.9766074);
   pol01024->SetParError(0,0.07419518);
   pol01024->SetParLimits(0,0,0);
   pol01024->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01024);
   gre->Draw("apl");
   
   TLegend *leg = new TLegend(0.41,0.75,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S12S18_chi2NDF_vs_p","Run-1d","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#chi^{2}/NDF#GT = 0.977
#pm0.07
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
