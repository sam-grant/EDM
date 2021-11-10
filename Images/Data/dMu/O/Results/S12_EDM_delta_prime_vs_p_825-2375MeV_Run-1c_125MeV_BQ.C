void S12_EDM_delta_prime_vs_p_825-2375MeV_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:03:55 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(593.25,-1.914802,2655.75,1.991822);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1121[12] = {
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
   2312};
   Double_t _fy1121[12] = {
   0.03850997,
   0.9519777,
   0.1471756,
   -0.4329806,
   -0.01308397,
   -0.3642475,
   0.441843,
   -0.6801439,
   0.2429208,
   -0.5146535,
   -0.3964917,
   0.3547526};
   Double_t _fex1121[12] = {
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
   Double_t _fey1121[12] = {
   0.5682363,
   0.4595923,
   0.3953221,
   0.3581924,
   0.3341654,
   0.3388065,
   0.3355194,
   0.3628854,
   0.3931214,
   0.4560559,
   0.5367831,
   0.6880416};
   TGraphErrors *gre = new TGraphErrors(12,_fx1121,_fy1121,_fex1121,_fey1121);
   gre->SetName("");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1121 = new TH1F("Graph_Graph1121","S12_",100,799.5,2449.5);
   Graph_Graph1121->SetMinimum(-1.52414);
   Graph_Graph1121->SetMaximum(1.60116);
   Graph_Graph1121->SetDirectory(0);
   Graph_Graph1121->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1121->SetLineColor(ci);
   Graph_Graph1121->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1121->GetXaxis()->CenterTitle(true);
   Graph_Graph1121->GetXaxis()->SetLabelFont(42);
   Graph_Graph1121->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1121->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1121->GetXaxis()->SetTitleFont(42);
   Graph_Graph1121->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 125 MeV");
   Graph_Graph1121->GetYaxis()->CenterTitle(true);
   Graph_Graph1121->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1121->GetYaxis()->SetLabelFont(42);
   Graph_Graph1121->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1121->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1121->GetYaxis()->SetTitleFont(42);
   Graph_Graph1121->GetZaxis()->SetLabelFont(42);
   Graph_Graph1121->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1121->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1121);
   
   
   TF1 *pol01122 = new TF1("pol0","pol0",825,2375, TF1::EAddToList::kNo);
   pol01122->SetFillColor(19);
   pol01122->SetFillStyle(0);
   pol01122->SetLineColor(2);
   pol01122->SetLineWidth(2);
   pol01122->SetChisquare(14.56137);
   pol01122->SetNDF(11);
   pol01122->GetXaxis()->SetLabelFont(42);
   pol01122->GetXaxis()->SetTitleOffset(1);
   pol01122->GetXaxis()->SetTitleFont(42);
   pol01122->GetYaxis()->SetLabelFont(42);
   pol01122->GetYaxis()->SetTitleFont(42);
   pol01122->SetParameter(0,-0.05294219);
   pol01122->SetParError(0,0.1170175);
   pol01122->SetParLimits(0,0,0);
   pol01122->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01122);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.053
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
