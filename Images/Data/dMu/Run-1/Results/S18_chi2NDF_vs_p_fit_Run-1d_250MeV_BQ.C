void S18_chi2NDF_vs_p_fit_Run-1d_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May  6 12:17:52 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(471.535,-0.8717698,3017.925,2.87823);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S18_chi2NDF_vs_p_fx1021[11] = {
   456.4994,
   653.4499,
   883.631,
   1127.239,
   1372.894,
   1619.454,
   1866.549,
   2115.743,
   2359.196,
   2606.768,
   2781.696};
   Double_t S18_chi2NDF_vs_p_fy1021[11] = {
   0.774865,
   0.8551379,
   1.099457,
   1.321628,
   0.9141453,
   1.033124,
   0.9970081,
   0.5984843,
   1.154991,
   1.215012,
   1.153363};
   Double_t S18_chi2NDF_vs_p_fex1021[11] = {
   0.07995462,
   0.05676908,
   0.03850116,
   0.03504687,
   0.03491414,
   0.03891824,
   0.04811858,
   0.06101867,
   0.08111251,
   0.1114245,
   0.1932892};
   Double_t S18_chi2NDF_vs_p_fey1021[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,S18_chi2NDF_vs_p_fx1021,S18_chi2NDF_vs_p_fy1021,S18_chi2NDF_vs_p_fex1021,S18_chi2NDF_vs_p_fey1021);
   gre->SetName("S18_chi2NDF_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_chi2NDF_vs_p1021 = new TH1F("Graph_S18_chi2NDF_vs_p1021","",100,223.8725,3014.437);
   Graph_S18_chi2NDF_vs_p1021->SetMinimum(-0.4967698);
   Graph_S18_chi2NDF_vs_p1021->SetMaximum(2.50323);
   Graph_S18_chi2NDF_vs_p1021->SetDirectory(0);
   Graph_S18_chi2NDF_vs_p1021->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S18_chi2NDF_vs_p1021->SetLineColor(ci);
   Graph_S18_chi2NDF_vs_p1021->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S18_chi2NDF_vs_p1021->GetXaxis()->SetRange(19,91);
   Graph_S18_chi2NDF_vs_p1021->GetXaxis()->CenterTitle(true);
   Graph_S18_chi2NDF_vs_p1021->GetXaxis()->SetLabelFont(42);
   Graph_S18_chi2NDF_vs_p1021->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_chi2NDF_vs_p1021->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_chi2NDF_vs_p1021->GetXaxis()->SetTitleFont(42);
   Graph_S18_chi2NDF_vs_p1021->GetYaxis()->SetTitle("#chi^{2}_{NDF} / 250 MeV");
   Graph_S18_chi2NDF_vs_p1021->GetYaxis()->CenterTitle(true);
   Graph_S18_chi2NDF_vs_p1021->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_chi2NDF_vs_p1021->GetYaxis()->SetLabelFont(42);
   Graph_S18_chi2NDF_vs_p1021->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_chi2NDF_vs_p1021->GetYaxis()->SetTitleOffset(1.1);
   Graph_S18_chi2NDF_vs_p1021->GetYaxis()->SetTitleFont(42);
   Graph_S18_chi2NDF_vs_p1021->GetZaxis()->SetLabelFont(42);
   Graph_S18_chi2NDF_vs_p1021->GetZaxis()->SetTitleOffset(1);
   Graph_S18_chi2NDF_vs_p1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_chi2NDF_vs_p1021);
   
   
   TF1 *pol01022 = new TF1("pol0","pol0",1000,2500, TF1::EAddToList::kNo);
   pol01022->SetFillColor(19);
   pol01022->SetFillStyle(0);
   pol01022->SetLineColor(2);
   pol01022->SetLineWidth(2);
   pol01022->SetChisquare(0.2970965);
   pol01022->SetNDF(5);
   pol01022->GetXaxis()->SetLabelFont(42);
   pol01022->GetXaxis()->SetTitleOffset(1);
   pol01022->GetXaxis()->SetTitleFont(42);
   pol01022->GetYaxis()->SetLabelFont(42);
   pol01022->GetYaxis()->SetTitleFont(42);
   pol01022->SetParameter(0,1.00323);
   pol01022->SetParError(0,0.0995149);
   pol01022->SetParLimits(0,0,0);
   pol01022->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01022);
   gre->Draw("apl");
   
   TLegend *leg = new TLegend(0.41,0.75,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S18_chi2NDF_vs_p","Run-1d","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#chi^{2}/NDF#GT = 1
#pm0.1
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
