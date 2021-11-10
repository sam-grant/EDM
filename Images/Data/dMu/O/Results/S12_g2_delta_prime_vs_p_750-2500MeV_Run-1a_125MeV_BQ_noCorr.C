void S12_g2_delta_prime_vs_p_750-2500MeV_Run-1a_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 13:49:14 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(405.75,-0.2431074,2843.25,0.2026929);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1055[14] = {
   812,
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
   2187,
   2312,
   2437};
   Double_t _fy1055[14] = {
   -0.02020725,
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
   0.03000425,
   0.04923986,
   -0.04232251};
   Double_t _fex1055[14] = {
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
   Double_t _fey1055[14] = {
   0.06484367,
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
   0.03892675,
   0.04090705,
   0.04398302};
   TGraphErrors *gre = new TGraphErrors(14,_fx1055,_fy1055,_fex1055,_fey1055);
   gre->SetName("");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1055 = new TH1F("Graph_Graph1055","S12_",100,649.5,2599.5);
   Graph_Graph1055->SetMinimum(-0.1985273);
   Graph_Graph1055->SetMaximum(0.1581128);
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
   Graph_Graph1055->GetYaxis()->SetTitle("#delta'_{c}^{} [mrad] / 125 MeV");
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
   pol01056->SetChisquare(20.53733);
   pol01056->SetNDF(13);
   pol01056->GetXaxis()->SetLabelFont(42);
   pol01056->GetXaxis()->SetTitleOffset(1);
   pol01056->GetXaxis()->SetTitleFont(42);
   pol01056->GetYaxis()->SetLabelFont(42);
   pol01056->GetYaxis()->SetTitleFont(42);
   pol01056->SetParameter(0,0.01669278);
   pol01056->SetParError(0,0.01088294);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.017
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
