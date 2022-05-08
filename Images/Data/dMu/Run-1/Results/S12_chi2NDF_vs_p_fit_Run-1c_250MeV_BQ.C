void S12_chi2NDF_vs_p_fit_Run-1c_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May  6 12:17:52 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(471.0892,-0.7692535,3017.337,2.980747);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12_chi2NDF_vs_p_fx1013[11] = {
   456.0861,
   655.6285,
   884.3505,
   1127.522,
   1373.594,
   1620.299,
   1867.139,
   2116.241,
   2359.688,
   2607.54,
   2781.094};
   Double_t S12_chi2NDF_vs_p_fy1013[11] = {
   1.147177,
   0.9528553,
   1.361713,
   1.609797,
   1.022437,
   1.227401,
   0.9585169,
   1.11277,
   0.7035568,
   1.027523,
   1.279178};
   Double_t S12_chi2NDF_vs_p_fex1013[11] = {
   0.1116271,
   0.07807486,
   0.05127415,
   0.0465371,
   0.04560658,
   0.05024335,
   0.06051896,
   0.07584685,
   0.09852744,
   0.1381994,
   0.2207759};
   Double_t S12_chi2NDF_vs_p_fey1013[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,S12_chi2NDF_vs_p_fx1013,S12_chi2NDF_vs_p_fy1013,S12_chi2NDF_vs_p_fex1013,S12_chi2NDF_vs_p_fey1013);
   gre->SetName("S12_chi2NDF_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_chi2NDF_vs_p1013 = new TH1F("Graph_S12_chi2NDF_vs_p1013","",100,223.4404,3013.849);
   Graph_S12_chi2NDF_vs_p1013->SetMinimum(-0.3942534);
   Graph_S12_chi2NDF_vs_p1013->SetMaximum(2.605747);
   Graph_S12_chi2NDF_vs_p1013->SetDirectory(0);
   Graph_S12_chi2NDF_vs_p1013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12_chi2NDF_vs_p1013->SetLineColor(ci);
   Graph_S12_chi2NDF_vs_p1013->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12_chi2NDF_vs_p1013->GetXaxis()->SetRange(19,91);
   Graph_S12_chi2NDF_vs_p1013->GetXaxis()->CenterTitle(true);
   Graph_S12_chi2NDF_vs_p1013->GetXaxis()->SetLabelFont(42);
   Graph_S12_chi2NDF_vs_p1013->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_chi2NDF_vs_p1013->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_chi2NDF_vs_p1013->GetXaxis()->SetTitleFont(42);
   Graph_S12_chi2NDF_vs_p1013->GetYaxis()->SetTitle("#chi^{2}_{NDF} / 250 MeV");
   Graph_S12_chi2NDF_vs_p1013->GetYaxis()->CenterTitle(true);
   Graph_S12_chi2NDF_vs_p1013->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_chi2NDF_vs_p1013->GetYaxis()->SetLabelFont(42);
   Graph_S12_chi2NDF_vs_p1013->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_chi2NDF_vs_p1013->GetYaxis()->SetTitleOffset(1.1);
   Graph_S12_chi2NDF_vs_p1013->GetYaxis()->SetTitleFont(42);
   Graph_S12_chi2NDF_vs_p1013->GetZaxis()->SetLabelFont(42);
   Graph_S12_chi2NDF_vs_p1013->GetZaxis()->SetTitleOffset(1);
   Graph_S12_chi2NDF_vs_p1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_chi2NDF_vs_p1013);
   
   
   TF1 *pol01014 = new TF1("pol0","pol0",1000,2500, TF1::EAddToList::kNo);
   pol01014->SetFillColor(19);
   pol01014->SetFillStyle(0);
   pol01014->SetLineColor(2);
   pol01014->SetLineWidth(2);
   pol01014->SetChisquare(0.4592898);
   pol01014->SetNDF(5);
   pol01014->GetXaxis()->SetLabelFont(42);
   pol01014->GetXaxis()->SetTitleOffset(1);
   pol01014->GetXaxis()->SetTitleFont(42);
   pol01014->GetYaxis()->SetLabelFont(42);
   pol01014->GetYaxis()->SetTitleFont(42);
   pol01014->SetParameter(0,1.105747);
   pol01014->SetParError(0,0.1237322);
   pol01014->SetParLimits(0,0,0);
   pol01014->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01014);
   gre->Draw("apl");
   
   TLegend *leg = new TLegend(0.41,0.75,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S12_chi2NDF_vs_p","Run-1c","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#chi^{2}/NDF#GT = 1.11
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
