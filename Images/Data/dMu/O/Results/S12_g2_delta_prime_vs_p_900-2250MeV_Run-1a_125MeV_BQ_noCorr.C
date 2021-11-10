void S12_g2_delta_prime_vs_p_900-2250MeV_Run-1a_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:08:23 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(624.5,-0.1701927,2499.5,0.2665111);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1151[11] = {
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
   Double_t _fy1151[11] = {
   0.07738565,
   0.06120541,
   0.04396535,
   0.02230189,
   0.09811354,
   -0.08018995,
   0.01620398,
   0.01684036,
   -0.04915614,
   0.03139816,
   0.03000425};
   Double_t _fex1151[11] = {
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
   Double_t _fey1151[11] = {
   0.05289276,
   0.04652108,
   0.04199549,
   0.03925838,
   0.03711707,
   0.03706591,
   0.03567919,
   0.03670465,
   0.03681972,
   0.03844988,
   0.03892675};
   TGraphErrors *gre = new TGraphErrors(11,_fx1151,_fy1151,_fex1151,_fey1151);
   gre->SetName("");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1151 = new TH1F("Graph_Graph1151","S12_",100,812,2312);
   Graph_Graph1151->SetMinimum(-0.1265223);
   Graph_Graph1151->SetMaximum(0.2228408);
   Graph_Graph1151->SetDirectory(0);
   Graph_Graph1151->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1151->SetLineColor(ci);
   Graph_Graph1151->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1151->GetXaxis()->CenterTitle(true);
   Graph_Graph1151->GetXaxis()->SetLabelFont(42);
   Graph_Graph1151->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1151->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1151->GetXaxis()->SetTitleFont(42);
   Graph_Graph1151->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 125 MeV");
   Graph_Graph1151->GetYaxis()->CenterTitle(true);
   Graph_Graph1151->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1151->GetYaxis()->SetLabelFont(42);
   Graph_Graph1151->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1151->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1151->GetYaxis()->SetTitleFont(42);
   Graph_Graph1151->GetZaxis()->SetLabelFont(42);
   Graph_Graph1151->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1151->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1151);
   
   
   TF1 *pol01152 = new TF1("pol0","pol0",900,2250, TF1::EAddToList::kNo);
   pol01152->SetFillColor(19);
   pol01152->SetFillStyle(0);
   pol01152->SetLineColor(2);
   pol01152->SetLineWidth(2);
   pol01152->SetChisquare(17.72463);
   pol01152->SetNDF(10);
   pol01152->GetXaxis()->SetLabelFont(42);
   pol01152->GetXaxis()->SetTitleOffset(1);
   pol01152->GetXaxis()->SetTitleFont(42);
   pol01152->GetYaxis()->SetLabelFont(42);
   pol01152->GetYaxis()->SetTitleFont(42);
   pol01152->SetParameter(0,0.01948972);
   pol01152->SetParError(0,0.01187546);
   pol01152->SetParLimits(0,0,0);
   pol01152->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01152);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.019
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
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
